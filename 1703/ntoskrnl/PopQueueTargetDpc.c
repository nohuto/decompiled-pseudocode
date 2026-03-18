/*
 * XREFs of PopQueueTargetDpc @ 0x1400889A0
 * Callers:
 *     PopExecuteOnTargetProcessors @ 0x1400888B0 (PopExecuteOnTargetProcessors.c)
 *     PopExecuteProcessorCallback @ 0x140088950 (PopExecuteProcessorCallback.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x1400459E0 (KeEnumerateNextProcessor.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeInsertQueueDpc @ 0x1400F14F0 (KeInsertQueueDpc.c)
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
    Dpc->Number = v5 + 640;
  return KeInsertQueueDpc(Dpc, 0LL, 0LL);
}
