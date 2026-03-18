/*
 * XREFs of ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C004C5EC
 * Callers:
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C004C420 (-VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 *     ?UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C004D380 (-UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C004D470 (-LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C004DD80 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C004E2FC (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C00A7580 (-LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@.c)
 *     ?UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00A7EF0 (-UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     McTemplateK0q @ 0x1C0016F44 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C0081048 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

void __fastcall VidMmUnmapViewOfAllocation(struct _VIDMM_LOCAL_ALLOC *a1, void *a2)
{
  __int64 v2; // rbx
  struct _VIDMM_LOCAL_ALLOC *v4; // rsi
  __int64 v5; // r8
  int v6; // edx
  char v7; // al
  void *CurrentProcess; // rdi
  __int64 v9; // rcx
  __int64 v10; // r8
  void *v11; // rcx

  v2 = *(_QWORD *)a1;
  v4 = a1;
  v5 = *(unsigned int *)(*(_QWORD *)a1 + 76LL);
  if ( (v5 & 0x100) == 0 || (*(_DWORD *)(v2 + 80) & 0x80u) == 0 )
  {
    if ( (*(_BYTE *)(v2 + 84) & 4) == 0 && (*(_DWORD *)(*(_QWORD *)a1 + 76LL) & 0x100) == 0 )
    {
      v6 = **(_DWORD **)(v2 + 504);
      if ( (v6 & 8) == 0 )
      {
        LOBYTE(a1) = (v6 & 0x40000030) == 0;
        if ( ((unsigned __int8)a1 & (*(_BYTE *)(v2 + 80) >= 0)) != 0 )
        {
          if ( (v6 & 0x20000000) != 0 )
          {
            v7 = *((_BYTE *)v4 + 32);
            if ( (v7 & 8) != 0 )
            {
              CurrentProcess = 0LL;
              *((_BYTE *)v4 + 32) = v7 & 0xF7;
            }
            else
            {
              CurrentProcess = (void *)PsGetCurrentProcess();
            }
            VidMmUnmapViewAsync(CurrentProcess, *(PVOID *)(v2 + 360), a2);
          }
          else
          {
            if ( (qword_1C0040010 & 2) != 0 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q((__int64)a1, (__int64)&EventProfilerEnter, v5, 8003);
            (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)v4 + 1) + 24LL) + 64LL))(
              *(_QWORD *)(*((_QWORD *)v4 + 1) + 24LL),
              *((_QWORD *)v4 + 3));
            if ( (qword_1C0040010 & 2) != 0 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v9, (__int64)&EventProfilerExit, v10, 8003);
          }
        }
      }
    }
    else
    {
      v11 = *(void **)(v2 + 368);
      if ( v11 )
      {
        MmUnmapViewInSystemSpace(v11);
        *(_QWORD *)(v2 + 368) = 0LL;
      }
    }
  }
}
