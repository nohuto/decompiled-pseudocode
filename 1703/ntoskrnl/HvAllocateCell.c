/*
 * XREFs of HvAllocateCell @ 0x14048CDA0
 * Callers:
 *     CmpGetSecurityDescriptorNode @ 0x14006ECBC (CmpGetSecurityDescriptorNode.c)
 *     CmpCreateTombstone @ 0x1401E0B20 (CmpCreateTombstone.c)
 *     CmpSetValueDataNew @ 0x140444C1C (CmpSetValueDataNew.c)
 *     CmpSetValueDataExisting @ 0x140458748 (CmpSetValueDataExisting.c)
 *     HvDuplicateCell @ 0x14045B9CC (HvDuplicateCell.c)
 *     CmpAddValueKeyNew @ 0x1404918D4 (CmpAddValueKeyNew.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1404BF12C (CmpSetSecurityDescriptorInfo.c)
 *     CmpCreateChild @ 0x1404D0388 (CmpCreateChild.c)
 *     CmpSetValueKeyExisting @ 0x1404D19D0 (CmpSetValueKeyExisting.c)
 *     CmpAddSubKeyEx @ 0x1404D2220 (CmpAddSubKeyEx.c)
 *     CmpAddValueToListEx @ 0x1404D3280 (CmpAddValueToListEx.c)
 *     CmpCopyCell @ 0x14057226C (CmpCopyCell.c)
 *     CmpCreateHiveRootCell @ 0x1405D06F4 (CmpCreateHiveRootCell.c)
 *     CmRenameKey @ 0x140663778 (CmRenameKey.c)
 *     CmpAddValueKeyTombstone @ 0x140664DD4 (CmpAddValueKeyTombstone.c)
 *     CmpCreateEmptyKey @ 0x140666F54 (CmpCreateEmptyKey.c)
 *     CmpSplitLeaf @ 0x140670E58 (CmpSplitLeaf.c)
 *     CmpCommitRenameKeyUoW @ 0x140673838 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140674910 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140674EFC (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpCreateRootNode @ 0x140808720 (CmpCreateRootNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvAllocateCell(ULONG_PTR a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // eax
  unsigned int v6; // edx
  int v7; // r10d

  v5 = 0x4000;
  v6 = (a2 + 11) & 0xFFFFFFF8;
  v7 = 0;
  if ( v6 > 0x4000 )
  {
    do
    {
      v5 *= 2;
      ++v7;
    }
    while ( v6 > v5 );
    if ( v7 )
      v6 = v5;
  }
  if ( v6 > 0x100000 )
    return 0xFFFFFFFFLL;
  else
    return HvpDoAllocateCell(a1, a5);
}
