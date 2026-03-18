/*
 * XREFs of IoSetActivityIdThread @ 0x1400FB290
 * Callers:
 *     NtQueryInformationFile @ 0x14049A060 (NtQueryInformationFile.c)
 *     IopSynchronousServiceTail @ 0x1404AD220 (IopSynchronousServiceTail.c)
 *     IopParseDevice @ 0x1404B86A0 (IopParseDevice.c)
 *     PnpDeviceEventWorker @ 0x14054B420 (PnpDeviceEventWorker.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14054C2A0 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqIrpQueryCreate @ 0x14054C90C (PiDqIrpQueryCreate.c)
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
