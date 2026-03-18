/*
 * XREFs of PsGetAllocatedFullProcessImageNameEx @ 0x14057D374
 * Callers:
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14046BB90 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14046BC3C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtTokenRightAdjusted @ 0x14053A1CC (SepAdtTokenRightAdjusted.c)
 *     SepQueryNameString @ 0x140564610 (SepQueryNameString.c)
 *     SeLocateProcessImageName @ 0x14057D360 (SeLocateProcessImageName.c)
 *     SeAuditProcessCreation @ 0x1405A71B4 (SeAuditProcessCreation.c)
 *     SepAuditAssignPrimaryToken @ 0x1405F0A2C (SepAuditAssignPrimaryToken.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1406936A0 (CmpReportAuditVirtualizationEvent.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140728B88 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x140729130 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditProcessExit @ 0x140729A2C (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x140729BAC (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x140729D60 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x140729F94 (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14072A2B0 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14072A4B4 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14072AC08 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14072B6E0 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x14072B970 (SepAdtStagingEvent.c)
 *     SeAdjustObjectSecurity @ 0x140730224 (SeAdjustObjectSecurity.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     PsGetAllocatedFullProcessImageName @ 0x14057D3A8 (PsGetAllocatedFullProcessImageName.c)
 */

__int64 __fastcall PsGetAllocatedFullProcessImageNameEx(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 3221226021LL;
  if ( *(_QWORD *)(a1 + 1808) )
  {
    if ( (_QWORD)xmmword_140362960 )
      return ((__int64 (*)(void))xmmword_140362960)();
  }
  else if ( *(_QWORD *)(a1 + 1128) )
  {
    return PsGetAllocatedFullProcessImageName(a1, a2);
  }
  return result;
}
