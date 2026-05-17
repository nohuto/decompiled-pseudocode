/*
 * XREFs of sub_1800588B4 @ 0x1800588B4
 * Callers:
 *     RtlDeleteTimerQueueEx @ 0x1800550D0 (RtlDeleteTimerQueueEx.c)
 *     RtlCreateTimerQueue @ 0x180056500 (RtlCreateTimerQueue.c)
 *     RtlUpdateTimer @ 0x180056890 (RtlUpdateTimer.c)
 *     RtlQueueWorkItem @ 0x180057A90 (RtlQueueWorkItem.c)
 *     RtlDeleteTimer @ 0x180057EA0 (RtlDeleteTimer.c)
 *     RtlCreateTimer @ 0x180057FF0 (RtlCreateTimer.c)
 *     RtlDeregisterWaitEx @ 0x180058270 (RtlDeregisterWaitEx.c)
 *     RtlRegisterWait @ 0x180058640 (RtlRegisterWait.c)
 *     RtlSetIoCompletionCallback @ 0x180108B30 (RtlSetIoCompletionCallback.c)
 * Callees:
 *     ZwSetInformationThread @ 0x18009AC60 (ZwSetInformationThread.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 */

__int64 __fastcall sub_1800588B4(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    v2 = a1;
    ZwSetInformationThread(-2LL, 5LL, &v2);
    return ZwClose(v2);
  }
  return result;
}
