/*
 * XREFs of PopQueueTargetDpc @ 0x140038F50
 * Callers:
 *     PopExecuteOnTargetProcessors @ 0x140038E58 (PopExecuteOnTargetProcessors.c)
 *     PopExecuteProcessorCallback @ 0x140038F00 (PopExecuteProcessorCallback.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140034620 (KeEnumerateNextProcessor.c)
 *     KeInsertQueueDpc @ 0x140039000 (KeInsertQueueDpc.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 */

BOOLEAN __fastcall PopQueueTargetDpc(PRKDPC Dpc, __int64 a2)
{
  int v5; // [rsp+38h] [rbp+10h] BYREF

  if ( (int)KeEnumerateNextProcessor(&v5, *(unsigned __int16 ***)(a2 + 32)) < 0 )
    return KeSetEvent(*(PRKEVENT *)(a2 + 24), 0, 0);
  Dpc->TargetInfoAsUlong = 787;
  Dpc->DeferredRoutine = (PKDEFERRED_ROUTINE)PopExecuteProcessorCallback;
  Dpc->DeferredContext = (PVOID)a2;
  Dpc->DpcData = 0LL;
  Dpc->ProcessorHistory = 0LL;
  if ( !Dpc->DpcData )
    Dpc->Number = v5 + 1280;
  return KeInsertQueueDpc(Dpc, 0LL, 0LL);
}
