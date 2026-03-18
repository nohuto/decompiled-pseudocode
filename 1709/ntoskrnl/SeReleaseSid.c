/*
 * XREFs of SeReleaseSid @ 0x140460948
 * Callers:
 *     SeAccessCheckByType @ 0x140068AB0 (SeAccessCheckByType.c)
 *     NtCreateTokenEx @ 0x14045D140 (NtCreateTokenEx.c)
 *     AlpcpConnectPort @ 0x14046378C (AlpcpConnectPort.c)
 *     NtSecureConnectPort @ 0x14046827C (NtSecureConnectPort.c)
 *     NtSetInformationToken @ 0x1404690B0 (NtSetInformationToken.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046A8D0 (SepAccessCheckAndAuditAlarm.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x140500318 (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     NtCreateLowBoxToken @ 0x140549290 (NtCreateLowBoxToken.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1405626DC (AlpcpPortQueryConnectedSidInfo.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseSid(void *a1, char a2, char a3)
{
  if ( !a2 && a3 == 1 || a2 == 1 )
    ExFreePoolWithTag(a1, 0);
}
