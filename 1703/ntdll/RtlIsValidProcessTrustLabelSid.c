/*
 * XREFs of RtlIsValidProcessTrustLabelSid @ 0x18004C6C0
 * Callers:
 *     RtlSidDominatesForTrust @ 0x18004BA60 (RtlSidDominatesForTrust.c)
 *     RtlAddProcessTrustLabelAce @ 0x1800889C0 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x1800E7700 (RtlAddAccessFilterAce.c)
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
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
