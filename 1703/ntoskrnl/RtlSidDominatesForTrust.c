/*
 * XREFs of RtlSidDominatesForTrust @ 0x140044710
 * Callers:
 *     SepLocateTokenTrustLevel @ 0x140013744 (SepLocateTokenTrustLevel.c)
 *     SepTrustLevelCheck @ 0x14003E378 (SepTrustLevelCheck.c)
 *     SeAccessCheckWithHint @ 0x14008D7C0 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x140092020 (SeAccessCheckByType.c)
 *     RtlpValidTrustSubjectContext @ 0x140149030 (RtlpValidTrustSubjectContext.c)
 *     SeCreateClientSecurityFromSubjectContextEx @ 0x140247850 (SeCreateClientSecurityFromSubjectContextEx.c)
 *     SepAdjustAccessStateForConstraints @ 0x14042B498 (SepAdjustAccessStateForConstraints.c)
 *     SeAdjustAccessStateForAccessConstraints @ 0x14042B5A0 (SeAdjustAccessStateForAccessConstraints.c)
 *     SeCreateClientSecurityFromSubjectContext @ 0x140459410 (SeCreateClientSecurityFromSubjectContext.c)
 *     SeTokenCanImpersonate @ 0x14047EAA0 (SeTokenCanImpersonate.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x14050C420 (SeShouldCheckForAccessRightsFromParent.c)
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x14047ED90 (RtlIsValidProcessTrustLabelSid.c)
 */

__int64 __fastcall RtlSidDominatesForTrust(__int64 a1, __int64 a2, _BYTE *a3)
{
  _BYTE *v3; // r9
  __int64 v4; // r10
  __int64 v6; // r10
  __int64 v7; // r11

  *a3 = 0;
  v3 = a3;
  v4 = a2;
  if ( a1 && !(unsigned __int8)RtlIsValidProcessTrustLabelSid(a1, a2, a3, a3) )
    return 3221225485LL;
  if ( !v4 )
  {
LABEL_3:
    *v3 = 1;
    return 0LL;
  }
  if ( !(unsigned __int8)RtlIsValidProcessTrustLabelSid(v4, a2, a3, v3) )
    return 3221225485LL;
  if ( v7 )
  {
    if ( *(_DWORD *)(v7 + 8) >= *(_DWORD *)(v6 + 8) && *(_DWORD *)(v7 + 12) >= *(_DWORD *)(v6 + 12) )
      goto LABEL_3;
  }
  else if ( !*(_DWORD *)(v6 + 8) )
  {
    goto LABEL_3;
  }
  *v3 = 0;
  return 0LL;
}
