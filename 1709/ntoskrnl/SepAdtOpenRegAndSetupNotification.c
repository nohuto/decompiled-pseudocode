/*
 * XREFs of SepAdtOpenRegAndSetupNotification @ 0x1405D0870
 * Callers:
 *     SepAdtInitializeAuditingOptions @ 0x140849D38 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     NtNotifyChangeKey @ 0x1404797B0 (NtNotifyChangeKey.c)
 *     SepRegOpenKey @ 0x140513824 (SepRegOpenKey.c)
 */

int SepAdtOpenRegAndSetupNotification()
{
  int result; // eax

  result = SepRegOpenKey(
             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa",
             0x211u,
             &SepAdtRegNotifyHandle);
  if ( result >= 0 )
  {
    qword_1403A2CE8 = (__int64)SepAdtRegNotificationCallback;
    qword_1403A2CF0 = 0LL;
    SepAdtLsaRegWatchWorkItem[0] = 0LL;
    return NtNotifyChangeKey(
             SepAdtRegNotifyHandle,
             0LL,
             (PIO_APC_ROUTINE)SepAdtLsaRegWatchWorkItem,
             (PVOID)1,
             &SepAdtIoStatusBlock,
             5u,
             0,
             0LL,
             0,
             1u);
  }
  return result;
}
