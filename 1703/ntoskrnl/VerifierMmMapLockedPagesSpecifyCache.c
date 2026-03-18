/*
 * XREFs of VerifierMmMapLockedPagesSpecifyCache @ 0x140782250
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400F8330 (MmMapLockedPagesSpecifyCache.c)
 *     VfCheckPagePriority @ 0x140766694 (VfCheckPagePriority.c)
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetAddToCounter @ 0x1407751DC (ViTargetAddToCounter.c)
 *     ViPoolLogStackTrace @ 0x140775AE8 (ViPoolLogStackTrace.c)
 *     VfFaultsInjectResourceFailure @ 0x140775D48 (VfFaultsInjectResourceFailure.c)
 *     VfFaultsIsSystemSufficientlyBooted @ 0x140775E80 (VfFaultsIsSystemSufficientlyBooted.c)
 *     ViMmMapLockedPagesSanityChecks @ 0x140782B38 (ViMmMapLockedPagesSanityChecks.c)
 */

PVOID __fastcall VerifierMmMapLockedPagesSpecifyCache(
        PMDL MemoryDescriptorList,
        KPROCESSOR_MODE a2,
        MEMORY_CACHING_TYPE a3,
        void *a4,
        ULONG BugCheckOnFailure,
        ULONG Priority)
{
  PVOID v10; // rax
  PVOID v11; // rdi
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( (MmVerifierData & 1) != 0 )
    ViMmMapLockedPagesSanityChecks();
  VfCheckPagePriority(Priority, retaddr);
  if ( (MemoryDescriptorList->MdlFlags & 0x2000) == 0 && BugCheckOnFailure )
  {
    if ( (unsigned int)VfFaultsIsSystemSufficientlyBooted() && (MmVerifierData & 1) != 0 )
      VerifierBugCheckIfAppropriate(
        0xC4u,
        0x82uLL,
        (ULONG_PTR)MemoryDescriptorList,
        MemoryDescriptorList->MdlFlags,
        BugCheckOnFailure);
    goto LABEL_8;
  }
  if ( (unsigned int)VfFaultsInjectResourceFailure(0) != 1 )
  {
LABEL_8:
    v10 = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, a2, a3, a4, BugCheckOnFailure, Priority);
    v11 = v10;
    if ( VfPoolTraces )
      ViPoolLogStackTrace((__int64)v10, MemoryDescriptorList->ByteCount);
    if ( v11 )
    {
      if ( (MmVerifierData & 0x1000) != 0 )
        ViTargetAddToCounter(retaddr, 168LL, 0xB0u, MemoryDescriptorList->ByteCount);
    }
    return v11;
  }
  if ( a2 )
    RtlRaiseStatus(-1073741670);
  return 0LL;
}
