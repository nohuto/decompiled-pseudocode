/*
 * XREFs of ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14027485C
 * Callers:
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x140274F04 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 * Callees:
 *     SmKmStoreDeleteWhenEmpty @ 0x14000C970 (SmKmStoreDeleteWhenEmpty.c)
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14011B054 (SmKmStoreRefFromStoreIndex.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14017D098 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x140262520 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?SmFeDeleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@PEAUITERATOR@3@PEAUSMKM_FRONTEND_ENTRY@1@@Z @ 0x14026668C (-SmFeDeleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@-$B_TREE@T_SM_PAGE_KE.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictComplete(__int64 a1, unsigned int *a2, int a3, int a4)
{
  unsigned int v4; // ebx
  int v7; // r15d
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v9; // rsi
  __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdi
  struct _KEVENT *v14; // rcx
  struct _KTHREAD *v15; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v17; // r15
  unsigned int v18; // r8d
  bool v19; // zf
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  _KLOCK_ENTRY *v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 *v26; // rax
  __int64 v27; // rcx
  unsigned int v29[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v30; // [rsp+38h] [rbp-C8h]
  __int64 v31; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v32; // [rsp+48h] [rbp-B8h]
  _QWORD v33[5]; // [rsp+50h] [rbp-B0h] BYREF
  char v34; // [rsp+78h] [rbp-88h] BYREF

  v4 = *a2;
  v30 = a4;
  memset(v33, 0, sizeof(v33));
  v33[3] = 0x800000000LL;
  v33[0] = &v34;
  v7 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v9 = (volatile signed __int64 *)(a1 + 440);
  ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
  while ( 1 )
  {
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
      (__int64 *)(a1 + 448),
      v4,
      (__int64)v33);
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
      v10,
      &v31,
      (__int64)v33);
    if ( !v31 )
      goto LABEL_5;
    v11 = v32 + 8;
    v12 = (unsigned __int16)*(_DWORD *)v31 + 2LL;
    v32 = v11;
    if ( v11 >= v31 + 8 * v12 )
    {
      v13 = *(_QWORD *)(v31 + 8);
      if ( v13 )
      {
        v31 = *(_QWORD *)(v31 + 8);
        v11 = v13 + 16;
        v32 = v11;
        goto LABEL_7;
      }
LABEL_5:
      v11 = 0LL;
    }
LABEL_7:
    v14 = *(struct _KEVENT **)(a1 + 1656);
    if ( v14 && *(_DWORD *)(a1 + 1648) == *(_DWORD *)v11 )
      KeSetEvent(v14, 0, 0);
    *(_BYTE *)(v11 + 6) = 0;
    SMKM_STORE_MGR<SM_TRAITS>::SmFeDeleteEntry(a1, (__int64)v33, &v31);
    if ( ++v7 == a3 )
      break;
    ++v4;
  }
  if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 440));
  v29[0] = 0;
  v15 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(a1 + 440) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v15->ApcState.Process);
  else
    SessionId = -1;
  --v15->SpecialApcDisable;
  v17 = ++v15->AbAllocationRegionCount;
  v18 = ((char)v15->AbEntrySummary | (char)v15->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v19 = !_BitScanReverse((unsigned int *)&v20, v18);
    v29[1] = v20;
    if ( v19 )
      break;
    v21 = 1 << v20;
    v22 = v20;
    v23 = &v15->LockEntries[v22];
    v18 &= ~v21;
    if ( (v23->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v23->LockState.0 & 1) == 0
      && (*(_QWORD *)&v23->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)v9 & 0x7FFFFFFFFFFFFFFCLL)
      && v23->LockState.SessionId == SessionId )
    {
      v23->AcquiredByte &= ~1u;
      if ( v23->LockState.0 )
      {
        if ( v23 )
        {
          v23->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v23->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v15->LockEntries[v22].TreeNode);
          v29[0] = 0;
          v29[0] = v23->BoostBitmap.AllFields & 0x1FFFF;
          v23->BoostBitmap.AllFields &= 0xFFFE0000;
          v23->ThreadLocalFlags &= ~1u;
          v23->LockState.0 = 0LL;
          v24 = ((char *)v23 - (char *)v15 - 800) / 96;
          if ( v17 == 1 )
            v15->AbEntrySummary |= 1 << v24;
          else
            _InterlockedOr8((volatile signed __int8 *)&v15->AbOrphanedEntrySummary, 1 << v24);
          goto LABEL_30;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v15->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v15, a1 + 440, SessionId, 0LL);
LABEL_30:
  --v15->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v15, a1 + 440, v29);
  v19 = v15->SpecialApcDisable++ == -1;
  if ( v19 && ($B476B70DB57F76B110DA5B9238C3E934 *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
    KiCheckForKernelApcDelivery(v25);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  v26 = (__int64 *)SmKmStoreRefFromStoreIndex(a1, v30 & 0x3FF);
  return SmKmStoreDeleteWhenEmpty(v27, *v26);
}
