/*
 * XREFs of SepReconcileTrustSidWithProcessProtection @ 0x1400EF698
 * Callers:
 *     SeCreateClientSecurityEx @ 0x1404C92A0 (SeCreateClientSecurityEx.c)
 *     SeCreateClientSecurity @ 0x1404D41D0 (SeCreateClientSecurity.c)
 * Callees:
 *     RtlSidDominatesForTrust @ 0x1400EF700 (RtlSidDominatesForTrust.c)
 *     SepSidFromProcessProtection @ 0x1400EF778 (SepSidFromProcessProtection.c)
 */

NTSTATUS __fastcall SepReconcileTrustSidWithProcessProtection(__int64 a1, __int64 a2, _BYTE *a3, _QWORD *a4)
{
  void *v6; // rsi
  PSID v7; // r10
  NTSTATUS result; // eax
  BOOLEAN DominatesTrust; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0;
  *a4 = 0LL;
  DominatesTrust = 0;
  v6 = (void *)SepSidFromProcessProtection(a2);
  result = RtlSidDominatesForTrust(v6, v7, &DominatesTrust);
  if ( !DominatesTrust )
  {
    *a3 = 1;
    *a4 = v6;
  }
  return result;
}
