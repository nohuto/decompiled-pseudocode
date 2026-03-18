/*
 * XREFs of RtlDeleteElementGenericTableAvl @ 0x14006D290
 * Callers:
 *     VfAvlDeleteTreeNode @ 0x140160AE8 (VfAvlDeleteTreeNode.c)
 *     PiPnpRtlEndOperation @ 0x140509BA8 (PiPnpRtlEndOperation.c)
 *     PopCreatePowerRequestObject @ 0x140524250 (PopCreatePowerRequestObject.c)
 *     PopPowerRequestDeleteEntryById @ 0x140524B88 (PopPowerRequestDeleteEntryById.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x140524BE4 (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PopAvlDeleteStatsForPowerRequest @ 0x1405250AC (PopAvlDeleteStatsForPowerRequest.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x140573508 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiSwProcessRemove @ 0x1405C3D0C (PiSwProcessRemove.c)
 *     PiSwBusRelationRemove @ 0x1405C3DC8 (PiSwBusRelationRemove.c)
 *     PiSwCloseDevice @ 0x1405C4518 (PiSwCloseDevice.c)
 *     PiSwIrpStartCreateWorker @ 0x1405C6A7C (PiSwIrpStartCreateWorker.c)
 *     PnpCleanupDeviceRegistryValues @ 0x1405C9DB0 (PnpCleanupDeviceRegistryValues.c)
 *     PiPnpRtlObjectEventWorker @ 0x1405D2B70 (PiPnpRtlObjectEventWorker.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1405E06C0 (PiDmRemoveCacheReferenceForObject.c)
 *     PopAvlFindOrMakeStatsForAudio @ 0x1405E90A0 (PopAvlFindOrMakeStatsForAudio.c)
 *     PiUpdateDriverDBCache @ 0x1405FBFC4 (PiUpdateDriverDBCache.c)
 *     PiDmObjectManagerPopulate @ 0x140631170 (PiDmObjectManagerPopulate.c)
 *     IopCleanupFileObjectIosbRange @ 0x1407197B8 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x14071AF1C (IopSetFileObjectIosbRange.c)
 *     PiDmListRemoveObjectWorker @ 0x140729088 (PiDmListRemoveObjectWorker.c)
 * Callees:
 *     DeleteNodeFromTree @ 0x14006D340 (DeleteNodeFromTree.c)
 *     RealPredecessor @ 0x1400D0C14 (RealPredecessor.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

BOOLEAN __stdcall RtlDeleteElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer)
{
  _RTL_BALANCED_LINKS *RightChild; // rbx
  _RTL_GENERIC_COMPARE_RESULTS v5; // eax

  if ( !Table->NumberGenericTableElements )
    return 0;
  RightChild = Table->BalancedRoot.RightChild;
  while ( 1 )
  {
    v5 = Table->CompareRoutine(Table, Buffer, &RightChild[1]);
    if ( v5 )
      break;
    RightChild = RightChild->LeftChild;
LABEL_5:
    if ( !RightChild )
      return 0;
  }
  if ( v5 == GenericGreaterThan )
  {
    RightChild = RightChild->RightChild;
    goto LABEL_5;
  }
  if ( RightChild == Table->RestartKey )
    Table->RestartKey = (_RTL_BALANCED_LINKS *)RealPredecessor(RightChild);
  ++Table->DeleteCount;
  DeleteNodeFromTree(Table, RightChild);
  --Table->NumberGenericTableElements;
  Table->WhichOrderedElement = 0;
  Table->OrderedPointer = 0LL;
  Table->FreeRoutine(Table, RightChild);
  return 1;
}
