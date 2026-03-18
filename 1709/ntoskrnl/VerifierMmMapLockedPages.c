/*
 * XREFs of VerifierMmMapLockedPages @ 0x1407C44F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     VerifierBugCheckIfAppropriate @ 0x1407B01F4 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetAddToCounter @ 0x1407B6F9C (ViTargetAddToCounter.c)
 *     ViPoolLogStackTrace @ 0x1407B78E8 (ViPoolLogStackTrace.c)
 *     VfFaultsIsSystemSufficientlyBooted @ 0x1407B7C7C (VfFaultsIsSystemSufficientlyBooted.c)
 *     ViMmMapLockedPagesSanityChecks @ 0x1407C4EC8 (ViMmMapLockedPagesSanityChecks.c)
 */

__int64 __fastcall VerifierMmMapLockedPages(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  char v2; // di
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v2 = a2;
  if ( (MmVerifierData & 1) != 0 )
    ViMmMapLockedPagesSanityChecks(BugCheckParameter2);
  if ( (*(_WORD *)(BugCheckParameter2 + 10) & 0x2000) == 0
    && (unsigned int)VfFaultsIsSystemSufficientlyBooted()
    && (MmVerifierData & 1) != 0 )
  {
    VerifierBugCheckIfAppropriate(0xC4u, 0x81uLL, BugCheckParameter2, *(__int16 *)(BugCheckParameter2 + 10), 0LL);
  }
  LOBYTE(a2) = v2;
  v4 = ((__int64 (__fastcall *)(ULONG_PTR, __int64, __int64))pXdvMmMapLockedPagesSpecifyCache)(
         BugCheckParameter2,
         a2,
         1LL);
  v5 = v4;
  if ( VfPoolTraces )
    ViPoolLogStackTrace(v4, *(unsigned int *)(BugCheckParameter2 + 40));
  if ( v5 && (MmVerifierData & 0x1000) != 0 )
    ViTargetAddToCounter(retaddr, 168LL, 0xB0u, *(unsigned int *)(BugCheckParameter2 + 40));
  return v5;
}
