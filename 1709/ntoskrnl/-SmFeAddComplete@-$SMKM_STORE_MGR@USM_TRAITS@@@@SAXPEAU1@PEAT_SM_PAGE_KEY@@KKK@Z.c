/*
 * XREFs of ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x1402659F4
 * Callers:
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x140265D68 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     ?SmProcessAddCompletion@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@KPEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x140275104 (-SmProcessAddCompletion@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@KPEAU-$SMKM_.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14017D098 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x140262520 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?SmFeDeleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@PEAUITERATOR@3@PEAUSMKM_FRONTEND_ENTRY@1@@Z @ 0x14026668C (-SmFeDeleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@-$B_TREE@T_SM_PAGE_KE.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeAddComplete(__int64 a1, unsigned int *a2, int a3, __int64 a4, char a5)
{
  unsigned int v5; // ebx
  int v8; // edi
  int v9; // r14d
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  struct _KTHREAD *v18; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v20; // r14
  unsigned int v21; // r8d
  int v22; // eax
  __int64 v23; // rcx
  _KLOCK_ENTRY *v24; // rdi
  bool v25; // zf
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v31; // [rsp+40h] [rbp-C0h]
  int v32; // [rsp+48h] [rbp-B8h]
  _QWORD v33[5]; // [rsp+50h] [rbp-B0h] BYREF
  char v34; // [rsp+78h] [rbp-88h] BYREF

  v5 = *a2;
  memset(v33, 0, sizeof(v33));
  v33[3] = 0x800000000LL;
  v8 = 0;
  v33[0] = &v34;
  v9 = 1;
  if ( (a5 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
  }
  v11 = v31;
  v12 = v30;
  while ( 1 )
  {
    if ( v9 )
    {
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
        (__int64 *)(a1 + 448),
        v5,
        (__int64)v33);
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
        v13,
        &v30,
        (__int64)v33);
      v11 = v31;
      v9 = 0;
      v12 = v30;
    }
    if ( !v12 )
    {
LABEL_9:
      v16 = 0LL;
      goto LABEL_12;
    }
    v11 += 8LL;
    v14 = (unsigned __int16)*(_DWORD *)v12 + 2LL;
    v31 = v11;
    if ( v11 >= v12 + 8 * v14 )
    {
      v15 = *(_QWORD *)(v12 + 8);
      if ( !v15 )
        goto LABEL_9;
      v11 = v15 + 16;
      v30 = *(_QWORD *)(v12 + 8);
      v31 = v15 + 16;
      v12 = v15;
    }
    v16 = v11;
LABEL_12:
    if ( (*(_BYTE *)(v16 + 7) & 1) != 0 )
    {
      if ( (a5 & 1) != 0 )
        goto LABEL_15;
LABEL_14:
      *(_BYTE *)(v16 + 6) = 0;
      SMKM_STORE_MGR<SM_TRAITS>::SmFeDeleteEntry(a1, v33, &v30);
      v11 = v31;
      v9 = 1;
      v12 = v30;
      goto LABEL_15;
    }
    if ( *(_BYTE *)(v16 + 6) == 1 )
    {
      if ( (a5 & 1) == 0 )
        goto LABEL_14;
      *(_BYTE *)(v16 + 6) = 3;
    }
LABEL_15:
    if ( ++v8 == a3 )
      break;
    ++v5;
  }
  if ( (a5 & 2) == 0 )
  {
    v17 = a1 + 440;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v17, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v17);
    v29 = 0;
    v18 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v17) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v18->ApcState.Process);
    else
      SessionId = -1;
    --v18->SpecialApcDisable;
    v20 = ++v18->AbAllocationRegionCount;
    v21 = ((char)v18->AbEntrySummary | (char)v18->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v25 = !_BitScanReverse((unsigned int *)&v26, v21);
      v32 = v26;
      if ( v25 )
        goto LABEL_33;
      v22 = 1 << v26;
      v23 = v26;
      v24 = &v18->LockEntries[v23];
      v21 &= ~v22;
      if ( (v24->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v24->LockState.0 & 1) == 0
        && (*(_QWORD *)&v24->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v17 & 0x7FFFFFFFFFFFFFFCLL)
        && v24->LockState.SessionId == SessionId )
      {
        v24->AcquiredByte &= ~1u;
        if ( v24->LockState.0 )
          break;
      }
    }
    if ( !v24 )
    {
LABEL_33:
      if ( (*((_DWORD *)&v18->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v18, v17, SessionId, 0LL);
      goto LABEL_40;
    }
    v24->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v24->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v18->LockEntries[v23].TreeNode);
    v29 = 0;
    v29 = v24->BoostBitmap.AllFields & 0x1FFFF;
    v24->BoostBitmap.AllFields &= 0xFFFE0000;
    v24->ThreadLocalFlags &= ~1u;
    v24->LockState.0 = 0LL;
    v27 = ((char *)v24 - (char *)v18 - 800) / 96;
    if ( v20 == 1 )
      v18->AbEntrySummary |= 1 << v27;
    else
      _InterlockedOr8((volatile signed __int8 *)&v18->AbOrphanedEntrySummary, 1 << v27);
LABEL_40:
    --v18->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v18, v17, (unsigned int *)&v29);
    v25 = v18->SpecialApcDisable++ == -1;
    if ( v25 && ($B476B70DB57F76B110DA5B9238C3E934 *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
      KiCheckForKernelApcDelivery(v28);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
}
