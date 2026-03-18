/*
 * XREFs of RtlInsertElementGenericTableAvl @ 0x1400DFCC0
 * Callers:
 *     VfAvlInsertReservedTreeNode @ 0x1400F9AA4 (VfAvlInsertReservedTreeNode.c)
 *     PopAvlFindOrMakeStatsForAudio @ 0x140451A8C (PopAvlFindOrMakeStatsForAudio.c)
 *     PopCreatePowerRequestObject @ 0x1404E7A28 (PopCreatePowerRequestObject.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x1404E7B74 (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PiUpdateDriverDBCache @ 0x140544B48 (PiUpdateDriverDBCache.c)
 *     PiDqQueryAddObjectToResultSet @ 0x140590700 (PiDqQueryAddObjectToResultSet.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x140595710 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PiSwIrpStartCreateWorker @ 0x1405BB304 (PiSwIrpStartCreateWorker.c)
 *     PiSwBusRelationAdd @ 0x1405BB5CC (PiSwBusRelationAdd.c)
 *     PiDcInitUpdateProperties @ 0x1405C5CF0 (PiDcInitUpdateProperties.c)
 *     PiDmObjectManagerPopulate @ 0x1405CD534 (PiDmObjectManagerPopulate.c)
 *     IopSetFileObjectIosbRange @ 0x1406B622C (IopSetFileObjectIosbRange.c)
 * Callees:
 *     RtlInsertElementGenericTableFullAvl @ 0x1400DFD30 (RtlInsertElementGenericTableFullAvl.c)
 *     FindNodeOrParent @ 0x1400DFF6C (FindNodeOrParent.c)
 */

PVOID __stdcall RtlInsertElementGenericTableAvl(
        PRTL_AVL_TABLE Table,
        PVOID Buffer,
        CLONG BufferSize,
        PBOOLEAN NewElement)
{
  TABLE_SEARCH_RESULT SearchResult; // eax
  PVOID NodeOrParent[3]; // [rsp+30h] [rbp-18h] BYREF

  SearchResult = (unsigned int)FindNodeOrParent(Table, Buffer, NodeOrParent);
  return RtlInsertElementGenericTableFullAvl(Table, Buffer, BufferSize, NewElement, NodeOrParent[0], SearchResult);
}
