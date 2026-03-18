/*
 * XREFs of IopAllocateRelationList @ 0x14055D6D8
 * Callers:
 *     PnpBuildRemovalRelationList @ 0x14055C134 (PnpBuildRemovalRelationList.c)
 *     PnpInvalidateRelationsInList @ 0x1405E42E4 (PnpInvalidateRelationsInList.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1405EAA48 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpCancelRemoveOnHungDevices @ 0x1406C1A88 (PnpCancelRemoveOnHungDevices.c)
 * Callees:
 *     PiAllocateDeviceObjectList @ 0x14055D730 (PiAllocateDeviceObjectList.c)
 *     IopFreeRelationList @ 0x14055D79C (IopFreeRelationList.c)
 *     PnpAllocateCriticalMemory @ 0x14055D8C8 (PnpAllocateCriticalMemory.c)
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
