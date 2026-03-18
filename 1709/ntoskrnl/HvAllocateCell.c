/*
 * XREFs of HvAllocateCell @ 0x140479BF4
 * Callers:
 *     CmpGetSecurityDescriptorNode @ 0x140016054 (CmpGetSecurityDescriptorNode.c)
 *     CmpCreateTombstone @ 0x1401E4C50 (CmpCreateTombstone.c)
 *     CmpCreateHiveRootCell @ 0x14046F4A4 (CmpCreateHiveRootCell.c)
 *     CmpSetValueKeyExisting @ 0x1404737F8 (CmpSetValueKeyExisting.c)
 *     CmpAddSubKeyEx @ 0x140473D00 (CmpAddSubKeyEx.c)
 *     CmpCreateChild @ 0x140475B90 (CmpCreateChild.c)
 *     CmpCopyCell @ 0x1404767FC (CmpCopyCell.c)
 *     CmpAddValueToListEx @ 0x140476AC8 (CmpAddValueToListEx.c)
 *     CmpSetSecurityDescriptorInfo @ 0x140476DE8 (CmpSetSecurityDescriptorInfo.c)
 *     CmpSetValueDataNew @ 0x1404776BC (CmpSetValueDataNew.c)
 *     CmpAddValueKeyNew @ 0x140477BF0 (CmpAddValueKeyNew.c)
 *     CmpSetValueDataExisting @ 0x1405988A4 (CmpSetValueDataExisting.c)
 *     HvDuplicateCell @ 0x1405999E4 (HvDuplicateCell.c)
 *     CmRenameKey @ 0x14068CE58 (CmRenameKey.c)
 *     CmpAddValueKeyTombstone @ 0x14068E56C (CmpAddValueKeyTombstone.c)
 *     CmpCreateEmptyKey @ 0x140691474 (CmpCreateEmptyKey.c)
 *     CmpSplitLeaf @ 0x14069B95C (CmpSplitLeaf.c)
 *     CmpCommitRenameKeyUoW @ 0x14069E7D0 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x14069F4B0 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14069F8B8 (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpCreateRootNode @ 0x14083CC6C (CmpCreateRootNode.c)
 * Callees:
 *     HvpDoAllocateCell @ 0x140479EE0 (HvpDoAllocateCell.c)
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
