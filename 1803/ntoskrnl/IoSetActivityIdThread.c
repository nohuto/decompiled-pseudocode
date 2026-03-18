/*
 * XREFs of IoSetActivityIdThread @ 0x140075980
 * Callers:
 *     PnpDeviceEventWorker @ 0x14051FE70 (PnpDeviceEventWorker.c)
 *     PiDqIrpQueryCreate @ 0x140523298 (PiDqIrpQueryCreate.c)
 *     IopSynchronousServiceTail @ 0x14059D990 (IopSynchronousServiceTail.c)
 *     IopParseDevice @ 0x1405B17F0 (IopParseDevice.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1405DD500 (PiDqObjectManagerServiceActionQueue.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall IoSetActivityIdThread(void *a1)
{
  struct _KTHREAD *CurrentThread; // rdx
  PVOID result; // rax

  CurrentThread = KeGetCurrentThread();
  result = CurrentThread[1].WaitBlock[0].SparePtr;
  CurrentThread[1].WaitBlock[0].SparePtr = a1;
  return result;
}
