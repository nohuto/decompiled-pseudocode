/*
 * XREFs of CmpAllocateTransientPoolWithTag @ 0x14007EAA8
 * Callers:
 *     CmpSortedValueEnumStackEntryStart @ 0x14041CA38 (CmpSortedValueEnumStackEntryStart.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x14041CBDC (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 *     CmpAddToHiveFileList @ 0x1404CBF94 (CmpAddToHiveFileList.c)
 *     CmpStartKcbStack @ 0x1404FC4F8 (CmpStartKcbStack.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404FE030 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpConstructNameWithStatus @ 0x1405014C0 (CmpConstructNameWithStatus.c)
 *     CmpCreateKeyControlBlock @ 0x140502580 (CmpCreateKeyControlBlock.c)
 *     CmpGetNameControlBlock @ 0x140502E40 (CmpGetNameControlBlock.c)
 *     CmpConstructNameFromKeyNodes @ 0x1405039C0 (CmpConstructNameFromKeyNodes.c)
 *     CmQueryValueKey @ 0x1405063C0 (CmQueryValueKey.c)
 *     CmpParseKey @ 0x1405080E0 (CmpParseKey.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x1405C67A8 (CmpCreateGlobalKeyLockEntry.c)
 *     CmpCreateSiloKeyLockEntry @ 0x1405C6820 (CmpCreateSiloKeyLockEntry.c)
 *     CmpPromoteKey @ 0x140661A80 (CmpPromoteKey.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x1406659C0 (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpAllocateKeyControlBlock @ 0x1406664FC (CmpAllocateKeyControlBlock.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140668390 (CmpDoAccessCheckOnSubtree.c)
 *     CmpSnapshotKcbStackSecurity @ 0x14066894C (CmpSnapshotKcbStackSecurity.c)
 *     CmpReserveRollbackPacketSpace @ 0x14066BA68 (CmpReserveRollbackPacketSpace.c)
 *     CmpDoReadTxRBigLogRecord @ 0x14066BDCC (CmpDoReadTxRBigLogRecord.c)
 *     CmpStartKeyNodeStack @ 0x14066DD9C (CmpStartKeyNodeStack.c)
 *     CmpKeyEnumStackStartFromKeyNodeStack @ 0x140670878 (CmpKeyEnumStackStartFromKeyNodeStack.c)
 *     CmpGetValueForAudit @ 0x140671210 (CmpGetValueForAudit.c)
 *     CmpLightWeightCreateModificationData @ 0x140674640 (CmpLightWeightCreateModificationData.c)
 *     CmpLightWeightCreateSetValueData @ 0x14067470C (CmpLightWeightCreateSetValueData.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140674B74 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140674D18 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14067546C (CmpLightWeightPrepareSetValueKeyUoW.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall CmpAllocateTransientPoolWithTag(__int64 a1, SIZE_T a2, ULONG a3)
{
  return ExAllocatePoolWithTag(PagedPool, a2, a3);
}
