/*
 * XREFs of VerifierMmMapLockedPages @ 0x140782160
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetAddToCounter @ 0x1407751DC (ViTargetAddToCounter.c)
 *     ViPoolLogStackTrace @ 0x140775AE8 (ViPoolLogStackTrace.c)
 *     VfFaultsIsSystemSufficientlyBooted @ 0x140775E80 (VfFaultsIsSystemSufficientlyBooted.c)
 *     ViMmMapLockedPagesSanityChecks @ 0x140782B38 (ViMmMapLockedPagesSanityChecks.c)
 */

__int64 __fastcall VerifierMmMapLockedPages(ULONG_PTR a1, __int64 a2)
{
  char v2; // di
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v2 = a2;
  if ( (MmVerifierData & 1) != 0 )
    ViMmMapLockedPagesSanityChecks();
  if ( (*(_WORD *)(a1 + 10) & 0x2000) == 0
    && (unsigned int)VfFaultsIsSystemSufficientlyBooted()
    && (MmVerifierData & 1) != 0 )
  {
    VerifierBugCheckIfAppropriate(0xC4u, 0x81uLL, a1, *(__int16 *)(a1 + 10), 0LL);
  }
  LOBYTE(a2) = v2;
  v4 = ((__int64 (__fastcall *)(ULONG_PTR, __int64, __int64))pXdvMmMapLockedPagesSpecifyCache)(a1, a2, 1LL);
  v5 = v4;
  if ( VfPoolTraces )
    ViPoolLogStackTrace(v4, *(unsigned int *)(a1 + 40));
  if ( v5 && (MmVerifierData & 0x1000) != 0 )
    ViTargetAddToCounter(retaddr, 168LL, 0xB0u, *(unsigned int *)(a1 + 40));
  return v5;
}
