/*
 * XREFs of CmpAllocateTransientPoolWithTag @ 0x140016F60
 * Callers:
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14044C0DC (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightCreateSetValueData @ 0x14044C4B0 (CmpLightWeightCreateSetValueData.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14044C6E4 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpConstructNameFromKeyNodes @ 0x14047F860 (CmpConstructNameFromKeyNodes.c)
 *     CmpGetNameControlBlock @ 0x140480E00 (CmpGetNameControlBlock.c)
 *     CmpAllocateKeyControlBlock @ 0x140481170 (CmpAllocateKeyControlBlock.c)
 *     CmpStartKcbStack @ 0x140481B10 (CmpStartKcbStack.c)
 *     CmpParseKey @ 0x1404A9210 (CmpParseKey.c)
 *     CmQueryValueKey @ 0x1404AB970 (CmQueryValueKey.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     CmpAddToHiveFileList @ 0x14059A274 (CmpAddToHiveFileList.c)
 *     CmpSaveBootControlSet @ 0x1405A4B40 (CmpSaveBootControlSet.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x1405D9404 (CmpCreateGlobalKeyLockEntry.c)
 *     CmpCreateSiloKeyLockEntry @ 0x1405D947C (CmpCreateSiloKeyLockEntry.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x1405E5920 (CmpConstructNameFromKcbNameBlocks.c)
 *     CmAllocateExtraParameter @ 0x14068A998 (CmAllocateExtraParameter.c)
 *     CmpPromoteKey @ 0x14068AD7C (CmpPromoteKey.c)
 *     CmpReadBuildLab @ 0x14068C290 (CmpReadBuildLab.c)
 *     CmpDoAccessCheckOnSubtree @ 0x1406933CC (CmpDoAccessCheckOnSubtree.c)
 *     CmpSnapshotKcbStackSecurity @ 0x140693984 (CmpSnapshotKcbStackSecurity.c)
 *     CmpReserveRollbackPacketSpace @ 0x1406960D4 (CmpReserveRollbackPacketSpace.c)
 *     CmpDoReadTxRBigLogRecord @ 0x140696438 (CmpDoReadTxRBigLogRecord.c)
 *     CmpStartKeyNodeStack @ 0x140698294 (CmpStartKeyNodeStack.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x14069AB9C (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpKeyEnumStackStartFromKeyNodeStack @ 0x14069B2EC (CmpKeyEnumStackStartFromKeyNodeStack.c)
 *     CmpGetValueForAudit @ 0x14069BD0C (CmpGetValueForAudit.c)
 *     CmpSortedValueEnumStackEntryStart @ 0x14069C048 (CmpSortedValueEnumStackEntryStart.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x14069C1C0 (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 *     CmpLightWeightCreateModificationData @ 0x14069F310 (CmpLightWeightCreateModificationData.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x14069F714 (CmpLightWeightPrepareDeleteKeyUoW.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall CmpAllocateTransientPoolWithTag(__int64 a1, SIZE_T a2, ULONG a3)
{
  return ExAllocatePoolWithTag(PagedPool, a2, a3);
}
