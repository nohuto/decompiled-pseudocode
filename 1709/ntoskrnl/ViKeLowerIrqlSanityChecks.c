/*
 * XREFs of ViKeLowerIrqlSanityChecks @ 0x1407BA380
 * Callers:
 *     VerifierKeReleaseQueuedSpinLock @ 0x1407B27E0 (VerifierKeReleaseQueuedSpinLock.c)
 *     VerifierKeLowerIrql @ 0x1407B91C0 (VerifierKeLowerIrql.c)
 *     VerifierKeReleaseInStackQueuedSpinLockCommon @ 0x1407B9370 (VerifierKeReleaseInStackQueuedSpinLockCommon.c)
 *     ViKeReleaseSpinLockCommon @ 0x1407BA570 (ViKeReleaseSpinLockCommon.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x1407B01F4 (VerifierBugCheckIfAppropriate.c)
 *     VfKeIrqlTransitionReserveLogEntry @ 0x1407BA0B0 (VfKeIrqlTransitionReserveLogEntry.c)
 */

char *__fastcall ViKeLowerIrqlSanityChecks(unsigned __int8 a1, unsigned __int8 a2)
{
  if ( (MmVerifierData & 2) != 0 )
  {
    if ( a1 < a2 )
      VerifierBugCheckIfAppropriate(0xC4u, 0x31uLL, a1, a2, 0LL);
    if ( a1 >= 2u && a2 < 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 )
      VerifierBugCheckIfAppropriate(0xC4u, 0x31uLL, a1, a2, 1LL);
    if ( a2 > 0xFu )
      VerifierBugCheckIfAppropriate(0xC4u, 0x31uLL, a1, a2, 0LL);
  }
  return VfKeIrqlTransitionReserveLogEntry(a1, a2);
}
