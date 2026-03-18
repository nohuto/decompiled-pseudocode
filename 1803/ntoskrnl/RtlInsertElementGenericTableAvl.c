/*
 * XREFs of RtlInsertElementGenericTableAvl @ 0x14006D500
 * Callers:
 *     VfAvlInsertReservedTreeNode @ 0x140161558 (VfAvlInsertReservedTreeNode.c)
 *     PopCreatePowerRequestObject @ 0x140524250 (PopCreatePowerRequestObject.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x140524BE4 (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PiDqQueryAddObjectToResultSet @ 0x14057CA24 (PiDqQueryAddObjectToResultSet.c)
 *     PiSwIrpStartCreateWorker @ 0x1405C6A7C (PiSwIrpStartCreateWorker.c)
 *     PiSwBusRelationAdd @ 0x1405C6D44 (PiSwBusRelationAdd.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x1405DC3A8 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PopAvlFindOrMakeStatsForAudio @ 0x1405E90A0 (PopAvlFindOrMakeStatsForAudio.c)
 *     PiUpdateDriverDBCache @ 0x1405FBFC4 (PiUpdateDriverDBCache.c)
 *     PiDcInitUpdateProperties @ 0x140622D70 (PiDcInitUpdateProperties.c)
 *     PiDmObjectManagerPopulate @ 0x140631170 (PiDmObjectManagerPopulate.c)
 *     IopSetFileObjectIosbRange @ 0x14071AF1C (IopSetFileObjectIosbRange.c)
 * Callees:
 *     RtlInsertElementGenericTableFullAvl @ 0x14006D570 (RtlInsertElementGenericTableFullAvl.c)
 *     FindNodeOrParent @ 0x14006D7AC (FindNodeOrParent.c)
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
