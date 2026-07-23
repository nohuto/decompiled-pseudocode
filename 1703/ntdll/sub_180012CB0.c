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

NTSTATUS __fastcall sub_180012CB0(PHANDLE TokenHandle, int a2)
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
