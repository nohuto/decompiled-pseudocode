/*
 * XREFs of RtlIsValidProcessTrustLabelSid @ 0x1800573B0
 * Callers:
 *     RtlSidDominatesForTrust @ 0x180057320 (RtlSidDominatesForTrust.c)
 *     RtlAddProcessTrustLabelAce @ 0x180087B20 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x1800E6CB0 (RtlAddAccessFilterAce.c)
 * Callees:
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
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
