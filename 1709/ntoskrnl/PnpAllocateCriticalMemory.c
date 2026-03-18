/*
 * XREFs of PnpAllocateCriticalMemory @ 0x14055D8C8
 * Callers:
 *     PnpSetTargetDeviceRemove @ 0x14055BE88 (PnpSetTargetDeviceRemove.c)
 *     PnpResizeTargetDeviceBlock @ 0x14055C91C (PnpResizeTargetDeviceBlock.c)
 *     PiEventBuildPdoList @ 0x14055D108 (PiEventBuildPdoList.c)
 *     PnpCompileDeviceInstancePaths @ 0x14055D404 (PnpCompileDeviceInstancePaths.c)
 *     IopAllocateRelationList @ 0x14055D6D8 (IopAllocateRelationList.c)
 *     PiAllocateDeviceObjectList @ 0x14055D730 (PiAllocateDeviceObjectList.c)
 *     PiEventAllocateVetoBuffer @ 0x14055D848 (PiEventAllocateVetoBuffer.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1405EAA48 (PnpQueuePendingSurpriseRemoval.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
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
