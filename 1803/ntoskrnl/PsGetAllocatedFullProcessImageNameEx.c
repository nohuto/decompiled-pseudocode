/*
 * XREFs of PsGetAllocatedFullProcessImageNameEx @ 0x14050E924
 * Callers:
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x1404D5808 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1404D591C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtTokenRightAdjusted @ 0x1404ECBE0 (SepAdtTokenRightAdjusted.c)
 *     SeLocateProcessImageName @ 0x14050E910 (SeLocateProcessImageName.c)
 *     SepQueryNameString @ 0x14053FE24 (SepQueryNameString.c)
 *     SepAuditAssignPrimaryToken @ 0x140640D1C (SepAuditAssignPrimaryToken.c)
 *     SeAuditProcessCreation @ 0x1406414B8 (SeAuditProcessCreation.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1406F6578 (CmpReportAuditVirtualizationEvent.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14078CF24 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x14078D4C0 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditProcessExit @ 0x14078DDCC (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x14078DF4C (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x14078E100 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x14078E334 (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14078E650 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14078E854 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14078EFAC (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14078FA84 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x14078FD14 (SepAdtStagingEvent.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     PsGetAllocatedFullProcessImageName @ 0x14050E958 (PsGetAllocatedFullProcessImageName.c)
 */

__int64 __fastcall PsGetAllocatedFullProcessImageNameEx(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 3221226021LL;
  if ( *(_QWORD *)(a1 + 1808) && (_QWORD)xmmword_1403A6120 )
    return ((__int64 (*)(void))xmmword_1403A6120)();
  if ( *(_QWORD *)(a1 + 1128) )
    return PsGetAllocatedFullProcessImageName(a1, a2);
  return result;
}
