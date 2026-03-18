/*
 * XREFs of SeReleaseSid @ 0x140543EF0
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14005CED0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1404D7FE0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     AlpcpConnectPort @ 0x1404DA5F0 (AlpcpConnectPort.c)
 *     NtSecureConnectPort @ 0x1404DF490 (NtSecureConnectPort.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x1404F5F30 (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     NtCreateLowBoxToken @ 0x140540EB0 (NtCreateLowBoxToken.c)
 *     NtCreateTokenEx @ 0x140542F04 (NtCreateTokenEx.c)
 *     NtSetInformationToken @ 0x140544C00 (NtSetInformationToken.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x140551F78 (AlpcpPortQueryConnectedSidInfo.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseSid(void *a1, char a2, char a3)
{
  if ( !a2 && a3 == 1 || a2 == 1 )
    ExFreePoolWithTag(a1, 0);
}
