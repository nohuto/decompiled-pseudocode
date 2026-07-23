/*
 * XREFs of ?SmFeStoreDelete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x14000429C
 * Callers:
 *     ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x1400041F0 (-SmStoreMgrCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK.c)
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

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeStoreDelete(__int64 a1, int a2)
{
  int v4; // edi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v6; // rsi
  __int64 v7; // r8
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned int v10; // ebx
  struct _KTHREAD *v11; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v13; // r14
  unsigned int v14; // r8d
  bool v15; // zf
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  _KLOCK_ENTRY *v19; // rdi
  __int64 v20; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rcx
  int v26; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v28; // [rsp+40h] [rbp-C0h]
  unsigned int v29; // [rsp+48h] [rbp-B8h]
  int v30; // [rsp+4Ch] [rbp-B4h]
  _QWORD v31[5]; // [rsp+50h] [rbp-B0h] BYREF
  char v32; // [rsp+78h] [rbp-88h] BYREF

  memset(v31, 0, sizeof(v31));
  v31[3] = 0x800000000LL;
  v31[0] = &v32;
  v4 = 0;
  v29 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v6 = a1 + 440;
  ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
  v7 = 0LL;
  v8 = *(_QWORD *)(a1 + 448);
  v9 = 0LL;
  v28 = 0LL;
  v27 = 0LL;
  if ( v8 )
  {
    while ( !*(_BYTE *)(v8 + 3) )
      v8 = *(_QWORD *)(v8 + 8);
    v9 = v8 + 8;
    v27 = v8;
    v28 = v8 + 8;
    v7 = v8;
  }
  v10 = v29;
  while ( 1 )
  {
    if ( v4 )
    {
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
        a1 + 448,
        v10,
        v31);
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
        v22,
        &v27,
        v31);
      v9 = v28;
      v4 = 0;
      v7 = v27;
    }
    if ( !v7 )
      break;
    v9 += 8LL;
    v23 = (unsigned __int16)*(_DWORD *)v7 + 2LL;
    v28 = v9;
    if ( v9 >= v7 + 8 * v23 )
    {
      v24 = *(_QWORD *)(v7 + 8);
      if ( !v24 )
      {
        v25 = 0LL;
        goto LABEL_37;
      }
      v9 = v24 + 16;
      v27 = *(_QWORD *)(v7 + 8);
      v28 = v24 + 16;
      v7 = v24;
    }
    v25 = v9;
LABEL_37:
    if ( !v25 )
      break;
    if ( *(unsigned __int16 *)(v25 + 4) == a2 )
    {
      v10 = *(_DWORD *)v25;
      *(_BYTE *)(v25 + 6) = 0;
      SMKM_STORE_MGR<SM_TRAITS>::SmFeDeleteEntry(a1, v31, &v27);
      v9 = v28;
      v4 = 1;
      v7 = v27;
    }
  }
  v29 = v10;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 440);
  v26 = 0;
  v11 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(a1 + 440) == 1 )
    SessionId = MmGetSessionIdEx(v11->ApcState.Process);
  else
    SessionId = -1;
  --v11->SpecialApcDisable;
  v13 = ++v11->AbAllocationRegionCount;
  v14 = ((char)v11->AbEntrySummary | (char)v11->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v15 = !_BitScanReverse((unsigned int *)&v16, v14);
    v30 = v16;
    if ( v15 )
      break;
    v17 = 1 << v16;
    v18 = v16;
    v19 = &v11->LockEntries[v18];
    v14 &= ~v17;
    if ( (v19->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v19->LockState.0 & 1) == 0
      && (*(_QWORD *)&v19->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v6 & 0x7FFFFFFFFFFFFFFCLL)
      && v19->LockState.SessionId == SessionId )
    {
      v19->AcquiredByte &= ~1u;
      if ( v19->LockState.0 )
      {
        if ( v19 )
        {
          v19->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v19->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v11->LockEntries[v18].TreeNode);
          v26 = 0;
          v26 = v19->BoostBitmap.AllFields & 0x1FFFF;
          v19->BoostBitmap.AllFields &= 0xFFFE0000;
          v19->ThreadLocalFlags &= ~1u;
          v19->LockState.0 = 0LL;
          v20 = ((char *)v19 - (char *)v11 - 800) / 96;
          if ( v13 == 1 )
            v11->AbEntrySummary |= 1 << v20;
          else
            _InterlockedOr8((volatile signed __int8 *)&v11->AbOrphanedEntrySummary, 1 << v20);
          goto LABEL_22;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v11->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v11, v6, SessionId, 0LL);
LABEL_22:
  --v11->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(v11, v6, &v26);
  v15 = v11->SpecialApcDisable++ == -1;
  if ( v15 && ($B476B70DB57F76B110DA5B9238C3E934 *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
    KiCheckForKernelApcDelivery();
  return KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
}
