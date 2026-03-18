/*
 * XREFs of VerifierMmMapLockedPagesSpecifyCache @ 0x140831B50
 * Callers:
 *     <none>
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14010AF00 (MmMapLockedPagesSpecifyCache.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     VfCheckPagePriority @ 0x140815260 (VfCheckPagePriority.c)
 *     VerifierBugCheckIfAppropriate @ 0x14081D3A4 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetAddToCounter @ 0x140822108 (ViTargetAddToCounter.c)
 *     VfAllocPoolNotification @ 0x140824784 (VfAllocPoolNotification.c)
 *     VfFaultsInjectResourceFailure @ 0x140824DA4 (VfFaultsInjectResourceFailure.c)
 *     VfFaultsIsSystemSufficientlyBooted @ 0x140824EDC (VfFaultsIsSystemSufficientlyBooted.c)
 *     ViMmMapLockedPagesSanityChecks @ 0x140832428 (ViMmMapLockedPagesSanityChecks.c)
 */

PVOID __fastcall VerifierMmMapLockedPagesSpecifyCache(
        struct _MDL *BugCheckParameter2,
        KPROCESSOR_MODE a2,
        MEMORY_CACHING_TYPE a3,
        void *a4,
        ULONG BugCheckOnFailure,
        ULONG Priority)
{
  PVOID v10; // rdi
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( (MmVerifierData & 1) != 0 )
    ViMmMapLockedPagesSanityChecks((ULONG_PTR)BugCheckParameter2);
  VfCheckPagePriority(Priority, retaddr);
  if ( (BugCheckParameter2->MdlFlags & 0x2000) == 0 && BugCheckOnFailure )
  {
    if ( (unsigned int)VfFaultsIsSystemSufficientlyBooted() && (MmVerifierData & 1) != 0 )
      VerifierBugCheckIfAppropriate(
        0xC4u,
        0x82uLL,
        (ULONG_PTR)BugCheckParameter2,
        BugCheckParameter2->MdlFlags,
        BugCheckOnFailure);
    goto LABEL_8;
  }
  if ( (unsigned int)VfFaultsInjectResourceFailure(0) != 1 )
  {
LABEL_8:
    v10 = MmMapLockedPagesSpecifyCache(BugCheckParameter2, a2, a3, a4, BugCheckOnFailure, Priority);
    VfAllocPoolNotification();
    if ( v10 )
    {
      if ( (MmVerifierData & 0x1000) != 0 )
        ViTargetAddToCounter(retaddr, 184LL, 0xC0u, BugCheckParameter2->ByteCount);
    }
    return v10;
  }
  if ( a2 )
    RtlRaiseStatus(-1073741670);
  return 0LL;
}
