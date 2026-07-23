/*
 * XREFs of SepLocateTokenTrustLevel @ 0x140087894
 * Callers:
 *     SeAccessCheckWithHint @ 0x14007E4B0 (SeAccessCheckWithHint.c)
 *     SepCommonAccessCheckEx @ 0x14014204C (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046A8D0 (SepAccessCheckAndAuditAlarm.c)
 *     RtlpSetSecurityObject @ 0x140485700 (RtlpSetSecurityObject.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x1404A6D00 (SeShouldCheckForAccessRightsFromParent.c)
 *     RtlpNewSecurityObject @ 0x1404BCE00 (RtlpNewSecurityObject.c)
 *     SeAdjustAccessStateForAccessConstraints @ 0x14056B240 (SeAdjustAccessStateForAccessConstraints.c)
 *     SepAdjustAccessStateForConstraints @ 0x1405E0424 (SepAdjustAccessStateForConstraints.c)
 *     SepGetDefaultsSubjectContext @ 0x14072C780 (SepGetDefaultsSubjectContext.c)
 * Callees:
 *     RtlSidDominatesForTrust @ 0x1400A09D0 (RtlSidDominatesForTrust.c)
 */

__int64 __fastcall SepLocateTokenTrustLevel(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  BOOLEAN DominatesTrust; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = a1[2];
  if ( *a1 )
  {
    RtlSidDominatesForTrust(*(PSID *)(v2 + 1104), *(PSID *)(v1 + 1104), &DominatesTrust);
    if ( DominatesTrust )
      v2 = v1;
  }
  return *(_QWORD *)(v2 + 1104);
}
