/*
 * XREFs of EtwpSynchronizeWithLogger @ 0x140595F24
 * Callers:
 *     EtwpUpdateTrace @ 0x140450B18 (EtwpUpdateTrace.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x140451628 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpFlushTrace @ 0x1405959E0 (EtwpFlushTrace.c)
 *     EtwpRealtimeConnect @ 0x140595B1C (EtwpRealtimeConnect.c)
 * Callees:
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeGetEffectiveIrql @ 0x140088FA0 (KeGetEffectiveIrql.c)
 *     KeInsertQueueDpc @ 0x140094390 (KeInsertQueueDpc.c)
 */

__int64 __fastcall EtwpSynchronizeWithLogger(__int64 a1, unsigned int a2)
{
  struct _KEVENT *v2; // rsi
  unsigned int v5; // ebx

  v2 = (struct _KEVENT *)(a1 + 472);
  KeResetEvent((PRKEVENT)(a1 + 472));
  _InterlockedOr((volatile signed __int32 *)(a1 + 836), a2);
  if ( KeGetEffectiveIrql() > 2u )
  {
    if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 836), 8u) )
      KeInsertQueueDpc((PRKDPC)(a1 + 584), 0LL, 0LL);
  }
  else
  {
    KeSetEvent((PRKEVENT)(a1 + 496), 0, 0);
  }
  KeWaitForSingleObject(v2, Executive, 0, 0, 0LL);
  v5 = *(_DWORD *)(a1 + 56);
  KeResetEvent(v2);
  *(_DWORD *)(a1 + 56) = 0;
  return v5;
}
