/*
 * XREFs of SeReleaseSid @ 0x140471664
 * Callers:
 *     SeAccessCheckByType @ 0x140092020 (SeAccessCheckByType.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x140426B6C (AlpcpPortQueryConnectedSidInfo.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046B2C0 (SepAccessCheckAndAuditAlarm.c)
 *     NtSetInformationToken @ 0x14046DB70 (NtSetInformationToken.c)
 *     NtCreateTokenEx @ 0x14046F5F4 (NtCreateTokenEx.c)
 *     NtSecureConnectPort @ 0x140470F8C (NtSecureConnectPort.c)
 *     AlpcpConnectPort @ 0x140474C88 (AlpcpConnectPort.c)
 *     NtCreateLowBoxToken @ 0x1404A48A0 (NtCreateLowBoxToken.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x1404EF570 (ExpWnfReleaseCapturedScopeInstanceId.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseSid(void *a1, char a2, char a3)
{
  if ( !a2 && a3 == 1 || a2 == 1 )
    ExFreePoolWithTag(a1, 0);
}
