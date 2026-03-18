/*
 * XREFs of RtlDeleteElementGenericTableAvl @ 0x14004C8D0
 * Callers:
 *     VfAvlDeleteTreeNode @ 0x1401489E0 (VfAvlDeleteTreeNode.c)
 *     PiSwIrpStartCreateWorker @ 0x14045FDC0 (PiSwIrpStartCreateWorker.c)
 *     PiPnpRtlEndOperation @ 0x140488F04 (PiPnpRtlEndOperation.c)
 *     PiUpdateDriverDBCache @ 0x1404B6304 (PiUpdateDriverDBCache.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x1404B64A8 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PopCreatePowerRequestObject @ 0x1404C614C (PopCreatePowerRequestObject.c)
 *     PopPowerRequestDeleteEntryById @ 0x1404C71DC (PopPowerRequestDeleteEntryById.c)
 *     PiPnpRtlObjectEventWorker @ 0x1404DEF00 (PiPnpRtlObjectEventWorker.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1404E4180 (PiDmRemoveCacheReferenceForObject.c)
 *     PiSwProcessRemove @ 0x14056D530 (PiSwProcessRemove.c)
 *     PiSwBusRelationRemove @ 0x14056D5EC (PiSwBusRelationRemove.c)
 *     PnpCleanupDeviceRegistryValues @ 0x14056E118 (PnpCleanupDeviceRegistryValues.c)
 *     PiSwCloseDevice @ 0x14056E1C4 (PiSwCloseDevice.c)
 *     PiDmObjectManagerPopulate @ 0x1405BD940 (PiDmObjectManagerPopulate.c)
 *     IopCleanupFileObjectIosbRange @ 0x140688B20 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x14068A5DC (IopSetFileObjectIosbRange.c)
 *     PiDmListRemoveObjectWorker @ 0x1406977E0 (PiDmListRemoveObjectWorker.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvlEx @ 0x14004C910 (RtlDeleteElementGenericTableAvlEx.c)
 *     FindNodeOrParent_0 @ 0x14004CB00 (FindNodeOrParent_0.c)
 */

BOOLEAN __stdcall RtlDeleteElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer)
{
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)FindNodeOrParent_0(Table, Buffer, &v4) != 1 )
    return 0;
  RtlDeleteElementGenericTableAvlEx(Table, v4);
  return 1;
}
