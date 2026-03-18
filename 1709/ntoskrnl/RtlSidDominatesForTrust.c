/*
 * XREFs of RtlSidDominatesForTrust @ 0x1400A09D0
 * Callers:
 *     SepTrustLevelCheck @ 0x14006A120 (SepTrustLevelCheck.c)
 *     SeAccessCheckWithHint @ 0x14007E4B0 (SeAccessCheckWithHint.c)
 *     SepLocateTokenTrustLevel @ 0x140087894 (SepLocateTokenTrustLevel.c)
 *     RtlpValidTrustSubjectContext @ 0x140155864 (RtlpValidTrustSubjectContext.c)
 *     SeCreateClientSecurityFromSubjectContextEx @ 0x14025EF70 (SeCreateClientSecurityFromSubjectContextEx.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x1404A6D00 (SeShouldCheckForAccessRightsFromParent.c)
 *     SeTokenCanImpersonate @ 0x1404CEBB0 (SeTokenCanImpersonate.c)
 *     SeAdjustAccessStateForAccessConstraints @ 0x14056B240 (SeAdjustAccessStateForAccessConstraints.c)
 *     SeCreateClientSecurityFromSubjectContext @ 0x1405985F0 (SeCreateClientSecurityFromSubjectContext.c)
 *     SepAdjustAccessStateForConstraints @ 0x1405E0424 (SepAdjustAccessStateForConstraints.c)
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x14056EE78 (RtlIsValidProcessTrustLabelSid.c)
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
  if ( a1 && !(unsigned __int8)RtlIsValidProcessTrustLabelSid(a1) )
    return 3221225485LL;
  if ( !v4 )
  {
LABEL_3:
    *v3 = 1;
    return 0LL;
  }
  if ( !(unsigned __int8)RtlIsValidProcessTrustLabelSid(v4) )
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
