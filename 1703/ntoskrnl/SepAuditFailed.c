/*
 * XREFs of SepAuditFailed @ 0x1406F9D10
 * Callers:
 *     SepRmCallLsa @ 0x1401481D0 (SepRmCallLsa.c)
 *     SepRmDispatchDataToLsa @ 0x140148404 (SepRmDispatchDataToLsa.c)
 *     SepInitProcessAuditSd @ 0x1401627E4 (SepInitProcessAuditSd.c)
 *     SepAuditFailedRaisedIrql @ 0x140248844 (SepAuditFailedRaisedIrql.c)
 *     NtCloseObjectAuditAlarm @ 0x140443584 (NtCloseObjectAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14046A2D4 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x14046A39C (NtPrivilegedServiceAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x14046A60C (NtOpenObjectAuditAlarm.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x14046AED8 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046B2C0 (SepAccessCheckAndAuditAlarm.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14046C574 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14046C68C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x14046C750 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x14046C810 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x14046C880 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1404F61D0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeAuditProcessCreation @ 0x1405AC188 (SeAuditProcessCreation.c)
 *     SepRmCommandServerThread @ 0x1405C5730 (SepRmCommandServerThread.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x1405C7568 (NtPrivilegeObjectAuditAlarm.c)
 *     SepAuditAssignPrimaryToken @ 0x1405D4708 (SepAuditAssignPrimaryToken.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1406F1108 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x1406F16B0 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditProcessExit @ 0x1406F1F9C (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x1406F211C (SeAuditSystemTimeChange.c)
 *     SeOperationAuditAlarm @ 0x1406F2504 (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1406F2820 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1406F2A24 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x1406F2F48 (SepAdtObjectReferenceAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1406F3178 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1406F3C50 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1406F3EE0 (SepAdtStagingEvent.c)
 *     NtDeleteObjectAuditAlarm @ 0x1406F4FFC (NtDeleteObjectAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1406F5610 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x14017EB40 (ZwSetValueKey.c)
 *     ZwFlushKey @ 0x14017FB40 (ZwFlushKey.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     SepAdtLogAuditFailureEvent @ 0x1406F2D54 (SepAdtLogAuditFailureEvent.c)
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
