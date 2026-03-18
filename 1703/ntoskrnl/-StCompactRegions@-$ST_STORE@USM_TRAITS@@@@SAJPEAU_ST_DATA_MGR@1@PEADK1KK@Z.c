/*
 * XREFs of ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x14005AB00
 * Callers:
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x14001F170 (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDmReuseCurrentRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_CURRENT_REGION@1@@Z @ 0x14003ADB4 (-StDmReuseCurrentRegion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_CURRENT_REGION@1@.c)
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x14013958C (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14024A718 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ?StDmpUpdateRegionState@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z @ 0x140058840 (-StDmpUpdateRegionState@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z.c)
 *     ?BTreeInsert@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAUSEARCH_RESULT@1@@Z @ 0x140058E84 (-BTreeInsert@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14005919C (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14005939C (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x140059904 (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x14005B098 (-BTreeIteratorCleanup@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?BTreeChangeKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAKPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x14005B108 (-BTreeChangeKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x14005B704 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     ?BTreeSearchResultCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x14005C27C (-BTreeSearchResultCleanup@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14005C2C0 (-BTreeIteratorFromSearchResult@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_C.c)
 *     ?BTreeSearchResultInit@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAUSEARCH_RESULT@1@K@Z @ 0x14012F0F4 (-BTreeSearchResultInit@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@.c)
 *     ?BTreeDelete@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14013AB28 (-BTreeDelete@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x140248E10 (-BTreeFindLeafSibling@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactRegions(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        int a6)
{
  __int64 v8; // rcx
  _WORD *v9; // rax
  int v10; // r13d
  _QWORD *v11; // rsi
  int v12; // edi
  unsigned __int64 v13; // r15
  unsigned int *v14; // r12
  __int64 v15; // rax
  unsigned int *LeafSibling; // rax
  unsigned int v17; // r9d
  int v18; // r11d
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  int *v23; // rdi
  int v24; // r11d
  int v25; // r8d
  int v26; // edx
  unsigned int v27; // r9d
  unsigned int v28; // r8d
  __int64 v29; // rdx
  int v30; // eax
  int v31; // edx
  __int64 v32; // rdi
  int *v33; // rdi
  int v34; // eax
  unsigned int v35; // edi
  int v36; // eax
  __int64 v37; // r8
  int v38; // eax
  __int64 v39; // rax
  __int64 v41; // r8
  int v42; // [rsp+20h] [rbp-E0h] BYREF
  int v43; // [rsp+24h] [rbp-DCh]
  unsigned int v44; // [rsp+28h] [rbp-D8h]
  unsigned int v45; // [rsp+2Ch] [rbp-D4h]
  __int128 v46; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v47; // [rsp+40h] [rbp-C0h]
  unsigned int v48; // [rsp+44h] [rbp-BCh]
  __int64 v49; // [rsp+48h] [rbp-B8h]
  int *v50; // [rsp+50h] [rbp-B0h]
  _WORD *v51; // [rsp+58h] [rbp-A8h]
  __int64 v52; // [rsp+60h] [rbp-A0h]
  _WORD *v53; // [rsp+68h] [rbp-98h]
  _QWORD v54[3]; // [rsp+70h] [rbp-90h] BYREF
  int v55; // [rsp+88h] [rbp-78h]
  int v56; // [rsp+8Ch] [rbp-74h]
  char v57; // [rsp+98h] [rbp-68h] BYREF

  v43 = 0;
  v8 = *(_QWORD *)(a1 + 1016);
  v52 = a2;
  v46 = 0uLL;
  v49 = a4;
  v9 = (_WORD *)(v8 + 2LL * a5);
  v47 = a3;
  v44 = a5;
  v53 = (_WORD *)(v8 + 2LL * a3);
  v51 = v9;
  if ( v53 == v9 )
    v10 = 0;
  else
    v10 = *v9 & 0x1FFF;
  ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1);
  v11 = (_QWORD *)(a1 + 88);
  if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (__int64 *)(a1 + 64),
      a1 + 88);
  *(_DWORD *)(a1 + 120) &= ~1u;
  **(_DWORD **)(a1 + 760) = a3 << *(_DWORD *)(a1 + 812);
  v12 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
          (_DWORD *)(a1 + 64),
          *(_DWORD *)(a1 + 768),
          a1 + 88);
  if ( v12 != -1073741818 )
  {
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorFromSearchResult(
      a1 + 64,
      &v46,
      a1 + 88);
    v13 = *((_QWORD *)&v46 + 1);
    v14 = (unsigned int *)v46;
    while ( 1 )
    {
      if ( v43 )
      {
        **(_DWORD **)(a1 + 760) = v47 << *(_DWORD *)(a1 + 812);
        v12 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
                (_DWORD *)(a1 + 64),
                *(_DWORD *)(a1 + 768),
                a1 + 88);
        if ( v12 == -1073741818 )
          break;
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorCleanup(
          &v46,
          a1 + 64);
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorFromSearchResult(
          a1 + 64,
          &v46,
          a1 + 88);
        v13 = *((_QWORD *)&v46 + 1);
        v14 = (unsigned int *)v46;
      }
      if ( !v14 )
      {
LABEL_51:
        v12 = 0;
        break;
      }
      v13 += 4LL;
      v15 = (unsigned __int16)*v14 + 4LL;
      *((_QWORD *)&v46 + 1) = v13;
      if ( v13 < (unsigned __int64)&v14[v15] )
        goto LABEL_12;
      if ( **(_DWORD **)((a1 + 80) & -(__int64)(a1 != -64)) == -1 )
      {
        LeafSibling = (unsigned int *)*((_QWORD *)v14 + 1);
      }
      else
      {
        LeafSibling = (unsigned int *)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeFindLeafSibling(
                                        a1 + 64,
                                        v14);
        if ( LeafSibling == (unsigned int *)-1LL )
          goto LABEL_13;
      }
      if ( LeafSibling )
      {
        v13 = (unsigned __int64)(LeafSibling + 4);
        *(_QWORD *)&v46 = LeafSibling;
        *((_QWORD *)&v46 + 1) = LeafSibling + 4;
        v14 = LeafSibling;
LABEL_12:
        LeafSibling = (unsigned int *)v13;
      }
LABEL_13:
      if ( LeafSibling == (unsigned int *)-1LL )
        goto LABEL_66;
      if ( !LeafSibling )
        goto LABEL_51;
      v17 = *LeafSibling;
      v18 = *(_DWORD *)(a1 + 808);
      v19 = *(_DWORD *)(a1 + 464) * (*LeafSibling & *(_DWORD *)(a1 + 460));
      v20 = v17 >> *(_DWORD *)(a1 + 456);
      _BitScanReverse((unsigned int *)&v21, v20);
      v48 = v17;
      v22 = *(_QWORD *)(*(_QWORD *)(a1 + 8 * v21 + 192) + 16 * (v20 ^ (unsigned int)(1 << v21)));
      LODWORD(v21) = *(_DWORD *)(a1 + 812);
      v23 = (int *)(*(unsigned int *)(a1 + 472) + v19 + v22);
      v50 = v23;
      v24 = *v23 & v18;
      if ( (unsigned int)*v23 >> v21 != v47 )
        goto LABEL_51;
      v25 = *(_DWORD *)(a1 + 824);
      v26 = 4096;
      if ( (v23[1] & 0xFFF) != 0 )
        v26 = v23[1] & 0xFFF;
      v45 = (unsigned int)(v26 + v25 + 15) >> 4;
      v27 = v25
          + (~(*(_DWORD *)(*(_QWORD *)(a1 + 1000) + 8LL) - 1) & (v26 + *(_DWORD *)(*(_QWORD *)(a1 + 1000) + 8LL) - 1));
      v28 = v44;
      if ( v44 == v47 || v45 + (*v51 & 0x1FFF) <= *(_DWORD *)(a1 + 816) )
      {
        v29 = v49;
      }
      else
      {
        v10 = 0;
        v29 = v52;
        v28 = v47;
        v43 = 0;
        v51 = v53;
        v49 = v52;
        v44 = v47;
      }
      if ( v24 != v10 || v47 != v28 )
      {
        if ( !v29 )
        {
          v12 = -1073741802;
          break;
        }
        memmove((void *)(v29 + (unsigned int)(16 * v10)), (const void *)(v52 + (unsigned int)(16 * v24)), v27);
        ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1);
        v30 = *(_DWORD *)(a1 + 112);
        v31 = v10 | (v44 << *(_DWORD *)(a1 + 812));
        v42 = v31;
        if ( v30 == -1 || !v30 )
          v32 = a1 + 96;
        else
          v32 = *v11 + 16LL * (unsigned int)(v30 - 1);
        if ( *(unsigned int **)v32 == v14 )
        {
          *(_QWORD *)(v32 + 8) = v13;
        }
        else
        {
          B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
            (__int64 *)(a1 + 64),
            a1 + 88);
          if ( *(_DWORD *)(a1 + 112) == -1 )
          {
            *(_OWORD *)v32 = v46;
          }
          else
          {
            B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
              (_DWORD *)(a1 + 64),
              v14[4],
              a1 + 88);
            v38 = *(_DWORD *)(a1 + 112);
            if ( v38 == -1 || !v38 )
              v39 = a1 + 96;
            else
              v39 = *v11 + 16LL * (unsigned int)(v38 - 1);
            *(_QWORD *)(v39 + 8) = v13;
          }
          v31 = v42;
        }
        if ( v43 )
        {
LABEL_29:
          v33 = v50;
          **(_DWORD **)(a1 + 760) = *v50;
          B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeChangeKey(
            a1 + 64,
            a1 + 88,
            *(unsigned int *)(a1 + 768));
          B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorCleanup(
            &v46,
            a1 + 64);
          v13 = 0LL;
          *v33 = v42;
          v42 = v48;
          v14 = 0LL;
          v46 = 0uLL;
          B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultInit(
            v54,
            0LL);
          v55 = 0;
          v54[0] = &v57;
          v56 = 8;
          v12 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeInsert(
                  (struct NP_CONTEXT::NP_CTX *)(a1 + 64),
                  (unsigned int *)&v42);
          B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultCleanup(
            a1 + 64,
            v54,
            1LL);
          if ( v12 < 0 )
          {
            v41 = v48;
            *v50 = **(_DWORD **)(a1 + 760);
            B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeChangeKey(
              a1 + 64,
              a1 + 88,
              v41);
            break;
          }
          v34 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeDelete((struct NP_CONTEXT::NP_CTX *)(a1 + 64));
          v12 = v34;
          if ( v34 < 0 )
          {
            if ( v34 == -1073741818 )
              break;
            __int2c();
          }
        }
        else
        {
          **(_DWORD **)(a1 + 760) = v31;
          v36 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeChangeKey(
                  a1 + 64,
                  a1 + 88,
                  *(unsigned int *)(a1 + 768));
          if ( !v36 )
          {
            v43 = 1;
            goto LABEL_29;
          }
          if ( v36 == -1 )
          {
LABEL_66:
            v12 = -1073741818;
            break;
          }
          v37 = v48;
          *v50 = v42;
          B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeChangeKey(
            a1 + 64,
            a1 + 88,
            v37);
        }
        v35 = v44;
        if ( v47 != v44 )
        {
          ST_STORE<SM_TRAITS>::StDmpUpdateRegionState(a1, v47, -v45, 1);
          ST_STORE<SM_TRAITS>::StDmpUpdateRegionState(a1, v35, v45, 0);
        }
      }
      v10 += v45;
      if ( a6 && (unsigned int)ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 0LL) != 2 )
      {
        v12 = -2147483634;
        break;
      }
    }
  }
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorCleanup(
    &v46,
    a1 + 64);
  return (unsigned int)v12;
}
