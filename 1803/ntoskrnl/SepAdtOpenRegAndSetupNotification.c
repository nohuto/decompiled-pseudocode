/*
 * XREFs of SepAdtOpenRegAndSetupNotification @ 0x140631664
 * Callers:
 *     SepAdtInitializeAuditingOptions @ 0x1408B2164 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     NtNotifyChangeKey @ 0x1404A2684 (NtNotifyChangeKey.c)
 *     SepRegOpenKey @ 0x140631A00 (SepRegOpenKey.c)
 */

NTSTATUS SepAdtOpenRegAndSetupNotification()
{
  NTSTATUS result; // eax

  result = SepRegOpenKey(
             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa",
             0x211u,
             &SepAdtRegNotifyHandle);
  if ( result >= 0 )
  {
    qword_1403E92D8 = (__int64)SepAdtRegNotificationCallback;
    qword_1403E92E0 = 0LL;
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
