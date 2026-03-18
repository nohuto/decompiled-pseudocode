/*
 * XREFs of DbgkpSuspendProcess @ 0x1406ACEB0
 * Callers:
 *     PsDispatchIumService @ 0x14024ED54 (PsDispatchIumService.c)
 *     DbgkpSendApiMessage @ 0x1406AC2E4 (DbgkpSendApiMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x1406AC3DC (DbgkpSendApiMessageLpc.c)
 *     DbgkpSendErrorMessage @ 0x1406AC4FC (DbgkpSendErrorMessage.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     PsFreezeProcess @ 0x14057D084 (PsFreezeProcess.c)
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
