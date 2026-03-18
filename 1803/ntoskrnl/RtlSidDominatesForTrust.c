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
  if ( (unsigned __int8)RtlIsValidProcessTrustLabelSid(v4, a2, a3, v3) )
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
    return 0LL;
  }
  return 3221225485LL;
}
