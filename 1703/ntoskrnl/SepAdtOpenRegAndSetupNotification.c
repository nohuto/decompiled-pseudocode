/*
 * XREFs of SepAdtOpenRegAndSetupNotification @ 0x1405A6E90
 * Callers:
 *     SepAdtInitializeAuditingOptions @ 0x140808DF4 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     NtNotifyChangeKey @ 0x140491EB8 (NtNotifyChangeKey.c)
 *     SepRegOpenKey @ 0x1405608EC (SepRegOpenKey.c)
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
    qword_140387780 = (__int64)SepAdtRegNotificationCallback;
    qword_140387788 = 0LL;
    *(_QWORD *)SepAdtLsaRegWatchWorkItem = 0LL;
    return NtNotifyChangeKey(
             SepAdtRegNotifyHandle,
             0LL,
             SepAdtLsaRegWatchWorkItem,
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
