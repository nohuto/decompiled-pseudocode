/*
 * XREFs of ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x14001E8E4
 * Callers:
 *     ?StCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14001E834 (-StCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?StEmptyStore@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x14024C840 (-StEmptyStore@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 * Callees:
 *     ?BTreeNodeFree@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140004D98 (-BTreeNodeFree@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGI.c)
 *     ?NpCleanup@NP_CONTEXT@@SAXPEAU1@K@Z @ 0x14001EB90 (-NpCleanup@NP_CONTEXT@@SAXPEAU1@K@Z.c)
 *     SmHpChunkHeapCleanup @ 0x14001EBB8 (SmHpChunkHeapCleanup.c)
 *     SmHpChunkHeapProtect @ 0x14001EC34 (SmHpChunkHeapProtect.c)
 *     ?StDmInvalidateCurrentRegions@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x14001F120 (-StDmInvalidateCurrentRegions@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmpUpdateRegionState@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z @ 0x140058840 (-StDmpUpdateRegionState@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140058DF0 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140059870 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     SmHpChunkFree @ 0x14005C1EC (SmHpChunkFree.c)
 *     ?BTreeSearchResultCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x14005C27C (-BTreeSearchResultCleanup@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     RtlNumberOfSetBits @ 0x14006E280 (RtlNumberOfSetBits.c)
 *     SmHpChunkHeapInitialize @ 0x14012EFA4 (SmHpChunkHeapInitialize.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x14024BC90 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall ST_STORE<SM_TRAITS>::StDmCleanup(__int64 a1, unsigned int a2)
{
  void *v2; // rbx
  void *v5; // rcx
  PVOID *v6; // r15
  char **v7; // rbx
  __int64 v8; // rbx
  __int16 v9; // r8
  __int64 v10; // r14
  unsigned int *v11; // rbx
  __int64 v12; // rbp
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  void *v18; // rcx
  __int64 v19; // rax

  v2 = (void *)(a1 + 192);
  SmHpChunkHeapProtect(a1 + 192, 1LL);
  if ( *(_QWORD *)(a1 + 760) )
  {
    SmHpChunkFree(v2);
    if ( a2 )
    {
      *(_QWORD *)(a1 + 760) = 0LL;
      *(_DWORD *)(a1 + 768) = 0;
    }
  }
  SmHpChunkHeapCleanup(v2);
  if ( a2 )
    SmHpChunkHeapInitialize(v2);
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
    a1,
    a1 + 24);
  if ( *(_DWORD *)(a1 + 48) != -1 )
  {
    v5 = *(void **)(a1 + 24);
    if ( v5 )
    {
      if ( !a2 )
        ExFreePoolWithTag(v5, 0);
    }
  }
  if ( *(_QWORD *)a1 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeNodeFree(
      a1,
      *(char **)a1);
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultCleanup(
    a1 + 64,
    a1 + 88,
    a2);
  if ( *(_QWORD *)(a1 + 64) )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeNodeFree(
      a1 + 64,
      *(char **)(a1 + 64));
  v6 = (PVOID *)(a1 + 152);
  v7 = (char **)(a1 + 128);
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
    a1 + 128,
    a1 + 152);
  if ( *(_DWORD *)(a1 + 176) != -1 && *v6 && !a2 )
    ExFreePoolWithTag(*v6, 0);
  if ( *v7 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeNodeFree(
      a1 + 128,
      *v7);
  if ( a2 )
  {
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 64) = 0LL;
    *(_QWORD *)(a1 + 72) = 0LL;
    *(_QWORD *)(a1 + 80) = 0LL;
    *v7 = 0LL;
    *(_QWORD *)(a1 + 136) = 0LL;
    *(_QWORD *)(a1 + 144) = 0LL;
  }
  NP_CONTEXT::NpCleanup((struct NP_CONTEXT *)(a1 + 1360), a2);
  NP_CONTEXT::NpCleanup((struct NP_CONTEXT *)(a1 + 1496), a2);
  NP_CONTEXT::NpCleanup((struct NP_CONTEXT *)(a1 + 1632), a2);
  if ( a2 )
  {
    *(_QWORD *)(a1 + 16) = a1 + 1360;
    *(_QWORD *)(a1 + 80) = a1 + 1496;
    *(_QWORD *)(a1 + 144) = a1 + 1632;
  }
  if ( *(_QWORD *)(a1 + 1016) )
  {
    ST_STORE<SM_TRAITS>::StDmInvalidateCurrentRegions(a1);
    LODWORD(v8) = -1;
    while ( 1 )
    {
      v8 = (unsigned int)(v8 + 1);
      if ( (_DWORD)v8 == *(_DWORD *)(a1 + 788) )
        break;
      v9 = *(_WORD *)(*(_QWORD *)(a1 + 1016) + 2 * v8);
      if ( (v9 & 0x1FFF) != 0 )
        ST_STORE<SM_TRAITS>::StDmpUpdateRegionState(a1, (unsigned int)v8, -(v9 & 0x1FFF), 0LL);
    }
    if ( (*(_DWORD *)(a1 + 776) & 0x40000) != 0
      && !a2
      && *(_DWORD *)(a1 + 840) != RtlNumberOfSetBits((PRTL_BITMAP)(a1 + 840)) )
    {
      ST_STORE<SM_TRAITS>::StDmLazyRegionsWorker(a1, 1LL, a1 + 864);
    }
    v10 = *(_QWORD *)(a1 + 1016);
    v11 = (unsigned int *)(a1 + 1088);
    v12 = 6LL;
    while ( a2 )
    {
      v19 = *v11;
      if ( (_DWORD)v19 == -1 )
        goto LABEL_31;
      if ( *(_WORD *)(v10 + 2 * v19) < 0x4000u )
        break;
LABEL_33:
      v11 += 6;
      if ( !--v12 )
        goto LABEL_34;
    }
    if ( *v11 != -1 )
    {
      ExFreePoolWithTag(*((PVOID *)v11 + 1), 0);
      ExFreePoolWithTag(*((PVOID *)v11 + 2), 0);
    }
LABEL_31:
    if ( a2 )
    {
      *(_QWORD *)v11 = 0LL;
      *((_QWORD *)v11 + 1) = 0LL;
      *((_QWORD *)v11 + 2) = 0LL;
      *v11 = -1;
    }
    goto LABEL_33;
  }
LABEL_34:
  if ( !a2 )
  {
    v13 = *(void **)(a1 + 1040);
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
    v14 = *(void **)(a1 + 848);
    if ( v14 )
      ExFreePoolWithTag(v14, 0);
    v15 = *(void **)(a1 + 1064);
    if ( v15 )
      ExFreePoolWithTag(v15, 0);
    v16 = *(void **)(a1 + 1776);
    if ( v16 )
      ExFreePoolWithTag(v16, 0);
    v17 = *(void **)(a1 + 1784);
    if ( v17 )
      ExFreePoolWithTag(v17, 0);
    v18 = *(void **)(a1 + 1792);
    if ( v18 )
      ExFreePoolWithTag(v18, 0);
  }
}
