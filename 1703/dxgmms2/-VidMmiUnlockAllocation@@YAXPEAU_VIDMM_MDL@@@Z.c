/*
 * XREFs of ?VidMmiUnlockAllocation@@YAXPEAU_VIDMM_MDL@@@Z @ 0x1C006D54C
 * Callers:
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C004911C (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1C0056B54 (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z.c)
 *     ?DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C006EEDC (-DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z @ 0x1C00954A8 (-TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z.c)
 *     ?UnlockAllocation@VIDMM_PROCESS_HEAP@@UEAAXPEAX_K1E@Z @ 0x1C00A9070 (-UnlockAllocation@VIDMM_PROCESS_HEAP@@UEAAXPEAX_K1E@Z.c)
 * Callees:
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 */

void __fastcall VidMmiUnlockAllocation(PMDL *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8

  if ( (qword_1C003C050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 8001);
  MmUnlockPages(a1[1]);
  if ( (qword_1C003C050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v4, &EventProfilerExit, v5, 8001);
  ExFreePoolWithTag(a1[1], 0);
  operator delete(a1);
}
