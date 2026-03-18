/*
 * XREFs of PnpAllocateCriticalMemory @ 0x140570384
 * Callers:
 *     PnpQueuePendingSurpriseRemoval @ 0x14056D958 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpSetTargetDeviceRemove @ 0x14056E408 (PnpSetTargetDeviceRemove.c)
 *     PiEventAllocateVetoBuffer @ 0x14056FA20 (PiEventAllocateVetoBuffer.c)
 *     PnpResizeTargetDeviceBlock @ 0x14056FA7C (PnpResizeTargetDeviceBlock.c)
 *     PiEventBuildPdoList @ 0x14056FCD8 (PiEventBuildPdoList.c)
 *     PnpCompileDeviceInstancePaths @ 0x14056FF2C (PnpCompileDeviceInstancePaths.c)
 *     IopAllocateRelationList @ 0x140570214 (IopAllocateRelationList.c)
 *     PiAllocateDeviceObjectList @ 0x14057026C (PiAllocateDeviceObjectList.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
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
