/*
 * XREFs of sub_180058F2C @ 0x180058F2C
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
 *     ZwOpenThreadToken @ 0x18009AF40 (ZwOpenThreadToken.c)
 */

__int64 __fastcall sub_180058F2C(_QWORD *a1, int a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // edi
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  if ( !NtCurrentTeb()->IsImpersonating )
    return 0LL;
  LOBYTE(a3) = 1;
  result = ZwOpenThreadToken(-2LL, a2 != 0 ? 6 : 4, a3, a1);
  if ( (int)result >= 0 )
  {
    v6 = 0LL;
    v5 = ZwSetInformationThread(-2LL, 5LL, &v6);
    if ( v5 < 0 )
    {
      ZwClose(*a1);
      *a1 = 0LL;
      return (unsigned int)v5;
    }
    return 0LL;
  }
  return result;
}
