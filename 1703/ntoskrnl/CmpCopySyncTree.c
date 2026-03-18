/*
 * XREFs of CmpCopySyncTree @ 0x14058D7BC
 * Callers:
 *     CmpReorganizeHive @ 0x140439CAC (CmpReorganizeHive.c)
 *     CmpSaveBootControlSet @ 0x14058D508 (CmpSaveBootControlSet.c)
 *     CmpCloneHwProfile @ 0x14066E3A0 (CmpCloneHwProfile.c)
 *     CmpPreserveSystemHiveData @ 0x14066F58C (CmpPreserveSystemHiveData.c)
 *     CmRestoreKey @ 0x140671810 (CmRestoreKey.c)
 *     CmSaveKey @ 0x140672300 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x1406725A8 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x140672BD8 (CmpLoadHiveVolatile.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpCopySyncTree2 @ 0x14058D990 (CmpCopySyncTree2.c)
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
