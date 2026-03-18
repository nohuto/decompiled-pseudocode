/*
 * XREFs of HvpGetCellContextReinitialize @ 0x14008D150
 * Callers:
 *     CmpSortedValueEnumStackEntryStart @ 0x14041CA38 (CmpSortedValueEnumStackEntryStart.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x140448AD4 (CmpCheckAndFixSecurityCellsRefcount.c)
 *     CmpUpdateHiveRootCellFlags @ 0x1404568B4 (CmpUpdateHiveRootCellFlags.c)
 *     CmSetValueKey @ 0x14048F4F0 (CmSetValueKey.c)
 *     CmpFindNameInListWithStatus @ 0x1404905C4 (CmpFindNameInListWithStatus.c)
 *     CmpFindNameInListCellWithStatus @ 0x140490670 (CmpFindNameInListCellWithStatus.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x1404BF6E4 (CmpValidateHiveSecurityDescriptors.c)
 *     CmDeleteValueKey @ 0x1404CEB38 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x1404CF840 (CmDeleteKey.c)
 *     CmpCreateChild @ 0x1404D0388 (CmpCreateChild.c)
 *     HvpReleaseCellFlat @ 0x1404D3150 (HvpReleaseCellFlat.c)
 *     HvReallocateCell @ 0x1404D339C (HvReallocateCell.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1404D4394 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpQueryKeyDataFromNode @ 0x1404FEEE0 (CmpQueryKeyDataFromNode.c)
 *     CmpGetSymbolicLinkTarget @ 0x1404FFA30 (CmpGetSymbolicLinkTarget.c)
 *     CmpCreateKeyControlBlock @ 0x140502580 (CmpCreateKeyControlBlock.c)
 *     CmpConstructNameFromKeyNodes @ 0x1405039C0 (CmpConstructNameFromKeyNodes.c)
 *     CmpCheckLeaf @ 0x140503C50 (CmpCheckLeaf.c)
 *     CmpWalkOneLevel @ 0x140503FA0 (CmpWalkOneLevel.c)
 *     CmpCheckValueList @ 0x140504990 (CmpCheckValueList.c)
 *     CmpCheckKey @ 0x140505100 (CmpCheckKey.c)
 *     CmpCheckRegistry2 @ 0x140505E80 (CmpCheckRegistry2.c)
 *     CmQueryValueKey @ 0x1405063C0 (CmQueryValueKey.c)
 *     HvpReleaseCellPaged @ 0x140506AB0 (HvpReleaseCellPaged.c)
 *     HvIsCellAllocated @ 0x1405153D0 (HvIsCellAllocated.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     CmpVEExecuteOpenLogic @ 0x140538520 (CmpVEExecuteOpenLogic.c)
 *     CmpCommitAddKeyUoW @ 0x140571D00 (CmpCommitAddKeyUoW.c)
 *     CmpCreateHiveRootCell @ 0x1405D06F4 (CmpCreateHiveRootCell.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140661CD0 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x140661DD4 (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140662304 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmEnumerateValueFromLayeredKey @ 0x140662EF0 (CmEnumerateValueFromLayeredKey.c)
 *     CmpAddValueKeyTombstone @ 0x140664DD4 (CmpAddValueKeyTombstone.c)
 *     CmpEnumerateLayeredKey @ 0x140664FCC (CmpEnumerateLayeredKey.c)
 *     CmpBuildVirtualReplicationStack @ 0x140666DB0 (CmpBuildVirtualReplicationStack.c)
 *     CmpInitializeKeyNodeStack @ 0x14066DA4C (CmpInitializeKeyNodeStack.c)
 *     CmpStartKeyNodeStack @ 0x14066DD9C (CmpStartKeyNodeStack.c)
 *     CmpKeyEnumStackAdvanceInternal @ 0x1406702E8 (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpKeyEnumStackEntryInitialize @ 0x140670634 (CmpKeyEnumStackEntryInitialize.c)
 *     CmpMarkEntireIndexDirty @ 0x140670A2C (CmpMarkEntireIndexDirty.c)
 *     CmpGetValueForAudit @ 0x140671210 (CmpGetValueForAudit.c)
 *     CmpValueEnumStackAdvance @ 0x140671354 (CmpValueEnumStackAdvance.c)
 *     CmpCommitDeleteKeyUoW @ 0x140673690 (CmpCommitDeleteKeyUoW.c)
 *     CmpLightWeightDuplicateParentLists @ 0x14067483C (CmpLightWeightDuplicateParentLists.c)
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
