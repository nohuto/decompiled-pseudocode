/*
 * XREFs of ?UnmapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX0@Z @ 0x1C00AE670
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0001D00 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0001D64 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0001D8C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C0005640 (-GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C00533DC (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::UnmapViewOfAllocationExternal(
        VIDMM_RECYCLE_HEAP_MGR *this,
        _QWORD *a2,
        void *a3)
{
  VIDMM_RECYCLE_HEAP_MGR *v5; // rcx
  unsigned __int64 SmallAllocationSize; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int64 v10; // r9
  void *v11; // rbx
  void *v12; // rax
  __int64 CurrentProcess; // rax
  _BYTE v14[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  SmallAllocationSize = VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(v5, 0);
  v10 = a2[5] - a2[4];
  if ( v10 <= SmallAllocationSize )
  {
    CurrentProcess = PsGetCurrentProcess(v8, v7, v9, v10);
    MmUnmapViewOfSection(CurrentProcess, a3);
  }
  else
  {
    v11 = *(void **)(a2[10] + 56LL);
    v12 = (void *)PsGetCurrentProcess(v8, v7, v9, v10);
    VidMmUnmapViewAsync(v12, v11, a3);
  }
  if ( v14[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
}
