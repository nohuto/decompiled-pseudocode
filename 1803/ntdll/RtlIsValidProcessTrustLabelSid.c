/*
 * XREFs of RtlIsValidProcessTrustLabelSid @ 0x18006C4D0
 * Callers:
 *     RtlSidDominatesForTrust @ 0x18002E5E0 (RtlSidDominatesForTrust.c)
 *     RtlAddProcessTrustLabelAce @ 0x18006BD70 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x1800E2410 (RtlAddAccessFilterAce.c)
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
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
