/*
 * XREFs of RtlpTpRevertCapture @ 0x18001197C
 * Callers:
 *     RtlCreateTimer @ 0x180011160 (RtlCreateTimer.c)
 *     RtlQueueWorkItem @ 0x1800113D0 (RtlQueueWorkItem.c)
 *     RtlDeleteTimer @ 0x180011A50 (RtlDeleteTimer.c)
 *     RtlRegisterWait @ 0x180011CC0 (RtlRegisterWait.c)
 *     RtlDeregisterWaitEx @ 0x180012A70 (RtlDeregisterWaitEx.c)
 *     RtlUpdateTimer @ 0x1800138F0 (RtlUpdateTimer.c)
 *     RtlCreateTimerQueue @ 0x180013E10 (RtlCreateTimerQueue.c)
 *     RtlDeleteTimerQueueEx @ 0x1800152C0 (RtlDeleteTimerQueueEx.c)
 *     RtlSetIoCompletionCallback @ 0x18008FF60 (RtlSetIoCompletionCallback.c)
 * Callees:
 *     NtSetInformationThread @ 0x1800A0260 (NtSetInformationThread.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtOpenThreadToken @ 0x1800A0540 (NtOpenThreadToken.c)
 */

__int64 __fastcall RtlpTpRevertCapture(HANDLE *a1, int a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // edi
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  if ( !NtCurrentTeb()->IsImpersonating )
    return 0LL;
  LOBYTE(a3) = 1;
  result = NtOpenThreadToken(-2LL, a2 != 0 ? 6 : 4, a3, a1);
  if ( (int)result >= 0 )
  {
    v6 = 0LL;
    v5 = NtSetInformationThread(-2LL, 5LL, &v6);
    if ( v5 < 0 )
    {
      NtClose(*a1);
      *a1 = 0LL;
      return (unsigned int)v5;
    }
    return 0LL;
  }
  return result;
}
