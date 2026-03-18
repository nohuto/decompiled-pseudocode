/*
 * XREFs of RtlInsertElementGenericTableAvl @ 0x14006E6F0
 * Callers:
 *     VfAvlInsertReservedTreeNode @ 0x14006E620 (VfAvlInsertReservedTreeNode.c)
 *     PiSwIrpStartCreateWorker @ 0x14045FDC0 (PiSwIrpStartCreateWorker.c)
 *     PiSwBusRelationAdd @ 0x140460394 (PiSwBusRelationAdd.c)
 *     PiUpdateDriverDBCache @ 0x1404B6304 (PiUpdateDriverDBCache.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x1404B8088 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PiDqQueryAddObjectToResultSet @ 0x1404B8388 (PiDqQueryAddObjectToResultSet.c)
 *     PopCreatePowerRequestObject @ 0x1404C614C (PopCreatePowerRequestObject.c)
 *     PiDcInitUpdateProperties @ 0x14059DB24 (PiDcInitUpdateProperties.c)
 *     PiDmObjectManagerPopulate @ 0x1405BD940 (PiDmObjectManagerPopulate.c)
 *     IopSetFileObjectIosbRange @ 0x14068A5DC (IopSetFileObjectIosbRange.c)
 * Callees:
 *     FindNodeOrParent_0 @ 0x14004CB00 (FindNodeOrParent_0.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x14004CBC0 (RtlInsertElementGenericTableFullAvl.c)
 */

PVOID __stdcall RtlInsertElementGenericTableAvl(
        PRTL_AVL_TABLE Table,
        PVOID Buffer,
        CLONG BufferSize,
        PBOOLEAN NewElement)
{
  TABLE_SEARCH_RESULT SearchResult; // eax
  PVOID NodeOrParent[3]; // [rsp+30h] [rbp-18h] BYREF

  SearchResult = (unsigned int)FindNodeOrParent_0((__int64)Table, (__int64)Buffer, NodeOrParent);
  return RtlInsertElementGenericTableFullAvl(Table, Buffer, BufferSize, NewElement, NodeOrParent[0], SearchResult);
}
