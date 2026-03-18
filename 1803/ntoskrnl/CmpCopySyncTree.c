/*
 * XREFs of CmpCopySyncTree @ 0x1406FD234
 * Callers:
 *     CmpReorganizeHive @ 0x140497D1C (CmpReorganizeHive.c)
 *     CmpSaveBootControlSet @ 0x1406EB510 (CmpSaveBootControlSet.c)
 *     CmpCloneHwProfile @ 0x1406FC0D0 (CmpCloneHwProfile.c)
 *     CmpPreserveSystemHiveData @ 0x1406FE2C0 (CmpPreserveSystemHiveData.c)
 *     CmRestoreKey @ 0x140701768 (CmRestoreKey.c)
 *     CmSaveKey @ 0x1407022E4 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x1407025D4 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x140702BD0 (CmpLoadHiveVolatile.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     CmpCopySyncTree2 @ 0x1406FD2D8 (CmpCopySyncTree2.c)
 */

char __fastcall CmpCopySyncTree(int a1, int a2, ULONG_PTR a3, int a4, int a5, int a6)
{
  _DWORD *PoolWithTag; // rax
  int v11; // edx
  int v12; // r8d
  void *v13; // rdi
  char v14; // bl

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x2800uLL, 0x20204D43u);
  v13 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[2] = 0;
    PoolWithTag[3] &= 0xFFFFFFF8;
    *((_BYTE *)PoolWithTag + 16) &= 0xFCu;
    *PoolWithTag = a2;
    PoolWithTag[1] = a4;
    v14 = CmpCopySyncTree2((int)PoolWithTag, v11, v12, a1, a3, a5, a6);
    ExFreePoolWithTag(v13, 0);
    LOBYTE(PoolWithTag) = v14;
  }
  return (char)PoolWithTag;
}
