/*
 * XREFs of RtlDeleteElementGenericTableAvl @ 0x1400DFA50
 * Callers:
 *     VfAvlDeleteTreeNode @ 0x1400F91F8 (VfAvlDeleteTreeNode.c)
 *     PopAvlFindOrMakeStatsForAudio @ 0x140451A8C (PopAvlFindOrMakeStatsForAudio.c)
 *     PopPowerRequestDeleteEntryById @ 0x1404E6F04 (PopPowerRequestDeleteEntryById.c)
 *     PopCreatePowerRequestObject @ 0x1404E7A28 (PopCreatePowerRequestObject.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x1404E7B74 (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x14051804C (PiDmRemoveCacheReferenceForObject.c)
 *     PiPnpRtlObjectEventWorker @ 0x140528A70 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlEndOperation @ 0x140528D6C (PiPnpRtlEndOperation.c)
 *     PiUpdateDriverDBCache @ 0x140544B48 (PiUpdateDriverDBCache.c)
 *     PnpCleanupDeviceRegistryValues @ 0x140588AC8 (PnpCleanupDeviceRegistryValues.c)
 *     PopAvlDeleteStatsForPowerRequest @ 0x14058D1BC (PopAvlDeleteStatsForPowerRequest.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x14059EF20 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiSwIrpStartCreateWorker @ 0x1405BB304 (PiSwIrpStartCreateWorker.c)
 *     PiDmObjectManagerPopulate @ 0x1405CD534 (PiDmObjectManagerPopulate.c)
 *     IopCleanupFileObjectIosbRange @ 0x1406B4B00 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x1406B622C (IopSetFileObjectIosbRange.c)
 *     PiDmListRemoveObjectWorker @ 0x1406C2FA8 (PiDmListRemoveObjectWorker.c)
 *     PiSwBusRelationRemove @ 0x1406CD984 (PiSwBusRelationRemove.c)
 *     PiSwCloseDevice @ 0x1406CDA04 (PiSwCloseDevice.c)
 *     PiSwProcessRemove @ 0x1406CE2EC (PiSwProcessRemove.c)
 * Callees:
 *     DeleteNodeFromTree @ 0x1400DFB00 (DeleteNodeFromTree.c)
 *     RealPredecessor @ 0x14012FCC0 (RealPredecessor.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
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
    if ( v5 == GenericLessThan )
    {
      RightChild = RightChild->LeftChild;
      goto LABEL_7;
    }
    if ( v5 != GenericGreaterThan )
      break;
    RightChild = RightChild->RightChild;
LABEL_7:
    if ( !RightChild )
      return 0;
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
