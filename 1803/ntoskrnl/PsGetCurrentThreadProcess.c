/*
 * XREFs of PsGetCurrentThreadProcess @ 0x1400BAFE0
 * Callers:
 *     CmQueryKey @ 0x1404AE2E0 (CmQueryKey.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x1404D5808 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1404D591C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeCheckForCriticalAceRemoval @ 0x1404E14B0 (SeCheckForCriticalAceRemoval.c)
 *     SepAdtTokenRightAdjusted @ 0x1404ECBE0 (SepAdtTokenRightAdjusted.c)
 *     CmpCheckSecurityCellAccess @ 0x14056251C (CmpCheckSecurityCellAccess.c)
 *     CmpCheckWrpKeyAccess @ 0x140562828 (CmpCheckWrpKeyAccess.c)
 *     CmpIsSystemEntity @ 0x140565AF0 (CmpIsSystemEntity.c)
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 *     SepAuditAssignPrimaryToken @ 0x140640D1C (SepAuditAssignPrimaryToken.c)
 *     CmpPublishEventForPcaResolver @ 0x1406EE62C (CmpPublishEventForPcaResolver.c)
 *     CmpDoAccessCheckOnKCB @ 0x1406F4EE8 (CmpDoAccessCheckOnKCB.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1406F6578 (CmpReportAuditVirtualizationEvent.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14078CF24 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x14078D4C0 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditSystemTimeChange @ 0x14078DF4C (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x14078E100 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x14078E334 (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14078E650 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14078E854 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14078EFAC (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14078FA84 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x14078FD14 (SepAdtStagingEvent.c)
 * Callees:
 *     <none>
 */

_KPROCESS *PsGetCurrentThreadProcess()
{
  return KeGetCurrentThread()->Process;
}
