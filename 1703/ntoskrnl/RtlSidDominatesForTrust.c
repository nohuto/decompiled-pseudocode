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

NTSTATUS __cdecl RtlSidDominatesForTrust(PSID Sid1, PSID Sid2, PBOOLEAN DominatesTrust)
{
  PBOOLEAN v3; // r9
  PSID v4; // r10
  __int64 v6; // r10
  __int64 v7; // r11

  *DominatesTrust = 0;
  v3 = DominatesTrust;
  v4 = Sid2;
  if ( Sid1 && !RtlIsValidProcessTrustLabelSid(Sid1) )
    return -1073741811;
  if ( !v4 )
  {
LABEL_3:
    *v3 = 1;
    return 0;
  }
  if ( !RtlIsValidProcessTrustLabelSid(v4) )
    return -1073741811;
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
  return 0;
}
