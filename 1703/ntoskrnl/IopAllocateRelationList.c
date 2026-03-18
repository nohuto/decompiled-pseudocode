/*
 * XREFs of IopAllocateRelationList @ 0x140570214
 * Callers:
 *     PnpQueuePendingSurpriseRemoval @ 0x14056D958 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpInvalidateRelationsInList @ 0x14056DCF8 (PnpInvalidateRelationsInList.c)
 *     PnpBuildRemovalRelationList @ 0x14056F2D8 (PnpBuildRemovalRelationList.c)
 *     PnpCancelRemoveOnHungDevices @ 0x140695E4C (PnpCancelRemoveOnHungDevices.c)
 * Callees:
 *     PiAllocateDeviceObjectList @ 0x14057026C (PiAllocateDeviceObjectList.c)
 *     IopFreeRelationList @ 0x1405702D8 (IopFreeRelationList.c)
 *     PnpAllocateCriticalMemory @ 0x140570384 (PnpAllocateCriticalMemory.c)
 */

_BYTE *__fastcall IopAllocateRelationList(__int64 a1)
{
  unsigned int v1; // edi
  _BYTE *CriticalMemory; // rbx
  __int64 DeviceObjectList; // rax

  v1 = a1;
  CriticalMemory = (_BYTE *)PnpAllocateCriticalMemory(a1, 1LL, 16LL, 1416654416LL);
  if ( CriticalMemory )
  {
    DeviceObjectList = PiAllocateDeviceObjectList(v1, 8LL);
    *(_QWORD *)CriticalMemory = DeviceObjectList;
    if ( DeviceObjectList )
    {
      CriticalMemory[8] = 0;
    }
    else
    {
      IopFreeRelationList(CriticalMemory);
      return 0LL;
    }
  }
  return CriticalMemory;
}
