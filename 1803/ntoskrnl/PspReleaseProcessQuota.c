/*
 * XREFs of PspReleaseProcessQuota @ 0x140511148
 * Callers:
 *     PspProcessDelete @ 0x14006F630 (PspProcessDelete.c)
 * Callees:
 *     PspDereferenceQuotaBlock @ 0x1404EBF04 (PspDereferenceQuotaBlock.c)
 */

void __fastcall PspReleaseProcessQuota(__int64 a1)
{
  volatile signed __int32 *v1; // rcx

  v1 = *(volatile signed __int32 **)(a1 + 1040);
  if ( v1 )
  {
    _InterlockedDecrement(v1 + 129);
    PspDereferenceQuotaBlock(v1);
  }
}
