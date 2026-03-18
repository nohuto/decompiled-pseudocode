/*
 * XREFs of UsbhWait @ 0x1C0005CE4
 * Callers:
 *     UsbhFdoSetD0Cold @ 0x1C00050E0 (UsbhFdoSetD0Cold.c)
 *     UsbhPortResumeComplete @ 0x1C0006230 (UsbhPortResumeComplete.c)
 *     UsbhReset1Complete @ 0x1C00092A0 (UsbhReset1Complete.c)
 *     UsbhPdoInternalDeviceControl @ 0x1C0010A80 (UsbhPdoInternalDeviceControl.c)
 *     UsbhReset2Complete @ 0x1C00143E0 (UsbhReset2Complete.c)
 *     UsbhInitialize @ 0x1C0015CC0 (UsbhInitialize.c)
 *     UsbhInitializeDevice @ 0x1C0018F5C (UsbhInitializeDevice.c)
 *     UsbhCancelResetTimeout @ 0x1C0019250 (UsbhCancelResetTimeout.c)
 *     UsbhOvercurrentResetWorker @ 0x1C003E200 (UsbhOvercurrentResetWorker.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0041ECC (UsbhQueueSoftConnectChange.c)
 *     UsbhFdoSetD0Warm @ 0x1C0046A38 (UsbhFdoSetD0Warm.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C0047184 (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhHardReset_Action @ 0x1C0047744 (UsbhHardReset_Action.c)
 *     UsbhPortResumeFailed @ 0x1C0051E50 (UsbhPortResumeFailed.c)
 * Callees:
 *     UsbhRawWait @ 0x1C00096A0 (UsbhRawWait.c)
 *     Log @ 0x1C00155F0 (Log.c)
 */

__int64 __fastcall UsbhWait(int a1, int a2)
{
  unsigned int v2; // r10d

  Log(a1, 8, 2002872692, a2, 0LL);
  return UsbhRawWait(v2);
}
