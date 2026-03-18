/*
 * XREFs of ViKeLowerIrqlSanityChecks @ 0x1408276E8
 * Callers:
 *     VerifierKeReleaseQueuedSpinLock @ 0x14081F990 (VerifierKeReleaseQueuedSpinLock.c)
 *     VerifierKeLowerIrql @ 0x1408264A0 (VerifierKeLowerIrql.c)
 *     VerifierKeReleaseInStackQueuedSpinLockCommon @ 0x140826650 (VerifierKeReleaseInStackQueuedSpinLockCommon.c)
 *     ViKeReleaseSpinLockCommon @ 0x140827910 (ViKeReleaseSpinLockCommon.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x14081D3A4 (VerifierBugCheckIfAppropriate.c)
 *     VfKeIrqlTransitionReserveLogEntry @ 0x140827410 (VfKeIrqlTransitionReserveLogEntry.c)
 */

char *__fastcall ViKeLowerIrqlSanityChecks(unsigned __int8 a1, unsigned __int8 a2)
{
  ULONG_PTR v4; // rsi
  ULONG_PTR v5; // rbp

  if ( (MmVerifierData & 2) != 0 )
  {
    v4 = a2;
    v5 = a1;
    if ( a1 < a2 )
      VerifierBugCheckIfAppropriate(0xC4u, 0x31uLL, a1, a2, 0LL);
    if ( a1 >= 2u && a2 < 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 )
      VerifierBugCheckIfAppropriate(0xC4u, 0x31uLL, v5, v4, 1LL);
    if ( a2 > 0xFu )
      VerifierBugCheckIfAppropriate(0xC4u, 0x31uLL, v5, v4, 0LL);
  }
  return VfKeIrqlTransitionReserveLogEntry(a1, a2);
}
