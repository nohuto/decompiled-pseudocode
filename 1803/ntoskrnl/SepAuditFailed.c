/*
 * XREFs of SepAuditFailed @ 0x140795050
 * Callers:
 *     SepRmCallLsa @ 0x1400C7970 (SepRmCallLsa.c)
 *     SepRmDispatchDataToLsa @ 0x1400C7BA4 (SepRmDispatchDataToLsa.c)
 *     SepInitProcessAuditSd @ 0x140180424 (SepInitProcessAuditSd.c)
 *     SepAuditFailedRaisedIrql @ 0x1402A1A08 (SepAuditFailedRaisedIrql.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x1404D5808 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1404D591C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x1404D59E0 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x1404D5AA0 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x1404D5B10 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1404D7FE0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14053E640 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1405466C4 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x14055CD48 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     NtCloseObjectAuditAlarm @ 0x14056C944 (NtCloseObjectAuditAlarm.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x14057A494 (NtPrivilegedServiceAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x1405DFF70 (NtOpenObjectAuditAlarm.c)
 *     NtDeleteObjectAuditAlarm @ 0x1405F4050 (NtDeleteObjectAuditAlarm.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x14061118C (NtPrivilegeObjectAuditAlarm.c)
 *     SepRmCommandServerThread @ 0x1406316F0 (SepRmCommandServerThread.c)
 *     SepAuditAssignPrimaryToken @ 0x140640D1C (SepAuditAssignPrimaryToken.c)
 *     SeAuditProcessCreation @ 0x1406414B8 (SeAuditProcessCreation.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14078CF24 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x14078D4C0 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditProcessExit @ 0x14078DDCC (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x14078DF4C (SeAuditSystemTimeChange.c)
 *     SeOperationAuditAlarm @ 0x14078E334 (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14078E650 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14078E854 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x14078ED7C (SepAdtObjectReferenceAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14078EFAC (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14078FA84 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x14078FD14 (SepAdtStagingEvent.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x140791310 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x1401A80C0 (ZwSetValueKey.c)
 *     ZwFlushKey @ 0x1401A9100 (ZwFlushKey.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     SepAdtLogAuditFailureEvent @ 0x14078EB84 (SepAdtLogAuditFailureEvent.c)
 */

void __fastcall SepAuditFailed(signed int a1)
{
  ULONG_PTR v1; // rbx
  NTSTATUS v2; // eax
  NTSTATUS v3; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+58h] [rbp+10h] BYREF

  v1 = a1;
  if ( SepCrashOnAuditFail )
  {
    if ( SepAdtRegNotifyHandle )
    {
      SepAdtLogAuditFailureEvent(a1, 1);
      RtlInitUnicodeString(&DestinationString, L"CrashOnAuditFail");
      LODWORD(BugCheckParameter4) = 2;
      do
      {
        do
          v2 = ZwSetValueKey(SepAdtRegNotifyHandle, &DestinationString, 0, 4u, &BugCheckParameter4, 4u);
        while ( v2 == -1073741670 );
      }
      while ( v2 == -1073741801 );
      if ( v2 >= 0 )
      {
        do
        {
          do
            v3 = ZwFlushKey(SepAdtRegNotifyHandle);
          while ( v3 == -1073741670 );
        }
        while ( v3 == -1073741801 );
      }
      KeBugCheckEx(0xC0000244, v1, 0LL, 0LL, 0LL);
    }
    SepCrashOnAuditFail = 0;
  }
}
