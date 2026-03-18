/*
 * XREFs of RtlIsValidProcessTrustLabelSid @ 0x14047ED90
 * Callers:
 *     RtlSidDominatesForTrust @ 0x140044710 (RtlSidDominatesForTrust.c)
 *     SepReferenceTokenByHandle @ 0x1400911E0 (SepReferenceTokenByHandle.c)
 *     SepReconcileTrustSidWithProcessProtection @ 0x140091BA0 (SepReconcileTrustSidWithProcessProtection.c)
 *     RtlAddProcessTrustLabelAce @ 0x1405C55B0 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x1406E86E0 (RtlAddAccessFilterAce.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
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
