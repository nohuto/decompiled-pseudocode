/*
 * XREFs of RtlSidDominatesForTrust @ 0x18002E5E0
 * Callers:
 *     sub_180002C80 @ 0x180002C80 (sub_180002C80.c)
 *     sub_18002E46C @ 0x18002E46C (sub_18002E46C.c)
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x18006C4D0 (RtlIsValidProcessTrustLabelSid.c)
 */

__int64 __fastcall RtlSidDominatesForTrust(__int64 a1, __int64 a2, bool *a3)
{
  bool v3; // bl

  v3 = 0;
  *a3 = 0;
  if ( a1 && !(unsigned __int8)((__int64 (*)(void))RtlIsValidProcessTrustLabelSid)() )
    return 3221225485LL;
  if ( !a2 )
    goto LABEL_3;
  if ( (unsigned __int8)RtlIsValidProcessTrustLabelSid(a2) )
  {
    if ( !a1 )
    {
      v3 = *(_DWORD *)(a2 + 8) == 0;
      goto LABEL_4;
    }
    if ( *(_DWORD *)(a1 + 8) < *(_DWORD *)(a2 + 8) || *(_DWORD *)(a1 + 12) < *(_DWORD *)(a2 + 12) )
      goto LABEL_4;
LABEL_3:
    v3 = 1;
LABEL_4:
    *a3 = v3;
    return 0LL;
  }
  return 3221225485LL;
}
