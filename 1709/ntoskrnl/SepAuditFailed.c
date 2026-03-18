/*
 * XREFs of SepAuditFailed @ 0x140731750
 * Callers:
 *     SepRmCallLsa @ 0x14014C140 (SepRmCallLsa.c)
 *     SepRmDispatchDataToLsa @ 0x14014C374 (SepRmDispatchDataToLsa.c)
 *     SepInitProcessAuditSd @ 0x1401511F4 (SepInitProcessAuditSd.c)
 *     SepAuditFailedRaisedIrql @ 0x14025FF68 (SepAuditFailedRaisedIrql.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046A8D0 (SepAccessCheckAndAuditAlarm.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14046BB90 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14046BC3C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x14046BD00 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x14046BDC0 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x14046BE30 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x14046D188 (NtPrivilegedServiceAuditAlarm.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x14046D3F0 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14046D680 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x14046D7AC (NtOpenObjectAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140487F80 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     NtCloseObjectAuditAlarm @ 0x14057EE98 (NtCloseObjectAuditAlarm.c)
 *     SeAuditProcessCreation @ 0x1405A71B4 (SeAuditProcessCreation.c)
 *     SepRmCommandServerThread @ 0x1405A76C0 (SepRmCommandServerThread.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x1405DBA30 (NtPrivilegeObjectAuditAlarm.c)
 *     SepAuditAssignPrimaryToken @ 0x1405F0A2C (SepAuditAssignPrimaryToken.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140728B88 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x140729130 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditProcessExit @ 0x140729A2C (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x140729BAC (SeAuditSystemTimeChange.c)
 *     SeOperationAuditAlarm @ 0x140729F94 (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14072A2B0 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14072A4B4 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x14072A9D8 (SepAdtObjectReferenceAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14072AC08 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14072B6E0 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x14072B970 (SepAdtStagingEvent.c)
 *     NtDeleteObjectAuditAlarm @ 0x14072CA48 (NtDeleteObjectAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x14072D060 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x14017E4C0 (ZwSetValueKey.c)
 *     ZwFlushKey @ 0x14017F4E0 (ZwFlushKey.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     SepAdtLogAuditFailureEvent @ 0x14072A7E4 (SepAdtLogAuditFailureEvent.c)
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
