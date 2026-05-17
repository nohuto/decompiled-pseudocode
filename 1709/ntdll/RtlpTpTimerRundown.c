/*
 * XREFs of RtlpTpTimerRundown @ 0x180011C54
 * Callers:
 *     RtlDeleteTimer @ 0x180011A50 (RtlDeleteTimer.c)
 *     RtlpTpTimerFinalizationCallback @ 0x1800135E0 (RtlpTpTimerFinalizationCallback.c)
 *     RtlDeleteTimerQueueEx @ 0x1800152C0 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     RtlpTpTimerQueueRundown @ 0x180015460 (RtlpTpTimerQueueRundown.c)
 *     ZwSetEvent @ 0x1800A0280 (ZwSetEvent.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 */

__int64 __fastcall RtlpTpTimerRundown(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  void *v6; // rcx

  v5 = *(_QWORD *)(a1 + 72);
  if ( v5 )
    ZwSetEvent(v5, 0LL, a3, a4);
  v6 = *(void **)(a1 + 16);
  if ( v6 )
    NtClose(v6);
  if ( _InterlockedExchangeAdd(*(volatile signed __int32 **)(a1 + 56), 0xFFFFFFFF) == 1 )
    RtlpTpTimerQueueRundown(*(_QWORD *)(a1 + 56));
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1);
}
