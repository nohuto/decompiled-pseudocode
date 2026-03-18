/*
 * XREFs of EtwActivityIdControlKernel @ 0x1400802C0
 * Callers:
 *     PnpRequestDeviceAction @ 0x14003CFA4 (PnpRequestDeviceAction.c)
 *     PnpDeviceActionWorker @ 0x14003D340 (PnpDeviceActionWorker.c)
 *     IoCallDriverWithTracing @ 0x14004AEC4 (IoCallDriverWithTracing.c)
 *     IopQueueWorkItemProlog @ 0x14004BEAC (IopQueueWorkItemProlog.c)
 *     IopProcessWorkItem @ 0x140087120 (IopProcessWorkItem.c)
 *     ExpWorkerThread @ 0x1400FC140 (ExpWorkerThread.c)
 *     PnpDeviceEventWorker @ 0x1404A58F0 (PnpDeviceEventWorker.c)
 *     PnpInsertEventInQueue @ 0x1404DA210 (PnpInsertEventInQueue.c)
 *     IopParseDevice @ 0x1405385E0 (IopParseDevice.c)
 *     IopSynchronousServiceTail @ 0x14053A760 (IopSynchronousServiceTail.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwActivityIdControlKernel(int a1, PVOID *a2)
{
  unsigned int v2; // r8d
  int v3; // ecx

  v2 = 0;
  v3 = a1 - 1;
  if ( v3 )
  {
    if ( v3 == 1 )
      KeGetCurrentThread()[1].WaitBlock[0].SparePtr = *a2;
    else
      return (unsigned int)-1073741811;
  }
  else
  {
    *a2 = KeGetCurrentThread()[1].WaitBlock[0].SparePtr;
  }
  return v2;
}
