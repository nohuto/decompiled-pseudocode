/*
 * XREFs of AcpiPccPlatformNotificationWorker @ 0x1C0052A70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AcpiPccPlatformNotificationWorker(
        PVOID IoObject,
        void (__fastcall **Context)(_QWORD),
        PIO_WORKITEM IoWorkItem)
{
  IoFreeWorkItem(IoWorkItem);
  Context[18](Context[19]);
}
