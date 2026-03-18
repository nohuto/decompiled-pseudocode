/*
 * XREFs of CmpFindSubKeyByNumber @ 0x1404825F0
 * Callers:
 *     CmDeleteLayeredKey @ 0x1401E47C0 (CmDeleteLayeredKey.c)
 *     CmpClearKeyAccessBits @ 0x14045205C (CmpClearKeyAccessBits.c)
 *     CmpFindSubKeyByNumberEx @ 0x1404824B0 (CmpFindSubKeyByNumberEx.c)
 *     CmpSyncSubKeysAfterDelete @ 0x1405A5D50 (CmpSyncSubKeysAfterDelete.c)
 *     CmpCopySyncTree2 @ 0x1405A5E80 (CmpCopySyncTree2.c)
 *     CmpDeleteTree @ 0x1405A6A90 (CmpDeleteTree.c)
 *     CmpEnumerateLayeredKey @ 0x14068E764 (CmpEnumerateLayeredKey.c)
 *     CmpDoAccessCheckOnSubtree @ 0x1406933CC (CmpDoAccessCheckOnSubtree.c)
 *     CmpPreserveSystemHiveData @ 0x140699C54 (CmpPreserveSystemHiveData.c)
 *     CmpMarkAllChildrenDirty @ 0x14069B498 (CmpMarkAllChildrenDirty.c)
 *     CmpUpdateParentForEachSon @ 0x14069BC20 (CmpUpdateParentForEachSon.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140835FC0 (CmSelectQualifiedInstallLanguage.c)
 *     CmpFindDrivers @ 0x140836F04 (CmpFindDrivers.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CmpDoFindSubKeyByNumber @ 0x1404826B0 (CmpDoFindSubKeyByNumber.c)
 */

__int64 __fastcall CmpFindSubKeyByNumber(__int64 a1, _DWORD *a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v5; // eax
  unsigned int v6; // esi
  __int64 v8; // rdx
  __int64 v9; // rax
  int v11; // [rsp+38h] [rbp+10h] BYREF
  int v12; // [rsp+3Ch] [rbp+14h]

  v11 = -1;
  v12 = 0;
  v5 = a2[5];
  v6 = a3;
  *a4 = -1;
  if ( a3 >= v5 )
  {
    if ( *(_DWORD *)(a1 + 192) <= 1u )
      return 0LL;
    v6 = a3 - v5;
    if ( a3 - v5 >= a2[6] )
      return 0LL;
    v8 = (unsigned int)a2[8];
  }
  else
  {
    v8 = (unsigned int)a2[7];
  }
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(a1 + 8))(a1, v8, &v11);
  if ( v9 )
  {
    *a4 = CmpDoFindSubKeyByNumber(a1, v9, v6);
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v11);
    return 0LL;
  }
  return 3221225626LL;
}
