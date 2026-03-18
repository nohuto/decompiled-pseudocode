/*
 * XREFs of ?VidMmiUnlockAllocation@@YAXPEAU_VIDMM_MDL@@@Z @ 0x1C0073448
 * Callers:
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C004D0D8 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1C005990C (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z.c)
 *     ?DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0074E58 (-DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z @ 0x1C009D644 (-TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z.c)
 *     ?UnlockAllocation@VIDMM_PROCESS_HEAP@@UEAAXPEAX_K1E@Z @ 0x1C00B1700 (-UnlockAllocation@VIDMM_PROCESS_HEAP@@UEAAXPEAX_K1E@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002544 (--3@YAXPEAX@Z.c)
 *     McTemplateK0q @ 0x1C0016F44 (McTemplateK0q.c)
 */

void __fastcall VidMmiUnlockAllocation(PMDL *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8

  if ( (qword_1C0040010 & 2) != 0 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, (__int64)&EventProfilerEnter, a3, 8001);
  MmUnlockPages(a1[1]);
  if ( (qword_1C0040010 & 2) != 0 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v4, (__int64)&EventProfilerExit, v5, 8001);
  ExFreePoolWithTag(a1[1], 0);
  operator delete(a1);
}
