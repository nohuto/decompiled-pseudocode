/*
 * XREFs of ACPIInitShutdownInProgress @ 0x1C0038F54
 * Callers:
 *     ACPINotifyOsShutdownWorker @ 0x1C0039060 (ACPINotifyOsShutdownWorker.c)
 *     AcpiShutdownNotificationTimerWorkItem @ 0x1C0039B10 (AcpiShutdownNotificationTimerWorkItem.c)
 * Callees:
 *     ACPIInternalEvaluateOST @ 0x1C0029B5C (ACPIInternalEvaluateOST.c)
 */

BOOLEAN __fastcall ACPIInitShutdownInProgress(char *DeferredContext)
{
  KeInitializeDpc((PRKDPC)(DeferredContext + 72), AcpiShutdownNotificationTimerCallback, DeferredContext);
  KeInitializeTimer((PKTIMER)(DeferredContext + 8));
  *((_QWORD *)DeferredContext + 20) = 0LL;
  *((_QWORD *)DeferredContext + 22) = AcpiShutdownNotificationTimerWorkItem;
  *((_QWORD *)DeferredContext + 23) = DeferredContext;
  ACPIInternalEvaluateOST(*((_QWORD *)DeferredContext + 25), 129, 129);
  return KeSetTimer((PKTIMER)(DeferredContext + 8), (LARGE_INTEGER)-100000000LL, (PKDPC)(DeferredContext + 72));
}
