/*
 * XREFs of sub_180012CB0 @ 0x180012CB0
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
 *     ZwOpenThreadToken @ 0x1800A5780 (ZwOpenThreadToken.c)
 */

__int64 __fastcall sub_180012CB0(_QWORD *a1, int a2, __int64 a3)
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
