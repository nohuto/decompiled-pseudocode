/*
 * XREFs of ?SmFeStoreDelete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x14009A974
 * Callers:
 *     ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x14009A8E0 (-SmStoreMgrCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14008F3EC (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14008F424 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     ?SmFeDeleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@PEAUITERATOR@3@PEAUSMKM_FRONTEND_ENTRY@1@@Z @ 0x1400BC648 (-SmFeDeleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@-$B_TREE@T_SM_PAGE_KE.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeStoreDelete(__int64 a1, int a2)
{
  int v4; // edi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v6; // rsi
  unsigned __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rcx
  struct _KTHREAD *v14; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v16; // r14
  unsigned int v17; // r8d
  bool v18; // zf
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  _KLOCK_ENTRY *v22; // rdi
  __int64 v23; // rdx
  __int64 v25; // rcx
  int v26; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v27; // [rsp+34h] [rbp-CCh]
  __int64 v28; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v29; // [rsp+40h] [rbp-C0h]
  int v30; // [rsp+48h] [rbp-B8h]
  _QWORD v31[5]; // [rsp+50h] [rbp-B0h] BYREF
  char v32; // [rsp+78h] [rbp-88h] BYREF

  memset(v31, 0, sizeof(v31));
  v31[3] = 0x800000000LL;
  v31[0] = &v32;
  v4 = 0;
  v27 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v6 = a1 + 440;
  ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
  v9 = 0LL;
  v10 = *(_QWORD *)(a1 + 448);
  v28 = 0LL;
  v29 = 0LL;
  if ( v10 )
  {
    while ( !*(_BYTE *)(v10 + 3) )
      v10 = *(_QWORD *)(v10 + 8);
    v9 = v10;
    v28 = v10;
    v29 = v10 + 8;
  }
  v11 = v27;
  while ( 1 )
  {
    if ( v4 )
    {
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
        a1 + 448,
        v11,
        (__int64)v31);
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
        v25,
        &v28,
        (__int64)v31);
      v9 = v28;
      v4 = 0;
    }
    if ( !v9 )
      break;
    v7 = v29 + 8;
    v12 = (unsigned __int16)*(_DWORD *)v9 + 2LL;
    v29 = v7;
    if ( v7 >= v9 + 8 * v12 )
    {
      v13 = *(_QWORD *)(v9 + 8);
      if ( v13 )
      {
        v28 = *(_QWORD *)(v9 + 8);
        v29 = v13 + 16;
        v9 = v13;
      }
      v7 = (v13 + 16) & -(__int64)(v13 != 0);
    }
    if ( !v7 )
      break;
    if ( *(unsigned __int16 *)(v7 + 4) == a2 )
    {
      v11 = *(_DWORD *)v7;
      *(_BYTE *)(v7 + 6) = 0;
      SMKM_STORE_MGR<SM_TRAITS>::SmFeDeleteEntry(a1, v31, &v28);
      v9 = v28;
      v4 = 1;
    }
  }
  v27 = v11;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 440), v9, v7, v8);
  v26 = 0;
  v14 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(a1 + 440) == 1 )
    SessionId = MmGetSessionIdEx(v14->ApcState.Process);
  else
    SessionId = -1;
  --v14->SpecialApcDisable;
  v16 = ++v14->AbAllocationRegionCount;
  v17 = ((char)v14->AbEntrySummary | (char)v14->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v18 = !_BitScanReverse((unsigned int *)&v19, v17);
    v30 = v19;
    if ( v18 )
      break;
    v20 = 1 << v19;
    v21 = v19;
    v22 = &v14->LockEntries[v21];
    v17 &= ~v20;
    if ( (v22->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v22->LockState.0 & 1) == 0
      && (*(_QWORD *)&v22->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v6 & 0x7FFFFFFFFFFFFFFCLL)
      && v22->LockState.SessionId == SessionId )
    {
      v22->AcquiredByte &= ~1u;
      if ( v22->LockState.0 )
      {
        if ( v22 )
        {
          v22->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v22->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v14->LockEntries[v21].TreeNode);
          v26 = 0;
          v26 = v22->BoostBitmap.AllFields & 0x1FFFF;
          v22->BoostBitmap.AllFields &= 0xFFFE0000;
          v22->ThreadLocalFlags &= ~1u;
          v22->LockState.0 = 0LL;
          v23 = ((char *)v22 - (char *)v14 - 800) / 96;
          if ( v16 == 1 )
            v14->AbEntrySummary |= 1 << v23;
          else
            _InterlockedOr8((volatile signed __int8 *)&v14->AbOrphanedEntrySummary, 1 << v23);
          goto LABEL_29;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v14->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v14, v6, SessionId, 0LL);
LABEL_29:
  --v14->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(v14, v6, &v26);
  v18 = v14->SpecialApcDisable++ == -1;
  if ( v18 && ($005F0E83B22994B61E86C72E0CE43C71 *)v14->ApcState.ApcListHead[0].Flink != &v14->152 )
    KiCheckForKernelApcDelivery();
  return KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
}
