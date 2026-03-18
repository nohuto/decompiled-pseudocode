/*
 * XREFs of PnpTimerCallback @ 0x14015F440
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 */

void __fastcall PnpTimerCallback(__int64 a1, __int64 a2)
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 168), DelayedWorkQueue);
}
