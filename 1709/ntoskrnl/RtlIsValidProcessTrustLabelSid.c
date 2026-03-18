/*
 * XREFs of RtlIsValidProcessTrustLabelSid @ 0x14056EE78
 * Callers:
 *     SepReferenceTokenUsingPseudoHandle @ 0x14006A3A0 (SepReferenceTokenUsingPseudoHandle.c)
 *     SepReconcileTrustSidWithProcessProtection @ 0x14006A520 (SepReconcileTrustSidWithProcessProtection.c)
 *     RtlSidDominatesForTrust @ 0x1400A09D0 (RtlSidDominatesForTrust.c)
 *     RtlAddProcessTrustLabelAce @ 0x1405D8980 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x1407204C0 (RtlAddAccessFilterAce.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

bool __fastcall RtlIsValidProcessTrustLabelSid(__int64 a1)
{
  int v1; // edx

  if ( *(_BYTE *)(a1 + 1) != 2 || *(_BYTE *)a1 != 1 )
    return 0;
  v1 = *(_DWORD *)(a1 + 2);
  if ( !v1 )
    v1 = *(unsigned __int16 *)(a1 + 6) - 4864;
  return !v1 && (*(_DWORD *)(a1 + 8) || !*(_DWORD *)(a1 + 12));
}
