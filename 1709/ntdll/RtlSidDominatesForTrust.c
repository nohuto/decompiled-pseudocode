/*
 * XREFs of RtlSidDominatesForTrust @ 0x180057320
 * Callers:
 *     RtlpValidTrustSubjectContext @ 0x1800021CC (RtlpValidTrustSubjectContext.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x1800571B0 (RtlpGetDefaultTrustSubjectContext.c)
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x1800573B0 (RtlIsValidProcessTrustLabelSid.c)
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
