/*
 * XREFs of SepFreeResourceInfo @ 0x140062FE4
 * Callers:
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x140100CF0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepFilterCheck @ 0x140101D80 (SepFilterCheck.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140148E84 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1404D7FE0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributesList @ 0x1400E2B70 (AuthzBasepFreeSecurityAttributesList.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall SepFreeResourceInfo(PVOID P, __int64 a2, __int64 a3)
{
  if ( P )
  {
    AuthzBasepFreeSecurityAttributesList(P, a2, a3);
    ExFreePoolWithTag(P, 0);
  }
}
