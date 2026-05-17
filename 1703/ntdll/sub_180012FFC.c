/*
 * XREFs of sub_180012FFC @ 0x180012FFC
 * Callers:
 *     RtlDeleteTimer @ 0x180010F80 (RtlDeleteTimer.c)
 *     RtlCreateTimer @ 0x180011110 (RtlCreateTimer.c)
 *     RtlQueueWorkItem @ 0x180012480 (RtlQueueWorkItem.c)
 *     RtlDeregisterWaitEx @ 0x180012890 (RtlDeregisterWaitEx.c)
 *     RtlRegisterWait @ 0x180012DA0 (RtlRegisterWait.c)
 *     RtlUpdateTimer @ 0x180085320 (RtlUpdateTimer.c)
 *     RtlCreateTimerQueue @ 0x180085F50 (RtlCreateTimerQueue.c)
 *     RtlDeleteTimerQueueEx @ 0x180086B40 (RtlDeleteTimerQueueEx.c)
 *     RtlSetIoCompletionCallback @ 0x180105CA0 (RtlSetIoCompletionCallback.c)
 * Callees:
 *     ZwSetInformationThread @ 0x1800A54A0 (ZwSetInformationThread.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 */

__int64 __fastcall sub_180012FFC(__int64 a1)
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
