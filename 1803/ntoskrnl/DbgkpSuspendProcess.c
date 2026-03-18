/*
 * XREFs of DbgkpSuspendProcess @ 0x140711758
 * Callers:
 *     PsDispatchIumService @ 0x14015CBE4 (PsDispatchIumService.c)
 *     DbgkpSendApiMessage @ 0x140710C10 (DbgkpSendApiMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x140710D08 (DbgkpSendApiMessageLpc.c)
 *     DbgkpSendErrorMessage @ 0x140710E28 (DbgkpSendErrorMessage.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     PsFreezeProcess @ 0x140565F94 (PsFreezeProcess.c)
 */

char __fastcall DbgkpSuspendProcess(ULONG_PTR a1)
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( PsFreezeProcess(a1, 0) )
    return 1;
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return 0;
}
