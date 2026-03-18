/*
 * XREFs of PspReleaseProcessQuota @ 0x1404FC970
 * Callers:
 *     PspProcessDelete @ 0x1400B8F70 (PspProcessDelete.c)
 * Callees:
 *     PspDereferenceQuotaBlock @ 0x1404860AC (PspDereferenceQuotaBlock.c)
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
