/*
 * XREFs of ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C0048608
 * Callers:
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C004843C (-VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 *     ?UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00492D0 (-UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C00493B0 (-LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z.c)
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0049C70 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C004A470 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C009F470 (-LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@.c)
 *     ?UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C009FDE0 (-UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C006E9F4 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
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
      v6 = **(_DWORD **)(v2 + 520);
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
            if ( (qword_1C003C050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              Template_q((__int64)a1, &EventProfilerEnter, v5, 8003);
            (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)v4 + 1) + 24LL) + 64LL))(
              *(_QWORD *)(*((_QWORD *)v4 + 1) + 24LL),
              *((_QWORD *)v4 + 3));
            if ( (qword_1C003C050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              Template_q(v9, &EventProfilerExit, v10, 8003);
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
