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

NTSTATUS __fastcall sub_180058F2C(PHANDLE TokenHandle, int a2)
{
  NTSTATUS result; // eax
  NTSTATUS v4; // edi
  __int64 ThreadInformation; // [rsp+30h] [rbp+8h] BYREF

  *TokenHandle = 0LL;
  if ( !NtCurrentTeb()->IsImpersonating )
    return 0;
  result = ZwOpenThreadToken((HANDLE)0xFFFFFFFFFFFFFFFELL, a2 != 0 ? 6 : 4, 1u, TokenHandle);
  if ( result >= 0 )
  {
    ThreadInformation = 0LL;
    v4 = ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
    if ( v4 < 0 )
    {
      ZwClose(*TokenHandle);
      *TokenHandle = 0LL;
      return v4;
    }
    return 0;
  }
  return result;
}
