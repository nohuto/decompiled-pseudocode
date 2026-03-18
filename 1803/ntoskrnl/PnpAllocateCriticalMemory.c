/*
 * XREFs of PnpAllocateCriticalMemory @ 0x1405C8644
 * Callers:
 *     PnpSetTargetDeviceRemove @ 0x1405C766C (PnpSetTargetDeviceRemove.c)
 *     PnpResizeTargetDeviceBlock @ 0x1405C8378 (PnpResizeTargetDeviceBlock.c)
 *     IopAllocateRelationList @ 0x1405C8454 (IopAllocateRelationList.c)
 *     PiAllocateDeviceObjectList @ 0x1405C84AC (PiAllocateDeviceObjectList.c)
 *     PiEventAllocateVetoBuffer @ 0x1405C85C4 (PiEventAllocateVetoBuffer.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1405C91F4 (PnpQueuePendingSurpriseRemoval.c)
 *     PiEventBuildPdoList @ 0x1405C9370 (PiEventBuildPdoList.c)
 *     PnpCompileDeviceInstancePaths @ 0x1405C9874 (PnpCompileDeviceInstancePaths.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PnpAllocateCriticalMemory(int a1, POOL_TYPE a2, SIZE_T a3, ULONG a4)
{
  ULONG i; // r8d
  PVOID result; // rax
  LARGE_INTEGER Interval; // [rsp+20h] [rbp-18h] BYREF

  for ( i = a4; ; i = a4 )
  {
    result = ExAllocatePoolWithTag(a2, a3, i);
    if ( result || (a1 & 0xFFFFFFFB) == 0 )
      break;
    Interval.QuadPart = -10000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  return result;
}
