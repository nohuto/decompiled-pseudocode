/*
 * XREFs of ?SmFeStoreEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140274BC4
 * Callers:
 *     ?SmEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KPEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x1402747B0 (-SmEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KPEAU-$SMKM_STORE@USM_TRA.c)
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

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeStoreEvictKeys(__int64 a1, unsigned int *a2, int a3)
{
  unsigned int v3; // ebx
  int v6; // edi
  struct _KTHREAD *CurrentThread; // rax
  int v8; // r14d
  ULONG_PTR v9; // rsi
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  struct _KTHREAD *v16; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v18; // r14
  unsigned int v19; // r8d
  int v20; // eax
  __int64 v21; // rcx
  _KLOCK_ENTRY *v22; // rdi
  bool v23; // zf
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v28; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v29; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v30; // [rsp+40h] [rbp-C0h]
  int v31; // [rsp+48h] [rbp-B8h]
  _QWORD v32[5]; // [rsp+50h] [rbp-B0h] BYREF
  char v33; // [rsp+78h] [rbp-88h] BYREF

  v3 = *a2;
  memset(v32, 0, sizeof(v32));
  v32[3] = 0x800000000LL;
  v32[0] = &v33;
  v6 = 0;
  CurrentThread = KeGetCurrentThread();
  v8 = 1;
  --CurrentThread->SpecialApcDisable;
  v9 = a1 + 440;
  ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
  v10 = v30;
  v11 = v29;
  while ( 1 )
  {
    if ( v8 )
    {
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
        (__int64 *)(a1 + 448),
        v3,
        (__int64)v32);
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
        v12,
        &v29,
        (__int64)v32);
      v10 = v30;
      v8 = 0;
      v11 = v29;
    }
    if ( !v11 )
    {
LABEL_7:
      v15 = 0LL;
      goto LABEL_10;
    }
    v10 += 8LL;
    v13 = (unsigned __int16)*(_DWORD *)v11 + 2LL;
    v30 = v10;
    if ( v10 >= v11 + 8 * v13 )
    {
      v14 = *(_QWORD *)(v11 + 8);
      if ( !v14 )
        goto LABEL_7;
      v10 = v14 + 16;
      v29 = *(_QWORD *)(v11 + 8);
      v30 = v14 + 16;
      v11 = v14;
    }
    v15 = v10;
LABEL_10:
    if ( *(_BYTE *)(v15 + 6) == 3 )
    {
      *(_BYTE *)(v15 + 6) = 0;
      SMKM_STORE_MGR<SM_TRAITS>::SmFeDeleteEntry(a1, (__int64)v32, &v29);
      v10 = v30;
      v8 = 1;
      v11 = v29;
    }
    if ( ++v6 == a3 )
      break;
    ++v3;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 440));
  v28 = 0;
  v16 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(a1 + 440) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v16->ApcState.Process);
  else
    SessionId = -1;
  --v16->SpecialApcDisable;
  v18 = ++v16->AbAllocationRegionCount;
  v19 = ((char)v16->AbEntrySummary | (char)v16->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v23 = !_BitScanReverse((unsigned int *)&v24, v19);
    v31 = v24;
    if ( v23 )
      goto LABEL_26;
    v20 = 1 << v24;
    v21 = v24;
    v22 = &v16->LockEntries[v21];
    v19 &= ~v20;
    if ( (v22->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v22->LockState.0 & 1) == 0
      && (*(_QWORD *)&v22->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v9 & 0x7FFFFFFFFFFFFFFCLL)
      && v22->LockState.SessionId == SessionId )
    {
      v22->AcquiredByte &= ~1u;
      if ( v22->LockState.0 )
        break;
    }
  }
  if ( !v22 )
  {
LABEL_26:
    if ( (*((_DWORD *)&v16->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v16, v9, SessionId, 0LL);
    goto LABEL_33;
  }
  v22->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v22->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v16->LockEntries[v21].TreeNode);
  v28 = 0;
  v28 = v22->BoostBitmap.AllFields & 0x1FFFF;
  v22->BoostBitmap.AllFields &= 0xFFFE0000;
  v22->ThreadLocalFlags &= ~1u;
  v22->LockState.0 = 0LL;
  v25 = ((char *)v22 - (char *)v16 - 800) / 96;
  if ( v18 == 1 )
    v16->AbEntrySummary |= 1 << v25;
  else
    _InterlockedOr8((volatile signed __int8 *)&v16->AbOrphanedEntrySummary, 1 << v25);
LABEL_33:
  --v16->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v16, v9, (unsigned int *)&v28);
  v23 = v16->SpecialApcDisable++ == -1;
  if ( v23 && ($B476B70DB57F76B110DA5B9238C3E934 *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
    KiCheckForKernelApcDelivery(v26);
  return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
}
