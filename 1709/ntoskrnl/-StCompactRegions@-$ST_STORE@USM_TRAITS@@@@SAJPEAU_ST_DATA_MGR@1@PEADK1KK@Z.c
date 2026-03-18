/*
 * XREFs of ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x14026A3EC
 * Callers:
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x140006E2C (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14026AAE0 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x14026AD74 (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDmReuseCurrentRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_CURRENT_REGION@1@@Z @ 0x14026EC8C (-StDmReuseCurrentRegion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_CURRENT_REGION@1@.c)
 * Callees:
 *     ?BTreeSearchResultInit@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAUSEARCH_RESULT@1@K@Z @ 0x140006414 (-BTreeSearchResultInit@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@.c)
 *     ?BTreeSearchResultCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x140006BAC (-BTreeSearchResultCleanup@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140006BE4 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ?BTreeChangeKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAKPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x1402603C4 (-BTreeChangeKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?BTreeDelete@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x140260618 (-BTreeDelete@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x140260F7C (-BTreeFindLeafSibling@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?BTreeInsert@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAUSEARCH_RESULT@1@@Z @ 0x140261550 (-BTreeInsert@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x140261F68 (-BTreeIteratorCleanup@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x140262378 (-BTreeIteratorFromSearchResult@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_C.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x1402637A0 (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x14026B704 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14026DD58 (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     ?StDmpUpdateRegionState@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z @ 0x140270134 (-StDmpUpdateRegionState@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z.c)
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
  __int64 v14; // r12
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
  __int64 v27; // r9
  __int64 v28; // r8
  __int64 v29; // rdx
  int v30; // eax
  int v31; // edx
  __int64 v32; // rdi
  int v33; // eax
  __int64 v34; // rax
  int v35; // eax
  int v36; // r8d
  int *v37; // rdi
  int v38; // eax
  unsigned int v39; // edi
  int v40; // r8d
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
  v8 = *(_QWORD *)(a1 + 1032);
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
  ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, *(_QWORD *)(a1 + 760));
  v11 = (_QWORD *)(a1 + 88);
  if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (__int64 *)(a1 + 64),
      a1 + 88);
  *(_DWORD *)(a1 + 120) &= ~1u;
  **(_DWORD **)(a1 + 760) = a3 << *(_DWORD *)(a1 + 812);
  v12 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
          a1 + 64,
          *(_DWORD *)(a1 + 768),
          a1 + 88);
  if ( v12 != -1073741818 )
  {
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorFromSearchResult(
      (unsigned __int8 **)(a1 + 64),
      &v46,
      a1 + 88);
    v13 = *((_QWORD *)&v46 + 1);
    v14 = v46;
    while ( 1 )
    {
      if ( v43 )
      {
        **(_DWORD **)(a1 + 760) = v47 << *(_DWORD *)(a1 + 812);
        v12 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
                a1 + 64,
                *(_DWORD *)(a1 + 768),
                a1 + 88);
        if ( v12 == -1073741818 )
          break;
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorCleanup(
          (__int64 *)&v46,
          (__int64 *)(a1 + 64));
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorFromSearchResult(
          (unsigned __int8 **)(a1 + 64),
          &v46,
          a1 + 88);
        v13 = *((_QWORD *)&v46 + 1);
        v14 = v46;
      }
      if ( !v14 )
      {
LABEL_64:
        v12 = 0;
        break;
      }
      v13 += 4LL;
      v15 = (unsigned __int16)*(_DWORD *)v14 + 4LL;
      *((_QWORD *)&v46 + 1) = v13;
      if ( v13 < v14 + 4 * v15 )
        goto LABEL_20;
      if ( **(_DWORD **)((a1 + 80) & -(__int64)(a1 != -64)) == -1 )
      {
        LeafSibling = *(unsigned int **)(v14 + 8);
      }
      else
      {
        LeafSibling = (unsigned int *)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeFindLeafSibling(
                                        a1 + 64,
                                        v14);
        if ( LeafSibling == (unsigned int *)-1LL )
          goto LABEL_21;
      }
      if ( LeafSibling )
      {
        v13 = (unsigned __int64)(LeafSibling + 4);
        *(_QWORD *)&v46 = LeafSibling;
        *((_QWORD *)&v46 + 1) = LeafSibling + 4;
        v14 = (__int64)LeafSibling;
LABEL_20:
        LeafSibling = (unsigned int *)v13;
      }
LABEL_21:
      if ( LeafSibling == (unsigned int *)-1LL )
        goto LABEL_63;
      if ( !LeafSibling )
        goto LABEL_64;
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
        goto LABEL_64;
      v25 = *(_DWORD *)(a1 + 824);
      v26 = 4096;
      if ( (v23[1] & 0xFFF) != 0 )
        v26 = v23[1] & 0xFFF;
      v45 = (unsigned int)(v26 + v25 + 15) >> 4;
      v27 = v25
          + (~(*(_DWORD *)(*(_QWORD *)(a1 + 1016) + 8LL) - 1) & (unsigned int)(v26
                                                                             + *(_DWORD *)(*(_QWORD *)(a1 + 1016) + 8LL)
                                                                             - 1));
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
      if ( v24 != v10 || v47 != (_DWORD)v28 )
      {
        if ( !v29 )
        {
          v12 = -1073741802;
          break;
        }
        memmove(
          (void *)(v29 + (unsigned int)(16 * v10)),
          (const void *)(v52 + (unsigned int)(16 * v24)),
          (unsigned int)v27);
        ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, v23);
        v30 = *(_DWORD *)(a1 + 112);
        v31 = v10 | (v44 << *(_DWORD *)(a1 + 812));
        v42 = v31;
        if ( v30 == -1 || !v30 )
          v32 = a1 + 96;
        else
          v32 = *v11 + 16LL * (unsigned int)(v30 - 1);
        if ( *(_QWORD *)v32 == v14 )
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
              a1 + 64,
              *(_DWORD *)(v14 + 16),
              a1 + 88);
            v33 = *(_DWORD *)(a1 + 112);
            if ( v33 == -1 || !v33 )
              v34 = a1 + 96;
            else
              v34 = *v11 + 16LL * (unsigned int)(v33 - 1);
            *(_QWORD *)(v34 + 8) = v13;
          }
          v31 = v42;
        }
        if ( !v43 )
        {
          **(_DWORD **)(a1 + 760) = v31;
          v35 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeChangeKey(
                  a1 + 64,
                  a1 + 88,
                  *(_DWORD *)(a1 + 768));
          if ( v35 )
          {
            if ( v35 == -1 )
            {
LABEL_63:
              v12 = -1073741818;
              break;
            }
            v36 = v48;
            *v50 = v42;
            B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeChangeKey(
              a1 + 64,
              a1 + 88,
              v36);
LABEL_56:
            v39 = v44;
            if ( v47 != v44 )
            {
              ST_STORE<SM_TRAITS>::StDmpUpdateRegionState(a1, v47, -v45, 1LL);
              ST_STORE<SM_TRAITS>::StDmpUpdateRegionState(a1, v39, v45, 0LL);
            }
            goto LABEL_58;
          }
          v43 = 1;
        }
        v37 = v50;
        **(_DWORD **)(a1 + 760) = *v50;
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeChangeKey(
          a1 + 64,
          a1 + 88,
          *(_DWORD *)(a1 + 768));
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorCleanup(
          (__int64 *)&v46,
          (__int64 *)(a1 + 64));
        v13 = 0LL;
        *v37 = v42;
        v42 = v48;
        v14 = 0LL;
        v46 = 0uLL;
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultInit(
          v54,
          0);
        v55 = 0;
        v54[0] = &v57;
        v56 = 8;
        v12 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeInsert(
                a1 + 64,
                (unsigned int *)&v42,
                (__int64)v54);
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultCleanup(
          a1 + 64,
          (__int64)v54,
          1);
        if ( v12 < 0 )
        {
          v40 = v48;
          *v50 = **(_DWORD **)(a1 + 760);
          B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeChangeKey(
            a1 + 64,
            a1 + 88,
            v40);
          break;
        }
        v38 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeDelete(
                a1 + 64,
                *(unsigned int *)(a1 + 768),
                a1 + 88);
        v12 = v38;
        if ( v38 < 0 )
        {
          if ( v38 != -1073741818 )
            NT_ASSERT("(((NTSTATUS)(Status)) >= 0) || Status == ((NTSTATUS)0xC0000006L)");
          break;
        }
        goto LABEL_56;
      }
LABEL_58:
      v10 += v45;
      if ( a6 && (unsigned int)ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 0LL, v28, v27) != 2 )
      {
        v12 = -2147483634;
        break;
      }
    }
  }
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorCleanup(
    (__int64 *)&v46,
    (__int64 *)(a1 + 64));
  return (unsigned int)v12;
}
