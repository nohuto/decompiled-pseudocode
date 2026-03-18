/*
 * XREFs of UsbhSS_SignalPdoWake @ 0x1C0007864
 * Callers:
 *     UsbhPortResumeComplete @ 0x1C00077B0 (UsbhPortResumeComplete.c)
 *     UsbhPortResumeFailed @ 0x1C0051090 (UsbhPortResumeFailed.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhLatchPdo @ 0x1C001A5DC (UsbhLatchPdo.c)
 *     UsbhQueueWorkItemWithRetry @ 0x1C00247B0 (UsbhQueueWorkItemWithRetry.c)
 */

__int64 __fastcall UsbhSS_SignalPdoWake(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  int v5; // ebx

  v4 = PdoExt(a2);
  v5 = v4;
  UsbhLatchPdo(a1, *(unsigned __int16 *)(v4 + 1420), 0LL, 1936945239LL);
  Log(a1, 0x10000, 1935098187, a2, 0LL);
  return UsbhQueueWorkItemWithRetry(a1, v5 + 1616, (unsigned int)UsbhSS_PdoWakeWorker, 0, a2, 0, 2001752915);
}
