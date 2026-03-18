/*
 * XREFs of PspReleaseProcessQuota @ 0x140498B2C
 * Callers:
 *     PspProcessDelete @ 0x140061C30 (PspProcessDelete.c)
 * Callees:
 *     PspDereferenceQuotaBlock @ 0x1404F5B0C (PspDereferenceQuotaBlock.c)
 */

__int64 __fastcall PspReleaseProcessQuota(__int64 a1)
{
  volatile signed __int32 *v1; // rcx
  __int64 result; // rax

  v1 = *(volatile signed __int32 **)(a1 + 1040);
  if ( v1 )
  {
    _InterlockedDecrement(v1 + 129);
    return PspDereferenceQuotaBlock((PVOID)v1);
  }
  return result;
}
