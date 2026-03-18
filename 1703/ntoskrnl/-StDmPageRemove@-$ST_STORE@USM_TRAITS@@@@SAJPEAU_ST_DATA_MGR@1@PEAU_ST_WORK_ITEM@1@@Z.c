/*
 * XREFs of ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14005B2AC
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1400549C8 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmRegionEvict@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@Z @ 0x14024C0D0 (-StDmRegionEvict@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@.c)
 *     ?StNpLeafDelete@?$ST_STORE@USM_TRAITS@@@@SAXPEAUNP_CTX@NP_CONTEXT@@_K@Z @ 0x14024CB40 (-StNpLeafDelete@-$ST_STORE@USM_TRAITS@@@@SAXPEAUNP_CTX@NP_CONTEXT@@_K@Z.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140054934 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmEtwEnabled @ 0x1400587E0 (SmEtwEnabled.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14005919C (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14005939C (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x1400596E4 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140059870 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x140059904 (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x14005B5E4 (-BTreeIteratorCleanup@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14005B654 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x14005B704 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     ?StDmPageRecordRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@@Z @ 0x14005B948 (-StDmPageRecordRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUS.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14005BF00 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     ?StDmCombinePageEntry@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_ENTRY@1@@Z @ 0x14005C128 (-StDmCombinePageEntry@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_S.c)
 *     SmHpChunkFree @ 0x14005C1EC (SmHpChunkFree.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     ?StQueueCompaction@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@@@Z @ 0x14013C968 (-StQueueCompaction@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x140248F30 (-BTreeFindLeafSibling@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     SmEtwLogStoreOp @ 0x14024D98C (SmEtwLogStoreOp.c)
 *     ?SmEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KPEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x14024EC48 (-SmEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KPEAU-$SMKM_STORE@USM_TRA.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPageRemove(struct NP_CONTEXT::NP_CTX *a1, __int64 a2)
{
  ULONGLONG *v3; // rax
  _QWORD *v4; // r12
  __int64 v5; // rdx
  unsigned int v6; // edi
  int v7; // ecx
  int v8; // r14d
  __int64 v9; // r13
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v14; // rcx
  unsigned int v15; // ebx
  __int64 v16; // rax
  int v17; // eax
  char *v18; // r14
  int v19; // eax
  _DWORD *v20; // r13
  unsigned int v21; // eax
  __int64 v22; // rcx
  unsigned int v23; // eax
  __int64 LeafSibling; // rax
  int v26; // eax
  char *v27; // rax
  unsigned int v28; // edx
  __int64 v29; // r13
  __int64 v30; // r13
  ULONG_PTR v31; // r13
  struct _KTHREAD *v32; // r14
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  bool v36; // zf
  __int64 v37; // rcx
  __int64 v38; // r13
  __int64 v39; // rdx
  __int16 v40; // ax
  _DWORD *v41; // rcx
  __int64 v42; // r14
  ULONG_PTR v43; // r14
  struct _KTHREAD *CurrentThread; // rbx
  ULONG_PTR SessionId; // r9
  unsigned __int8 v46; // r12
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // rcx
  int v50; // eax
  __int64 v51; // rcx
  _KLOCK_ENTRY *v52; // rdi
  __int64 v53; // rdx
  __int16 v54; // ax
  int v55; // [rsp+40h] [rbp-29h] BYREF
  int v56; // [rsp+44h] [rbp-25h] BYREF
  int v57; // [rsp+48h] [rbp-21h]
  int v58; // [rsp+4Ch] [rbp-1Dh]
  __int64 v59; // [rsp+50h] [rbp-19h]
  _DWORD *v60; // [rsp+58h] [rbp-11h]
  ULONGLONG *v61; // [rsp+60h] [rbp-9h]
  _OWORD v62[5]; // [rsp+68h] [rbp-1h] BYREF
  unsigned int v63; // [rsp+D0h] [rbp+67h]
  unsigned __int8 AbAllocationRegionCount; // [rsp+D0h] [rbp+67h]
  unsigned int v66; // [rsp+E0h] [rbp+77h]
  unsigned int v67; // [rsp+E8h] [rbp+7Fh] BYREF

  v62[0] = 0uLL;
  v3 = SmEtwEnabled(0);
  v4 = (_QWORD *)((char *)a1 + 24);
  v6 = *(_DWORD *)(v5 + 12) + *(_DWORD *)(v5 + 8) - 1;
  v7 = *((_DWORD *)a1 + 14) & 1;
  v61 = v3;
  if ( (_BYTE)v7 )
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
      (__int64)a1,
      (__int64)a1 + 24);
  *((_DWORD *)a1 + 14) &= ~1u;
  if ( (*((_BYTE *)a1 + 120) & 1) != 0 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (__int64 *)a1 + 8,
      (__int64)a1 + 88);
  *((_DWORD *)a1 + 30) &= ~1u;
  v66 = 0;
  v59 = 0LL;
  v67 = 0;
  while ( 1 )
  {
    v8 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
           (char **)a1,
           *(_DWORD *)(a2 + 8),
           (__int64)a1 + 24);
    if ( v8 == -1073741818 )
      break;
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
      a1,
      v62,
      (char *)a1 + 24);
    v9 = *(_QWORD *)&v62[0];
    v10 = 0LL;
    if ( !*(_QWORD *)&v62[0] )
    {
      v14 = -1LL;
LABEL_29:
      if ( v66 )
      {
        v42 = *((_QWORD *)a1 + 100);
        if ( (*(_BYTE *)(v42 + 5989) & 4) != 0 )
        {
          v43 = v42 + 5992;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v43, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v43);
          v56 = 0;
          CurrentThread = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType(v43) == 1 )
            SessionId = (unsigned int)MmGetSessionIdEx(CurrentThread->ApcState.Process);
          else
            SessionId = 0xFFFFFFFFLL;
          --CurrentThread->SpecialApcDisable;
          v46 = ++CurrentThread->AbAllocationRegionCount;
          LODWORD(v47) = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
          v48 = v43 & 0x7FFFFFFFFFFFFFFCLL;
          v36 = !_BitScanReverse((unsigned int *)&v49, v47);
          v58 = v49;
          if ( v36 )
            goto LABEL_111;
          while ( 1 )
          {
            v50 = 1 << v49;
            v51 = v49;
            v52 = &CurrentThread->LockEntries[v51];
            v47 = ~v50 & (unsigned int)v47;
            if ( (v52->AcquiredByte & 1) != 0
              && (*(_DWORD *)&v52->LockState.0 & 1) == 0
              && (*(_QWORD *)&v52->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == v48
              && v52->LockState.SessionId == (_DWORD)SessionId )
            {
              v52->AcquiredByte &= ~1u;
              if ( v52->LockState.0 )
                break;
            }
            v36 = !_BitScanReverse((unsigned int *)&v49, v47);
            v58 = v49;
            if ( v36 )
              goto LABEL_111;
          }
          if ( !v52 )
          {
LABEL_111:
            if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x8000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v43, SessionId, 0LL);
          }
          else
          {
            v52->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v52->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree((__int64)&CurrentThread->LockEntries[v51], v47, v48);
            v56 = 0;
            v56 = v52->BoostBitmap.AllFields & 0x1FFFF;
            v52->BoostBitmap.AllFields &= 0xFFFE0000;
            v52->ThreadLocalFlags &= ~1u;
            v52->LockState.0 = 0LL;
            v53 = ((char *)v52 - (char *)CurrentThread - 800) / 96;
            if ( v46 == 1 )
              CurrentThread->AbEntrySummary |= 1 << v53;
            else
              _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v53);
          }
          --CurrentThread->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts(CurrentThread, v43, &v56);
          v54 = CurrentThread->SpecialApcDisable + 1;
          CurrentThread->SpecialApcDisable = v54;
          if ( !v54
            && ($69CD3F157F9F39B6F7113F2231989901 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery();
          }
          KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
        }
        SMKM_STORE_MGR<SM_TRAITS>::SmEvictKeys(v14, &v67, v66);
        SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*((_QWORD *)a1 + 100));
      }
      if ( !(unsigned __int8)*((_DWORD *)a1 + 194) && (*((_BYTE *)a1 + 1888) & 3) != 3 )
      {
        v23 = ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 0LL);
        if ( v23 )
          ST_STORE<SM_TRAITS>::StQueueCompaction(a1, v23);
      }
      v8 = 0;
      break;
    }
    v11 = (unsigned __int16)**(_DWORD **)&v62[0];
    v12 = *((_QWORD *)&v62[0] + 1) + 8LL;
    *((_QWORD *)&v62[0] + 1) = v12;
    if ( v12 >= *(_QWORD *)&v62[0] + 16LL + 8 * v11 )
    {
      if ( **(_DWORD **)(((unsigned __int64)a1 + 16) & -(__int64)(a1 != 0LL)) == -1 )
      {
        LeafSibling = *(_QWORD *)(*(_QWORD *)&v62[0] + 8LL);
        goto LABEL_38;
      }
      LeafSibling = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindLeafSibling(
                      a1,
                      *(_QWORD *)&v62[0],
                      0LL);
      if ( LeafSibling != -1 )
      {
        v10 = 0LL;
LABEL_38:
        if ( LeafSibling )
        {
          v9 = LeafSibling;
          *(_QWORD *)&v62[0] = LeafSibling;
          *((_QWORD *)&v62[0] + 1) = LeafSibling + 16;
          v13 = LeafSibling + 16;
        }
        else
        {
          v13 = 0LL;
        }
        goto LABEL_10;
      }
      v13 = -1LL;
    }
    else
    {
      v13 = v12;
    }
LABEL_10:
    v14 = -1LL;
    if ( v13 == -1 )
    {
      v8 = -1073741818;
      break;
    }
    if ( !v13 )
      goto LABEL_29;
    v15 = *(_DWORD *)v13;
    if ( v6 < *(_DWORD *)v13 )
      goto LABEL_29;
    v16 = ST_STORE<SM_TRAITS>::StDmCombinePageEntry(a1, v13, v10);
    v63 = *(_DWORD *)(v13 + 4);
    v60 = (_DWORD *)v16;
    ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect((__int64)a1);
    if ( v61 )
      SmEtwLogStoreOp((_DWORD)v61, 1, v13, (_DWORD)v61, *v60, (char)a1, 0, 0);
    v17 = *((_DWORD *)a1 + 12);
    if ( v17 == -1 || !v17 )
      v18 = (char *)a1 + 32;
    else
      v18 = (char *)(*v4 + 16LL * (unsigned int)(v17 - 1));
    if ( *(_QWORD *)v18 == v9 )
    {
      *((_QWORD *)v18 + 1) = *((_QWORD *)&v62[0] + 1);
    }
    else
    {
      B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
        (__int64)a1,
        (__int64)a1 + 24);
      if ( *((_DWORD *)a1 + 12) == -1 )
      {
        *(_OWORD *)v18 = v62[0];
      }
      else
      {
        B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
          (char **)a1,
          *(_DWORD *)(v9 + 16),
          (__int64)a1 + 24);
        v26 = *((_DWORD *)a1 + 12);
        if ( v26 == -1 || !v26 )
          v27 = (char *)a1 + 32;
        else
          v27 = (char *)(*v4 + 16LL * (unsigned int)(v26 - 1));
        *((_QWORD *)v27 + 1) = *((_QWORD *)&v62[0] + 1);
      }
    }
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorCleanup(
      v62,
      a1);
    v62[0] = 0uLL;
    v19 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(a1);
    v8 = v19;
    if ( v19 < 0 )
    {
      if ( v19 != -1073741818 )
        __int2c();
      break;
    }
    v20 = v60;
    if ( !(unsigned __int8)*((_DWORD *)a1 + 194) )
    {
      v21 = v60[1];
      if ( (v21 & 0xFFFFF000) == 0 )
        __int2c();
      v60[1] = v60[1] & 0xFFF | (((v60[1] >> 12) - 1) << 12);
      if ( ((v21 >> 12) - 1) << 12 )
        continue;
    }
    v8 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
           (_DWORD *)a1 + 16,
           v63,
           (__int64)a1 + 88);
    if ( v8 < 0 )
    {
      if ( v8 == -1073741818 )
      {
LABEL_56:
        if ( v8 != -1073741275 )
          break;
      }
      else if ( v8 != -1073741275 || **((int **)a1 + 238) < 2 )
      {
        __int2c();
        goto LABEL_56;
      }
    }
    else
    {
      v8 = ST_STORE<SM_TRAITS>::StDmPageRecordRemove(a1, v20, (char *)a1 + 88);
      if ( v8 < 0 )
        break;
      SmHpChunkFree((char *)a1 + 192);
      v22 = a2;
      if ( (*(_DWORD *)(a2 + 16) & 1) != 0 )
      {
        v28 = v66;
        v29 = v59;
        if ( !v66 || v15 - (_DWORD)v59 == v66 )
          goto LABEL_82;
        v30 = *((_QWORD *)a1 + 100);
        if ( (*(_BYTE *)(v30 + 5989) & 4) != 0 )
        {
          v31 = v30 + 5992;
          v60 = (_DWORD *)v31;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v31, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v31);
          v55 = 0;
          v32 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType(v31) == 1 )
            v33 = (unsigned int)MmGetSessionIdEx(v32->ApcState.Process);
          else
            v33 = 0xFFFFFFFFLL;
          --v32->SpecialApcDisable;
          ++v32->AbAllocationRegionCount;
          LODWORD(v34) = ((char)v32->AbEntrySummary | (char)v32->AbOrphanedEntrySummary) ^ 0x3F;
          AbAllocationRegionCount = v32->AbAllocationRegionCount;
          v35 = v31 & 0x7FFFFFFFFFFFFFFCLL;
          v36 = !_BitScanReverse((unsigned int *)&v37, v34);
          v57 = v37;
          if ( !v36 )
          {
            while ( 1 )
            {
              v38 = (__int64)&v32->LockEntries[v37];
              v34 = ~(1 << v37) & (unsigned int)v34;
              if ( (*(_BYTE *)(v38 + 26) & 1) != 0
                && (*(_DWORD *)(v38 + 32) & 1) == 0
                && (*(_QWORD *)(v38 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v35
                && *(_DWORD *)(v38 + 40) == (_DWORD)v33 )
              {
                *(_BYTE *)(v38 + 26) &= ~1u;
                if ( *(_QWORD *)(v38 + 32) )
                  break;
              }
              v36 = !_BitScanReverse((unsigned int *)&v37, v34);
              v57 = v37;
              if ( v36 )
              {
                v31 = (ULONG_PTR)v60;
                goto LABEL_90;
              }
            }
            if ( v38 )
            {
              *(_BYTE *)(v38 + 32) |= 2u;
              if ( *(__int64 *)(v38 + 32) < 0 )
                KiAbEntryRemoveFromTree(v38, v33, v34);
              v55 = 0;
              v55 = *(_DWORD *)(v38 + 88) & 0x1FFFF;
              *(_DWORD *)(v38 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v38 + 25) &= ~1u;
              *(_QWORD *)(v38 + 32) = 0LL;
              v39 = (v38 - (__int64)v32 - 800) / 96;
              if ( AbAllocationRegionCount == 1 )
                v32->AbEntrySummary |= 1 << v39;
              else
                _InterlockedOr8((volatile signed __int8 *)&v32->AbOrphanedEntrySummary, 1 << v39);
LABEL_77:
              --v32->AbAllocationRegionCount;
              KiAbThreadRemoveBoosts(v32, v60, &v55);
              v40 = v32->SpecialApcDisable + 1;
              v32->SpecialApcDisable = v40;
              if ( !v40 && ($69CD3F157F9F39B6F7113F2231989901 *)v32->ApcState.ApcListHead[0].Flink != &v32->152 )
                KiCheckForKernelApcDelivery();
              KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
              v28 = v66;
              goto LABEL_81;
            }
            v31 = (ULONG_PTR)v60;
          }
LABEL_90:
          if ( (*((_DWORD *)&v32->0 + 1) & 0x8000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v32, v31, (unsigned int)v33, 0LL);
          goto LABEL_77;
        }
LABEL_81:
        SMKM_STORE_MGR<SM_TRAITS>::SmEvictKeys(v22, &v67, v28);
        SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*((_QWORD *)a1 + 100));
        v29 = v67;
        v28 = 0;
        v66 = 0;
        v59 = v67;
LABEL_82:
        v41 = (_DWORD *)*((_QWORD *)a1 + 238);
        if ( !*v41 || *v41 == 3 && v15 < v41[1] )
        {
          if ( !v28 )
            v29 = v15;
          v66 = v28 + 1;
          v59 = v29;
          v67 = v29;
        }
      }
    }
  }
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorCleanup(
    v62,
    a1);
  return (unsigned int)v8;
}
