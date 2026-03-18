/*
 * XREFs of VerifierFreeTrackedPool @ 0x140227388
 * Callers:
 *     ExFreeLargePool @ 0x14002E0E0 (ExFreeLargePool.c)
 *     MmFreeSpecialPool @ 0x140220DA4 (MmFreeSpecialPool.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 * Callees:
 *     ViFreeTrackedPool @ 0x1407A653C (ViFreeTrackedPool.c)
 *     VerifierBugCheckIfAppropriate @ 0x1407B01F4 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierFreeTrackedPool(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  if ( !VerifierIsTrackingPool )
    VerifierBugCheckIfAppropriate(0xC2u, 0x99uLL, BugCheckParameter2, 0LL, 0LL);
  return ViFreeTrackedPool(BugCheckParameter2, BugCheckParameter3);
}
