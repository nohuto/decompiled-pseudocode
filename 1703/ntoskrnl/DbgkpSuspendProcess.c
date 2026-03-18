/*
 * XREFs of DbgkpSuspendProcess @ 0x140681BE8
 * Callers:
 *     PsDispatchIumService @ 0x140239D84 (PsDispatchIumService.c)
 *     DbgkpSendApiMessage @ 0x140681108 (DbgkpSendApiMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x140681200 (DbgkpSendApiMessageLpc.c)
 *     DbgkpSendErrorMessage @ 0x140681320 (DbgkpSendErrorMessage.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     PsFreezeProcess @ 0x1404C7A84 (PsFreezeProcess.c)
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
