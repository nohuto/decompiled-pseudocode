/*
 * XREFs of ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14026DDA0
 * Callers:
 *     ?StDmRegionEvict@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@Z @ 0x14026E7F8 (-StDmRegionEvict@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@.c)
 *     ?StNpLeafDelete@?$ST_STORE@USM_TRAITS@@@@SAXPEAUNP_CTX@NP_CONTEXT@@_K@Z @ 0x140270A60 (-StNpLeafDelete@-$ST_STORE@USM_TRAITS@@@@SAXPEAUNP_CTX@NP_CONTEXT@@_K@Z.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1402713C4 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140006BE4 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140006CB0 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140006F34 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     SmEtwEnabled @ 0x14012F570 (SmEtwEnabled.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140260AC8 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x14026109C (-BTreeFindLeafSibling@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x14026209C (-BTreeIteratorCleanup@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x140262558 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x1402637A0 (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14026391C (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x14026B704 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     ?StDmCombinePageEntry@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_ENTRY@1@@Z @ 0x14026C184 (-StDmCombinePageEntry@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_S.c)
 *     ?StDmPageRecordRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@@Z @ 0x14026DBDC (-StDmPageRecordRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUS.c)
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14026DD58 (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     ?StQueueCompaction@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@@@Z @ 0x140270CB4 (-StQueueCompaction@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@.c)
 *     SmHpChunkFree @ 0x140272174 (SmHpChunkFree.c)
 *     SmEtwLogStoreOp @ 0x140272C80 (SmEtwLogStoreOp.c)
 *     ?SmEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KPEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x1402747B0 (-SmEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KPEAU-$SMKM_STORE@USM_TRA.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPageRemove(__int64 a1, __int64 a2)
{
  _QWORD *v3; // r15
  __int64 v4; // rdx
  int v5; // ecx
  unsigned int v6; // r13d
  int v7; // edi
  __int64 v8; // r14
  unsigned __int64 v9; // r12
  __int64 v10; // rax
  __int64 LeafSibling; // rax
  __int64 v12; // rdi
  __int64 v13; // rcx
  unsigned int v14; // ebx
  _DWORD *v15; // r13
  int v16; // r9d
  int v17; // eax
  __int64 v18; // rdi
  int v19; // eax
  __int64 v20; // rax
  int v21; // eax
  unsigned int v22; // ecx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r14
  __int64 v26; // r12
  unsigned __int64 v27; // r12
  struct _KTHREAD *v28; // rdi
  unsigned int v29; // edx
  unsigned __int8 v30; // r13
  unsigned int v31; // r8d
  __int64 v32; // r14
  bool v33; // zf
  __int64 v34; // rcx
  __int64 v35; // rcx
  _DWORD *v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // r14
  unsigned __int64 v39; // r14
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // r12d
  unsigned __int8 v42; // r15
  unsigned int v43; // edx
  __int64 v44; // rdi
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  unsigned int v48; // eax
  int v50; // [rsp+40h] [rbp-29h] BYREF
  unsigned int v51; // [rsp+44h] [rbp-25h]
  int v52; // [rsp+48h] [rbp-21h]
  int v53; // [rsp+4Ch] [rbp-1Dh]
  int v54; // [rsp+50h] [rbp-19h]
  __int64 v55; // [rsp+58h] [rbp-11h]
  ULONGLONG *v56; // [rsp+60h] [rbp-9h]
  __int64 v57[11]; // [rsp+68h] [rbp-1h] BYREF
  int v58; // [rsp+D0h] [rbp+67h]
  unsigned int v60; // [rsp+E0h] [rbp+77h] BYREF
  int v61; // [rsp+E8h] [rbp+7Fh] BYREF

  *(_OWORD *)v57 = 0uLL;
  v56 = SmEtwEnabled(0);
  v3 = (_QWORD *)(a1 + 24);
  v5 = *(_DWORD *)(a1 + 56) & 1;
  v51 = *(_DWORD *)(v4 + 12) + *(_DWORD *)(v4 + 8) - 1;
  if ( (_BYTE)v5 )
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
      (__int64 *)a1,
      a1 + 24);
  *(_DWORD *)(a1 + 56) &= ~1u;
  if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (__int64 *)(a1 + 64),
      a1 + 88);
  *(_DWORD *)(a1 + 120) &= ~1u;
  v6 = 0;
  v58 = 0;
  v55 = 0LL;
  v60 = 0;
  while ( 1 )
  {
    v7 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
           (char **)a1,
           *(_DWORD *)(a2 + 8),
           a1 + 24);
    if ( v7 == -1073741818 )
      break;
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
      (unsigned __int8 **)a1,
      v57,
      a1 + 24);
    v8 = v57[0];
    if ( !v57[0] )
    {
      v13 = -1LL;
LABEL_88:
      if ( v6 )
      {
        v38 = *(_QWORD *)(a1 + 800);
        if ( (*(_BYTE *)(v38 + 6021) & 4) != 0 )
        {
          v39 = v38 + 6024;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v39, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v39);
          v50 = 0;
          CurrentThread = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType(v39) == 1 )
            SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
          else
            SessionId = -1;
          --CurrentThread->SpecialApcDisable;
          v42 = ++CurrentThread->AbAllocationRegionCount;
          v43 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
          while ( 1 )
          {
            v33 = !_BitScanReverse((unsigned int *)&v45, v43);
            v54 = v45;
            if ( v33 )
              goto LABEL_102;
            v44 = (__int64)&CurrentThread->LockEntries[v45];
            v43 &= ~(1 << v45);
            if ( (*(_BYTE *)(v44 + 26) & 1) != 0
              && (*(_DWORD *)(v44 + 32) & 1) == 0
              && (*(_QWORD *)(v44 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v39 & 0x7FFFFFFFFFFFFFFCLL)
              && *(_DWORD *)(v44 + 40) == SessionId )
            {
              *(_BYTE *)(v44 + 26) &= ~1u;
              if ( *(_QWORD *)(v44 + 32) )
                break;
            }
          }
          if ( !v44 )
          {
LABEL_102:
            if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v39, SessionId, 0LL);
            goto LABEL_109;
          }
          *(_BYTE *)(v44 + 32) |= 2u;
          if ( *(__int64 *)(v44 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v44);
          v50 = 0;
          v50 = *(_DWORD *)(v44 + 88) & 0x1FFFF;
          *(_DWORD *)(v44 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v44 + 25) &= ~1u;
          *(_QWORD *)(v44 + 32) = 0LL;
          v46 = (v44 - (__int64)CurrentThread - 800) / 96;
          if ( v42 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v46;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v46);
LABEL_109:
          --CurrentThread->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v39, (unsigned int *)&v50);
          v33 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v33
            && ($B476B70DB57F76B110DA5B9238C3E934 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery(v47);
          }
          KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
        }
        SMKM_STORE_MGR<SM_TRAITS>::SmEvictKeys(v13, &v60, v6);
        SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*(_QWORD *)(a1 + 800));
      }
      if ( !(unsigned __int8)*(_DWORD *)(a1 + 776) && (*(_BYTE *)(a1 + 1904) & 3) != 3 )
      {
        v48 = ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 0);
        if ( v48 )
          ST_STORE<SM_TRAITS>::StQueueCompaction(a1, v48);
      }
      v7 = 0;
      break;
    }
    v9 = v57[1] + 8;
    v10 = (unsigned __int16)*(_DWORD *)v57[0] + 2LL;
    v57[1] = v9;
    if ( v9 >= v57[0] + 8 * v10 )
    {
      if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) == -1 )
      {
        LeafSibling = *(_QWORD *)(v57[0] + 8);
      }
      else
      {
        LeafSibling = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindLeafSibling(
                        a1,
                        v57[0]);
        if ( LeafSibling == -1 )
        {
          v12 = -1LL;
          goto LABEL_18;
        }
      }
      if ( !LeafSibling )
      {
        v12 = 0LL;
        goto LABEL_18;
      }
      v9 = LeafSibling + 16;
      v57[0] = LeafSibling;
      v57[1] = LeafSibling + 16;
      v8 = LeafSibling;
    }
    v12 = v9;
LABEL_18:
    v13 = -1LL;
    if ( v12 == -1 )
    {
      v7 = -1073741818;
      break;
    }
    if ( !v12 )
      goto LABEL_88;
    v14 = *(_DWORD *)v12;
    if ( v51 < *(_DWORD *)v12 )
      goto LABEL_88;
    v15 = ST_STORE<SM_TRAITS>::StDmCombinePageEntry(a1, v12);
    v52 = *(_DWORD *)(v12 + 4);
    ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, (__int64)v15);
    if ( v56 )
      SmEtwLogStoreOp((_DWORD)v56, 1, v12, v16, *v15, a1, 0, 0);
    v17 = *(_DWORD *)(a1 + 48);
    if ( v17 == -1 || !v17 )
      v18 = a1 + 32;
    else
      v18 = *v3 + 16LL * (unsigned int)(v17 - 1);
    if ( *(_QWORD *)v18 == v8 )
    {
      *(_QWORD *)(v18 + 8) = v9;
    }
    else
    {
      B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
        (__int64 *)a1,
        a1 + 24);
      if ( *(_DWORD *)(a1 + 48) == -1 )
      {
        *(_OWORD *)v18 = *(_OWORD *)v57;
      }
      else
      {
        B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
          (char **)a1,
          *(_DWORD *)(v8 + 16),
          a1 + 24);
        v19 = *(_DWORD *)(a1 + 48);
        if ( v19 == -1 || !v19 )
          v20 = a1 + 32;
        else
          v20 = *v3 + 16LL * (unsigned int)(v19 - 1);
        *(_QWORD *)(v20 + 8) = v9;
      }
    }
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorCleanup(
      v57,
      (__int64 *)a1);
    *(_OWORD *)v57 = 0uLL;
    v21 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
            a1,
            a1 + 24);
    v7 = v21;
    if ( v21 < 0 )
    {
      if ( v21 != -1073741818 )
        NT_ASSERT("(((NTSTATUS)(Status)) >= 0) || Status == ((NTSTATUS)0xC0000006L)");
      break;
    }
    if ( (unsigned __int8)*(_DWORD *)(a1 + 776) )
      goto LABEL_41;
    v22 = v15[1];
    if ( !(v22 >> 12) )
      NT_ASSERT("PageRecord->RefCount > 0");
    v15[1] = v22 & 0xFFF | (((v22 >> 12) - 1) << 12);
    if ( ((v22 >> 12) - 1) << 12 )
    {
      v6 = v58;
    }
    else
    {
LABEL_41:
      v23 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
              a1 + 64,
              v52,
              a1 + 88);
      v7 = v23;
      if ( v23 >= 0 )
      {
        v7 = ST_STORE<SM_TRAITS>::StDmPageRecordRemove(a1, (unsigned __int64)v15, a1 + 88);
        if ( v7 < 0 )
          break;
        SmHpChunkFree(a1 + 192);
        v24 = a2;
        v6 = v58;
        if ( (*(_DWORD *)(a2 + 16) & 1) != 0 )
        {
          v25 = v55;
          if ( v58 && v14 - (_DWORD)v55 != v58 )
          {
            v26 = *(_QWORD *)(a1 + 800);
            if ( (*(_BYTE *)(v26 + 6021) & 4) != 0 )
            {
              v27 = v26 + 6024;
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v27, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)v27);
              v61 = 0;
              v28 = KeGetCurrentThread();
              if ( (unsigned int)MiGetSystemRegionType(v27) == 1 )
                v29 = MmGetSessionIdEx((__int64)v28->ApcState.Process);
              else
                v29 = -1;
              --v28->SpecialApcDisable;
              v30 = ++v28->AbAllocationRegionCount;
              v31 = ((char)v28->AbEntrySummary | (char)v28->AbOrphanedEntrySummary) ^ 0x3F;
              while ( 1 )
              {
                v33 = !_BitScanReverse((unsigned int *)&v34, v31);
                v53 = v34;
                if ( v33 )
                  goto LABEL_64;
                v32 = (__int64)&v28->LockEntries[v34];
                v31 &= ~(1 << v34);
                if ( (*(_BYTE *)(v32 + 26) & 1) != 0
                  && (*(_DWORD *)(v32 + 32) & 1) == 0
                  && (*(_QWORD *)(v32 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v27 & 0x7FFFFFFFFFFFFFFCLL)
                  && *(_DWORD *)(v32 + 40) == v29 )
                {
                  *(_BYTE *)(v32 + 26) &= ~1u;
                  if ( *(_QWORD *)(v32 + 32) )
                    break;
                }
              }
              if ( !v32 )
              {
LABEL_64:
                if ( (*((_DWORD *)&v28->0 + 1) & 0x10000) == 0 )
                  KeBugCheckEx(0x162u, (ULONG_PTR)v28, v27, v29, 0LL);
                goto LABEL_65;
              }
              *(_BYTE *)(v32 + 32) |= 2u;
              if ( *(__int64 *)(v32 + 32) < 0 )
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v32);
              v61 = 0;
              v61 = *(_DWORD *)(v32 + 88) & 0x1FFFF;
              *(_DWORD *)(v32 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v32 + 25) &= ~1u;
              *(_QWORD *)(v32 + 32) = 0LL;
              v37 = (v32 - (__int64)v28 - 800) / 96;
              if ( v30 == 1 )
                v28->AbEntrySummary |= 1 << v37;
              else
                _InterlockedOr8((volatile signed __int8 *)&v28->AbOrphanedEntrySummary, 1 << v37);
LABEL_65:
              --v28->AbAllocationRegionCount;
              KiAbThreadRemoveBoosts((ULONG_PTR)v28, v27, (unsigned int *)&v61);
              v33 = v28->SpecialApcDisable++ == -1;
              if ( v33 && ($B476B70DB57F76B110DA5B9238C3E934 *)v28->ApcState.ApcListHead[0].Flink != &v28->152 )
                KiCheckForKernelApcDelivery(v35);
              KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
              v6 = v58;
            }
            SMKM_STORE_MGR<SM_TRAITS>::SmEvictKeys(v24, &v60, v6);
            SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*(_QWORD *)(a1 + 800));
            v25 = v60;
            v6 = 0;
            v58 = 0;
            v55 = v60;
          }
          v36 = *(_DWORD **)(a1 + 1920);
          if ( !*v36 || *v36 == 3 && v14 < v36[1] )
          {
            if ( !v6 )
              v25 = v14;
            v58 = ++v6;
            v55 = v25;
            v60 = v25;
          }
        }
      }
      else
      {
        if ( v23 == -1073741818 )
          break;
        if ( v23 != -1073741275 || (v6 = v58, **(int **)(a1 + 1920) < 2) )
          NT_ASSERT(
            "(((NTSTATUS)(Status)) >= 0) || Status == ((NTSTATUS)0xC0000006L) || (Status == ((NTSTATUS)0xC0000225L) && Da"
            "taMgr->PersistState->State >= PersistUnpersisting)");
      }
    }
  }
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorCleanup(
    v57,
    (__int64 *)a1);
  return (unsigned int)v7;
}
