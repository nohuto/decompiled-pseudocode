/*
 * XREFs of ?ReportGpuWakeupWorkItemCallback@DXGGLOBAL@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C01A0D00
 * Callers:
 *     <none>
 * Callees:
 *     DxgkReportDripsBlocker @ 0x1C01A1F10 (DxgkReportDripsBlocker.c)
 */

void __fastcall DXGGLOBAL::ReportGpuWakeupWorkItemCallback(PVOID IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v5; // rax

  if ( Context )
  {
    v5 = WdLogNewEntry5_WdAssertion(IoObject);
    *(_QWORD *)(v5 + 24) = 4324LL;
    WdLogEvent5_WdAssertion(v5);
  }
  DxgkReportDripsBlocker(IoObject, IoObject, 0LL);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}
