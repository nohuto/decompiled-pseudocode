/*
 * XREFs of HvAllocateCell @ 0x140515B84
 * Callers:
 *     CmpGetSecurityDescriptorNode @ 0x140007750 (CmpGetSecurityDescriptorNode.c)
 *     CmpCreateTombstone @ 0x140222DF4 (CmpCreateTombstone.c)
 *     CmpSetValueKeyExisting @ 0x1404A0DA0 (CmpSetValueKeyExisting.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1404E1604 (CmpSetSecurityDescriptorInfo.c)
 *     CmpAddSubKeyEx @ 0x140513418 (CmpAddSubKeyEx.c)
 *     CmpCreateChild @ 0x140514170 (CmpCreateChild.c)
 *     CmpAddValueToListEx @ 0x140514E5C (CmpAddValueToListEx.c)
 *     CmpSetValueDataNew @ 0x1405152B4 (CmpSetValueDataNew.c)
 *     CmpAddValueKeyNew @ 0x1405156B4 (CmpAddValueKeyNew.c)
 *     CmpCopyCell @ 0x14054F92C (CmpCopyCell.c)
 *     HvDuplicateCell @ 0x14057F7EC (HvDuplicateCell.c)
 *     CmpSetValueDataExisting @ 0x140582280 (CmpSetValueDataExisting.c)
 *     CmpCreateHiveRootCell @ 0x14064F024 (CmpCreateHiveRootCell.c)
 *     CmRenameKey @ 0x1406F1120 (CmRenameKey.c)
 *     CmpAddValueKeyTombstone @ 0x1406F2834 (CmpAddValueKeyTombstone.c)
 *     CmpCreateEmptyKey @ 0x1406F4C7C (CmpCreateEmptyKey.c)
 *     CmpSplitLeaf @ 0x140700588 (CmpSplitLeaf.c)
 *     CmpCommitRenameKeyUoW @ 0x140703A10 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140704968 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140704F5C (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpCreateRootNode @ 0x1408B1290 (CmpCreateRootNode.c)
 * Callees:
 *     HvpDoAllocateCell @ 0x140515D74 (HvpDoAllocateCell.c)
 */

__int64 __fastcall HvAllocateCell(ULONG_PTR a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // eax
  unsigned int v6; // edx
  unsigned int v7; // eax
  int v8; // r10d

  v5 = a2 + 11;
  v6 = 0x4000;
  v7 = v5 & 0xFFFFFFF8;
  v8 = 0;
  while ( v7 > v6 )
  {
    v6 *= 2;
    ++v8;
  }
  if ( !v8 )
    v6 = v7;
  if ( v6 > 0x100000 )
    return 0xFFFFFFFFLL;
  else
    return HvpDoAllocateCell(a1, a5);
}
