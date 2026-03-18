/*
 * XREFs of UsbhResetIrqPipeRetryTimer @ 0x1C0044BE0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhQueueWorkItemWithRetry @ 0x1C00256A0 (UsbhQueueWorkItemWithRetry.c)
 */

__int64 __fastcall UsbhResetIrqPipeRetryTimer(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  return UsbhQueueWorkItemWithRetry(a2, 0LL, (__int64)UsbhHubResetIrqPipeWorker, 0, a4, a3, 0x49577269u);
}
