/*
 * XREFs of VerifierFreeTrackedPool @ 0x14021AAE8
 * Callers:
 *     ExFreeLargePool @ 0x1400DCA30 (ExFreeLargePool.c)
 *     MmFreeSpecialPool @ 0x14021753C (MmFreeSpecialPool.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierFreeTrackedPool(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  if ( !VerifierIsTrackingPool )
    VerifierBugCheckIfAppropriate(0xC2u, 0LL);
  return ViFreeTrackedPool(a1, a2, a3, a4);
}
