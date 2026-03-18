/*
 * XREFs of EtwpSynchronizeWithLogger @ 0x14045212C
 * Callers:
 *     EtwpFlushTrace @ 0x140451AD4 (EtwpFlushTrace.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x140451C80 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpRealtimeConnect @ 0x140451D24 (EtwpRealtimeConnect.c)
 *     EtwpUpdateTrace @ 0x1405D8AE8 (EtwpUpdateTrace.c)
 * Callees:
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeGetEffectiveIrql @ 0x1400E2B60 (KeGetEffectiveIrql.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KeInsertQueueDpc @ 0x1400F14F0 (KeInsertQueueDpc.c)
 */

__int64 __fastcall EtwpSynchronizeWithLogger(__int64 a1, unsigned int a2)
{
  struct _KEVENT *v2; // rsi
  unsigned int v5; // ebx

  v2 = (struct _KEVENT *)(a1 + 456);
  KeResetEvent((PRKEVENT)(a1 + 456));
  _InterlockedOr((volatile signed __int32 *)(a1 + 820), a2);
  if ( KeGetEffectiveIrql() > 2u )
  {
    if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 820), 8u) )
      KeInsertQueueDpc((PRKDPC)(a1 + 568), 0LL, 0LL);
  }
  else
  {
    KeSetEvent((PRKEVENT)(a1 + 480), 0, 0);
  }
  KeWaitForSingleObject(v2, Executive, 0, 0, 0LL);
  v5 = *(_DWORD *)(a1 + 56);
  KeResetEvent(v2);
  *(_DWORD *)(a1 + 56) = 0;
  return v5;
}
