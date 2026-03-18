/*
 * XREFs of SepReconcileTrustSidWithProcessProtection @ 0x1400EF698
 * Callers:
 *     SeCreateClientSecurityEx @ 0x1404C92A0 (SeCreateClientSecurityEx.c)
 *     SeCreateClientSecurity @ 0x1404D41D0 (SeCreateClientSecurity.c)
 * Callees:
 *     RtlSidDominatesForTrust @ 0x1400EF700 (RtlSidDominatesForTrust.c)
 *     SepSidFromProcessProtection @ 0x1400EF778 (SepSidFromProcessProtection.c)
 */

__int64 __fastcall SepReconcileTrustSidWithProcessProtection(__int64 a1, __int64 a2, _BYTE *a3, __int64 *a4)
{
  __int64 v6; // rsi
  __int64 v7; // r10
  __int64 result; // rax
  char v9; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0;
  *a4 = 0LL;
  v9 = 0;
  v6 = SepSidFromProcessProtection(a2);
  result = RtlSidDominatesForTrust(v6, v7, &v9);
  if ( !v9 )
  {
    *a3 = 1;
    *a4 = v6;
  }
  return result;
}
