/*
 * XREFs of CmpFindSubKeyByNumber @ 0x14043B918
 * Callers:
 *     CmDeleteLayeredKey @ 0x1401E0660 (CmDeleteLayeredKey.c)
 *     CmpClearKeyAccessBits @ 0x14043B7E0 (CmpClearKeyAccessBits.c)
 *     CmpSyncSubKeysAfterDelete @ 0x14058D860 (CmpSyncSubKeysAfterDelete.c)
 *     CmpCopySyncTree2 @ 0x14058D990 (CmpCopySyncTree2.c)
 *     CmpDeleteTree @ 0x14058E778 (CmpDeleteTree.c)
 *     CmpEnumerateLayeredKey @ 0x140664FCC (CmpEnumerateLayeredKey.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140668390 (CmpDoAccessCheckOnSubtree.c)
 *     CmpPreserveSystemHiveData @ 0x14066F58C (CmpPreserveSystemHiveData.c)
 *     CmpMarkAllChildrenDirty @ 0x140670984 (CmpMarkAllChildrenDirty.c)
 *     CmpUpdateParentForEachSon @ 0x140671124 (CmpUpdateParentForEachSon.c)
 *     CmSelectQualifiedInstallLanguage @ 0x14080DD28 (CmSelectQualifiedInstallLanguage.c)
 *     CmpFindDrivers @ 0x14080EC68 (CmpFindDrivers.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CmpDoFindSubKeyByNumber @ 0x1404FEDD0 (CmpDoFindSubKeyByNumber.c)
 */

__int64 __fastcall CmpFindSubKeyByNumber(__int64 a1, _DWORD *a2, unsigned int a3, _DWORD *a4)
{
  __int64 v5; // rsi
  unsigned int v7; // ebx
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // ebx
  int v13; // [rsp+38h] [rbp+10h] BYREF
  int v14; // [rsp+3Ch] [rbp+14h]

  v5 = 0LL;
  v13 = -1;
  v7 = a3;
  *a4 = -1;
  v14 = 0;
  v8 = a2[5];
  if ( a3 < v8 )
  {
    v9 = (unsigned int)a2[7];
LABEL_3:
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(a1 + 8))(a1, v9, &v13);
    v5 = v10;
    if ( !v10 )
      return (unsigned int)-1073741670;
    *a4 = CmpDoFindSubKeyByNumber(a1, v10, v7);
    goto LABEL_5;
  }
  if ( *(_DWORD *)(a1 + 192) > 1u )
  {
    v7 = a3 - v8;
    if ( a3 - v8 >= a2[6] )
      return 0;
    v9 = (unsigned int)a2[8];
    goto LABEL_3;
  }
LABEL_5:
  v11 = 0;
  if ( v5 )
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v13);
  return v11;
}
