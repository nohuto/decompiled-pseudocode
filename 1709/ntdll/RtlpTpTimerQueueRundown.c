/*
 * XREFs of RtlpTpTimerQueueRundown @ 0x180015460
 * Callers:
 *     RtlpTpTimerRundown @ 0x180011C54 (RtlpTpTimerRundown.c)
 *     RtlDeleteTimerQueueEx @ 0x1800152C0 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     ZwSetEvent @ 0x1800A0280 (ZwSetEvent.c)
 *     ZwAlertThreadByThreadId @ 0x1800A0E90 (ZwAlertThreadByThreadId.c)
 */

__int64 __fastcall RtlpTpTimerQueueRundown(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rcx

  v5 = *(_QWORD *)(a1 + 40);
  if ( v5 )
  {
    ZwAlertThreadByThreadId(v5);
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 16);
    if ( v6 )
      ZwSetEvent(v6, 0LL, a3, a4);
  }
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1);
}
