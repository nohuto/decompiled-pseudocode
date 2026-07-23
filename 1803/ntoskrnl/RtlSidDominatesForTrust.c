/*
 * XREFs of RtlSidDominatesForTrust @ 0x1400EF700
 * Callers:
 *     SepLocateTokenTrustLevel @ 0x14005C9F4 (SepLocateTokenTrustLevel.c)
 *     SepTrustLevelCheck @ 0x14005E4CC (SepTrustLevelCheck.c)
 *     SepReferenceTokenUsingPseudoHandle @ 0x1400EF560 (SepReferenceTokenUsingPseudoHandle.c)
 *     SepReconcileTrustSidWithProcessProtection @ 0x1400EF698 (SepReconcileTrustSidWithProcessProtection.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x140100CF0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     RtlpValidTrustSubjectContext @ 0x14016CACC (RtlpValidTrustSubjectContext.c)
 *     SeCreateClientSecurityFromSubjectContextEx @ 0x1402A0A20 (SeCreateClientSecurityFromSubjectContextEx.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x1404C8E80 (SeShouldCheckForAccessRightsFromParent.c)
 *     SeAdjustAccessStateForAccessConstraints @ 0x1404C96D0 (SeAdjustAccessStateForAccessConstraints.c)
 *     SeCreateClientSecurityFromSubjectContext @ 0x140580C50 (SeCreateClientSecurityFromSubjectContext.c)
 *     SeTokenCanImpersonate @ 0x140599E60 (SeTokenCanImpersonate.c)
 *     SepAdjustAccessStateForConstraints @ 0x1405F25F4 (SepAdjustAccessStateForConstraints.c)
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x140558CA8 (RtlIsValidProcessTrustLabelSid.c)
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
  if ( RtlIsValidProcessTrustLabelSid(v4) )
  {
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
  return -1073741811;
}
