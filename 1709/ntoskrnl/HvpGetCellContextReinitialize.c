/*
 * XREFs of HvpGetCellContextReinitialize @ 0x1400812C8
 * Callers:
 *     CmpCreateHiveRootCell @ 0x14046F4A4 (CmpCreateHiveRootCell.c)
 *     CmDeleteKey @ 0x140472480 (CmDeleteKey.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x1404746C0 (CmpValidateHiveSecurityDescriptors.c)
 *     CmDeleteValueKey @ 0x140474FC8 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x140475B90 (CmpCreateChild.c)
 *     HvpReleaseCellFlat @ 0x1404768F0 (HvpReleaseCellFlat.c)
 *     HvReallocateCell @ 0x140476BE4 (HvReallocateCell.c)
 *     CmpFindNameInListWithStatus @ 0x140479488 (CmpFindNameInListWithStatus.c)
 *     CmpFindNameInListCellWithStatus @ 0x140479530 (CmpFindNameInListCellWithStatus.c)
 *     CmSetValueKey @ 0x14047B690 (CmSetValueKey.c)
 *     HvIsCellAllocated @ 0x14047D4B0 (HvIsCellAllocated.c)
 *     CmpGetSymbolicLinkTarget @ 0x14047EAB0 (CmpGetSymbolicLinkTarget.c)
 *     CmpConstructNameFromKeyNodes @ 0x14047F860 (CmpConstructNameFromKeyNodes.c)
 *     CmpCheckLeaf @ 0x14047FD10 (CmpCheckLeaf.c)
 *     CmpWalkOneLevel @ 0x140480060 (CmpWalkOneLevel.c)
 *     CmpCreateKeyControlBlock @ 0x140480870 (CmpCreateKeyControlBlock.c)
 *     CmEnumerateKey @ 0x140482020 (CmEnumerateKey.c)
 *     CmpQueryKeyDataFromNode @ 0x140482830 (CmpQueryKeyDataFromNode.c)
 *     CmpCheckValueList @ 0x1404A9D70 (CmpCheckValueList.c)
 *     CmpCheckKey @ 0x1404AA8A0 (CmpCheckKey.c)
 *     CmpCheckRegistry2 @ 0x1404AB5E0 (CmpCheckRegistry2.c)
 *     CmQueryValueKey @ 0x1404AB970 (CmQueryValueKey.c)
 *     HvpReleaseCellPaged @ 0x1404AC0E0 (HvpReleaseCellPaged.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     CmpVEExecuteOpenLogic @ 0x1404B85E0 (CmpVEExecuteOpenLogic.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x1405877FC (CmpCheckAndFixSecurityCellsRefcount.c)
 *     CmpUpdateHiveRootCellFlags @ 0x140595330 (CmpUpdateHiveRootCellFlags.c)
 *     CmpCommitAddKeyUoW @ 0x1405A590C (CmpCommitAddKeyUoW.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x14068AFCC (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x14068B0D4 (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x14068B750 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmEnumerateValueFromLayeredKey @ 0x14068C5D0 (CmEnumerateValueFromLayeredKey.c)
 *     CmSetLastWriteTimeKey @ 0x14068E12C (CmSetLastWriteTimeKey.c)
 *     CmpAddValueKeyTombstone @ 0x14068E56C (CmpAddValueKeyTombstone.c)
 *     CmpEnumerateLayeredKey @ 0x14068E764 (CmpEnumerateLayeredKey.c)
 *     CmpBuildVirtualReplicationStack @ 0x1406911F8 (CmpBuildVirtualReplicationStack.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x140692878 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpInitializeKeyNodeStack @ 0x140697F6C (CmpInitializeKeyNodeStack.c)
 *     CmpStartKeyNodeStack @ 0x140698294 (CmpStartKeyNodeStack.c)
 *     CmpKeyEnumStackAdvanceInternal @ 0x14069A9BC (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpKeyEnumStackEntryInitialize @ 0x14069AEC8 (CmpKeyEnumStackEntryInitialize.c)
 *     CmpMarkEntireIndexDirty @ 0x14069B540 (CmpMarkEntireIndexDirty.c)
 *     CmpGetValueForAudit @ 0x14069BD0C (CmpGetValueForAudit.c)
 *     CmpSortedValueEnumStackEntryStart @ 0x14069C048 (CmpSortedValueEnumStackEntryStart.c)
 *     CmpValueEnumStackAdvance @ 0x14069C39C (CmpValueEnumStackAdvance.c)
 *     CmpCommitDeleteKeyUoW @ 0x14069E61C (CmpCommitDeleteKeyUoW.c)
 *     CmpLightWeightDuplicateParentLists @ 0x14069F3DC (CmpLightWeightDuplicateParentLists.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpGetCellContextReinitialize(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)a1 = -1;
  *(_WORD *)(a1 + 4) = 0;
  return result;
}
