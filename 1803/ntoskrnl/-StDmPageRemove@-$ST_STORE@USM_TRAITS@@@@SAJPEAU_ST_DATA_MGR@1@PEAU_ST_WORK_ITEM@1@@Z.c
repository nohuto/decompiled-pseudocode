/*
 * XREFs of ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140094DA4
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140091218 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmRegionEvict@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@Z @ 0x1402A5708 (-StDmRegionEvict@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@.c)
 *     ?StNpLeafDelete@?$ST_STORE@USM_TRAITS@@@@SAXPEAUNP_CTX@NP_CONTEXT@@_K@Z @ 0x1402A6070 (-StNpLeafDelete@-$ST_STORE@USM_TRAITS@@@@SAXPEAUNP_CTX@NP_CONTEXT@@_K@Z.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140091184 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmEtwEnabled @ 0x140092880 (SmEtwEnabled.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x140093364 (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14009362C (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x140093994 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140093B74 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x140093C04 (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x1400950DC (-BTreeIteratorCleanup@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14009514C (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@.c)
 *     ?StDmPageRecordRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@@Z @ 0x140095200 (-StDmPageRecordRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUS.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140095828 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     ?StDmCombinePageEntry@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_ENTRY@1@@Z @ 0x140095A84 (-StDmCombinePageEntry@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_S.c)
 *     SmHpChunkFree @ 0x140095B48 (SmHpChunkFree.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x1400960AC (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     ?StQueueCompaction@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@@@Z @ 0x14014D5E0 (-StQueueCompaction@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x1402A2108 (-BTreeFindLeafSibling@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     SmEtwLogStoreOp @ 0x1402A6F28 (SmEtwLogStoreOp.c)
 *     ?SmEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KPEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x1402A81B4 (-SmEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KPEAU-$SMKM_STORE@USM_TRA.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPageRemove(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  ULONGLONG *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // r13
  int v7; // r14d
  unsigned int v8; // r14d
  int v9; // edx
  int v10; // ecx
  int v11; // edi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r15
  __int64 v15; // rdx
  unsigned __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rcx
  unsigned int v20; // ebx
  _DWORD *v21; // r14
  int v22; // r9d
  int v23; // eax
  __int64 v24; // rdi
  __int64 v25; // r14
  int v26; // eax
  _DWORD *v27; // r14
  unsigned int v28; // ecx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned int v32; // eax
  __int64 LeafSibling; // rax
  int v35; // eax
  unsigned int v36; // r15d
  __int64 v37; // r14
  __int64 v38; // r15
  ULONG_PTR v39; // r15
  struct _KTHREAD *v40; // rdi
  unsigned int v41; // edx
  unsigned __int8 v42; // r12
  unsigned int v43; // r8d
  bool v44; // zf
  __int64 v45; // rcx
  __int64 v46; // r14
  __int64 v47; // rdx
  _DWORD *v48; // rcx
  __int64 v49; // r14
  ULONG_PTR v50; // r14
  struct _KTHREAD *CurrentThread; // rbx
  ULONG_PTR SessionId; // r9
  unsigned __int8 v53; // r15
  unsigned int v54; // edx
  __int64 v55; // rcx
  int v56; // eax
  __int64 v57; // rcx
  _KLOCK_ENTRY *v58; // rdi
  __int64 v59; // rdx
  int v60; // [rsp+40h] [rbp-29h] BYREF
  int v61; // [rsp+44h] [rbp-25h] BYREF
  __int128 v62; // [rsp+48h] [rbp-21h] BYREF
  __int64 v63; // [rsp+58h] [rbp-11h]
  unsigned int v64; // [rsp+60h] [rbp-9h]
  int v65; // [rsp+64h] [rbp-5h]
  int v66; // [rsp+68h] [rbp-1h]
  _DWORD *v67; // [rsp+70h] [rbp+7h]
  ULONGLONG *v68; // [rsp+78h] [rbp+Fh]
  unsigned int v69; // [rsp+D0h] [rbp+67h]
  unsigned int v71; // [rsp+E0h] [rbp+77h]
  unsigned int v72; // [rsp+E8h] [rbp+7Fh] BYREF

  v62 = 0uLL;
  v3 = a2;
  v4 = SmEtwEnabled(0);
  v6 = (_QWORD *)(a1 + 24);
  v7 = *(_DWORD *)(v5 + 8) - 1;
  v68 = v4;
  v8 = *(_DWORD *)(v5 + 12) + v7;
  v9 = *(_DWORD *)(a1 + 56);
  v69 = v8;
  if ( (*(_BYTE *)(a1 + 56) & 1) != 0 )
  {
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
      a1,
      a1 + 24);
    v9 = *(_DWORD *)(a1 + 56);
  }
  *(_DWORD *)(a1 + 56) = v9 & 0xFFFFFFFE;
  v10 = *(_DWORD *)(a1 + 120);
  if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
  {
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      a1 + 64,
      a1 + 88);
    v10 = *(_DWORD *)(a1 + 120);
  }
  v71 = 0;
  *(_DWORD *)(a1 + 120) = v10 & 0xFFFFFFFE;
  v63 = 0LL;
  v72 = 0;
  while ( 1 )
  {
    v11 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
            (char **)a1,
            *(_DWORD *)(v3 + 8),
            a1 + 24);
    if ( v11 == -1073741818 )
      break;
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
      a1,
      &v62,
      a1 + 24);
    v14 = v62;
    v15 = 0LL;
    if ( !(_QWORD)v62 )
    {
      v19 = -1LL;
LABEL_29:
      if ( v71 )
      {
        v49 = *(_QWORD *)(a1 + 800);
        if ( (*(_BYTE *)(v49 + 6021) & 4) != 0 )
        {
          v50 = v49 + 6024;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v50, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v50, v15, v12, v13);
          v61 = 0;
          CurrentThread = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType(v50) == 1 )
            SessionId = (unsigned int)MmGetSessionIdEx(CurrentThread->ApcState.Process);
          else
            SessionId = 0xFFFFFFFFLL;
          --CurrentThread->SpecialApcDisable;
          v53 = ++CurrentThread->AbAllocationRegionCount;
          v54 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
          while ( 1 )
          {
            v44 = !_BitScanReverse((unsigned int *)&v55, v54);
            v66 = v55;
            if ( v44 )
              goto LABEL_103;
            v56 = 1 << v55;
            v57 = v55;
            v58 = &CurrentThread->LockEntries[v57];
            v54 &= ~v56;
            if ( (v58->AcquiredByte & 1) != 0
              && (*(_DWORD *)&v58->LockState.0 & 1) == 0
              && (*(_QWORD *)&v58->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v50 & 0x7FFFFFFFFFFFFFFCLL)
              && v58->LockState.SessionId == (_DWORD)SessionId )
            {
              v58->AcquiredByte &= ~1u;
              if ( v58->LockState.0 )
                break;
            }
          }
          if ( !v58 )
          {
LABEL_103:
            if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v50, SessionId, 0LL);
            goto LABEL_115;
          }
          v58->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v58->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v57].TreeNode);
          v61 = 0;
          v61 = v58->BoostBitmap.AllFields & 0x1FFFF;
          v58->BoostBitmap.AllFields &= 0xFFFE0000;
          v58->ThreadLocalFlags &= ~1u;
          v58->LockState.0 = 0LL;
          v59 = ((char *)v58 - (char *)CurrentThread - 800) / 96;
          if ( v53 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v59;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v59);
LABEL_115:
          --CurrentThread->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts(CurrentThread, v50, &v61);
          v44 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v44
            && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery();
          }
          KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
        }
        SMKM_STORE_MGR<SM_TRAITS>::SmEvictKeys(v19, &v72, v71);
        SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*(_QWORD *)(a1 + 800));
      }
      if ( !*(_BYTE *)(a1 + 776) && (*(_BYTE *)(a1 + 1904) & 3) != 3 )
      {
        v32 = ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 0LL);
        if ( v32 )
          ST_STORE<SM_TRAITS>::StQueueCompaction(a1, v32);
      }
      v11 = 0;
      break;
    }
    v16 = *((_QWORD *)&v62 + 1) + 8LL;
    v17 = (unsigned __int16)*(_DWORD *)v62 + 2LL;
    *((_QWORD *)&v62 + 1) = v16;
    if ( v16 >= (__int64)v62 + 8 * v17 )
    {
      if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) == -1 )
      {
        LeafSibling = *(_QWORD *)(v62 + 8);
      }
      else
      {
        LeafSibling = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindLeafSibling(
                        a1,
                        v62);
        if ( LeafSibling == -1 )
        {
          v18 = -1LL;
          goto LABEL_10;
        }
        v15 = 0LL;
      }
      if ( !LeafSibling )
      {
        v18 = 0LL;
        goto LABEL_10;
      }
      v16 = LeafSibling + 16;
      *(_QWORD *)&v62 = LeafSibling;
      *((_QWORD *)&v62 + 1) = LeafSibling + 16;
      v14 = LeafSibling;
    }
    v18 = v16;
LABEL_10:
    v19 = -1LL;
    if ( v18 == -1 )
    {
      v11 = -1073741818;
      break;
    }
    if ( !v18 )
      goto LABEL_29;
    v20 = *(_DWORD *)v18;
    if ( v8 < *(_DWORD *)v18 )
      goto LABEL_29;
    v21 = (_DWORD *)ST_STORE<SM_TRAITS>::StDmCombinePageEntry(a1, v18);
    v67 = v21;
    v64 = *(_DWORD *)(v18 + 4);
    ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, (__int64)v21);
    if ( v68 )
      SmEtwLogStoreOp((_DWORD)v68, 1, v18, v22, *v21, a1, 0, 0);
    v23 = *(_DWORD *)(a1 + 48);
    v24 = a1 + 32;
    v25 = a1 + 32;
    if ( v23 != -1 && v23 )
      v25 = *v6 + 16LL * (unsigned int)(v23 - 1);
    if ( *(_QWORD *)v25 == v14 )
    {
      *(_QWORD *)(v25 + 8) = v16;
    }
    else
    {
      B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
        a1,
        a1 + 24);
      if ( *(_DWORD *)(a1 + 48) == -1 )
      {
        *(_OWORD *)v25 = v62;
      }
      else
      {
        B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
          (char **)a1,
          *(_DWORD *)(v14 + 16),
          a1 + 24);
        v35 = *(_DWORD *)(a1 + 48);
        if ( v35 != -1 && v35 )
          v24 = *v6 + 16LL * (unsigned int)(v35 - 1);
        *(_QWORD *)(v24 + 8) = v16;
      }
    }
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorCleanup(
      &v62,
      a1);
    v62 = 0uLL;
    v26 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
            a1,
            a1 + 24);
    v11 = v26;
    if ( v26 < 0 )
    {
      if ( v26 != -1073741818 )
        __int2c();
      break;
    }
    v27 = v67;
    if ( *(_BYTE *)(a1 + 776) )
      goto LABEL_25;
    v28 = v67[1];
    if ( !(v28 >> 12) )
      __int2c();
    v3 = a2;
    v67[1] = v28 & 0xFFF | (((v28 >> 12) - 1) << 12);
    if ( ((v28 >> 12) - 1) << 12 )
    {
LABEL_36:
      v8 = v69;
    }
    else
    {
LABEL_25:
      v11 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
              (char **)(a1 + 64),
              v64,
              a1 + 88);
      if ( v11 < 0 )
      {
        if ( v11 == -1073741818 )
          goto LABEL_55;
        if ( v11 != -1073741275 || (v3 = a2, v8 = v69, **(int **)(a1 + 1920) < 2) )
        {
          __int2c();
LABEL_55:
          if ( v11 != -1073741275 )
            break;
          v3 = a2;
          goto LABEL_36;
        }
      }
      else
      {
        v11 = ST_STORE<SM_TRAITS>::StDmPageRecordRemove(a1, v27, a1 + 88);
        if ( v11 < 0 )
          break;
        SmHpChunkFree(a1 + 192, v27);
        v3 = a2;
        v8 = v69;
        if ( (*(_DWORD *)(a2 + 16) & 1) != 0 )
        {
          v36 = v71;
          v37 = v63;
          if ( v71 && v20 - (_DWORD)v63 != v71 )
          {
            v38 = *(_QWORD *)(a1 + 800);
            if ( (*(_BYTE *)(v38 + 6021) & 4) != 0 )
            {
              v39 = v38 + 6024;
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v39, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)v39, 1LL, v30, v31);
              v60 = 0;
              v40 = KeGetCurrentThread();
              if ( (unsigned int)MiGetSystemRegionType(v39) == 1 )
                v41 = MmGetSessionIdEx(v40->ApcState.Process);
              else
                v41 = -1;
              --v40->SpecialApcDisable;
              v42 = ++v40->AbAllocationRegionCount;
              v43 = ((char)v40->AbEntrySummary | (char)v40->AbOrphanedEntrySummary) ^ 0x3F;
              while ( 1 )
              {
                v44 = !_BitScanReverse((unsigned int *)&v45, v43);
                v65 = v45;
                if ( v44 )
                  goto LABEL_67;
                v46 = (__int64)&v40->LockEntries[v45];
                v43 &= ~(1 << v45);
                if ( (*(_BYTE *)(v46 + 26) & 1) != 0
                  && (*(_DWORD *)(v46 + 32) & 1) == 0
                  && (*(_QWORD *)(v46 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v39 & 0x7FFFFFFFFFFFFFFCLL)
                  && *(_DWORD *)(v46 + 40) == v41 )
                {
                  *(_BYTE *)(v46 + 26) &= ~1u;
                  if ( *(_QWORD *)(v46 + 32) )
                    break;
                }
              }
              if ( !v46 )
              {
LABEL_67:
                if ( (*((_DWORD *)&v40->0 + 1) & 0x10000) == 0 )
                  KeBugCheckEx(0x162u, (ULONG_PTR)v40, v39, v41, 0LL);
                goto LABEL_79;
              }
              *(_BYTE *)(v46 + 32) |= 2u;
              if ( *(__int64 *)(v46 + 32) < 0 )
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v46);
              v60 = 0;
              v60 = *(_DWORD *)(v46 + 88) & 0x1FFFF;
              *(_DWORD *)(v46 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v46 + 25) &= ~1u;
              *(_QWORD *)(v46 + 32) = 0LL;
              v47 = (v46 - (__int64)v40 - 800) / 96;
              if ( v42 == 1 )
                v40->AbEntrySummary |= 1 << v47;
              else
                _InterlockedOr8((volatile signed __int8 *)&v40->AbOrphanedEntrySummary, 1 << v47);
LABEL_79:
              --v40->AbAllocationRegionCount;
              KiAbThreadRemoveBoosts(v40, v39, &v60);
              v44 = v40->SpecialApcDisable++ == -1;
              if ( v44 && ($005F0E83B22994B61E86C72E0CE43C71 *)v40->ApcState.ApcListHead[0].Flink != &v40->152 )
                KiCheckForKernelApcDelivery();
              KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
            }
            SMKM_STORE_MGR<SM_TRAITS>::SmEvictKeys(v29, &v72, v71);
            SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*(_QWORD *)(a1 + 800));
            v37 = v72;
            v36 = 0;
            v3 = a2;
            v63 = v72;
            v71 = 0;
          }
          v48 = *(_DWORD **)(a1 + 1920);
          if ( !*v48 || *v48 == 3 && v20 < v48[1] )
          {
            if ( !v36 )
              v37 = v20;
            v71 = v36 + 1;
            v63 = v37;
            v72 = v37;
          }
          goto LABEL_36;
        }
      }
    }
  }
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorCleanup(
    &v62,
    a1);
  return (unsigned int)v11;
}
