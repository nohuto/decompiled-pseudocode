/*
 * XREFs of ?Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C00747C4
 * Callers:
 *     ?ResetUndo@VIDMM_RECYCLE_MULTIRANGE@@QEAAJXZ @ 0x1C004C0C0 (-ResetUndo@VIDMM_RECYCLE_MULTIRANGE@@QEAAJXZ.c)
 *     ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C006B880 (-Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?UnmapViewOfAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z @ 0x1C00A6EC0 (-UnmapViewOfAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z.c)
 * Callees:
 *     ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C0002360 (-GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C0081048 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::Unmap(VIDMM_RECYCLE_MULTIRANGE *this)
{
  __int64 v2; // rbx
  unsigned __int64 SmallAllocationSize; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // rdx
  __int64 v8; // rax
  void *v9; // rbx
  void *CurrentProcess; // rax

  if ( *((_BYTE *)this + 152) )
  {
    v2 = *((_QWORD *)this + 10);
    SmallAllocationSize = VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(
                            this,
                            (unsigned int)(**(_DWORD **)(v2 + 32) - 5) <= 1);
    v7 = *(_QWORD *)(v4 + 40) - *(_QWORD *)(v4 + 32);
    if ( v7 > SmallAllocationSize )
    {
      v9 = *(void **)(v2 + 56);
      CurrentProcess = (void *)PsGetCurrentProcess(v4, v7, v5, v6);
      VidMmUnmapViewAsync(CurrentProcess, v9, *((PVOID *)this + 20));
    }
    else
    {
      v8 = PsGetCurrentProcess(v4, v7, v5, v6);
      MmUnmapViewOfSection(v8, *((_QWORD *)this + 20));
    }
    *((_BYTE *)this + 152) = 0;
  }
  else
  {
    VidMmUnmapViewAsync(0LL, *(PVOID *)(*((_QWORD *)this + 10) + 56LL), *((PVOID *)this + 20));
    *((_BYTE *)this + 153) = 0;
  }
  *((_QWORD *)this + 20) = 0LL;
}
