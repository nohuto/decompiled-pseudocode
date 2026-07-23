/*
 * XREFs of ?SmFeStoreDelete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x14001ED9C
 * Callers:
 *     ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x14001ECF0 (-SmStoreMgrCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK.c)
 * Callees:
 *     ?SmFeDeleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@PEAUITERATOR@3@PEAUSMKM_FRONTEND_ENTRY@1@@Z @ 0x14002B1F8 (-SmFeDeleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@-$B_TREE@T_SM_PAGE_KE.c)
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x140055B90 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x140055BC8 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeStoreDelete(__int64 a1, int a2)
{
  int v4; // edi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v6; // r14
  __int64 v7; // r8
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned int v10; // ebx
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  struct _KTHREAD *v14; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v16; // r15
  unsigned int v17; // r8d
  bool v18; // zf
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  _KLOCK_ENTRY *v22; // rdi
  __int64 v23; // rdx
  __int16 v24; // ax
  __int64 v26; // rcx
  __int64 v27; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v28; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v29; // [rsp+48h] [rbp-C0h]
  unsigned int v30; // [rsp+50h] [rbp-B8h]
  int v31; // [rsp+54h] [rbp-B4h]
  _QWORD v32[5]; // [rsp+58h] [rbp-B0h] BYREF
  char v33; // [rsp+80h] [rbp-88h] BYREF

  memset(v32, 0, sizeof(v32));
  v32[3] = 0x800000000LL;
  v32[0] = &v33;
  v4 = 0;
  v30 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v6 = a1 + 440;
  ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
  v7 = 0LL;
  v8 = *(_QWORD *)(a1 + 448);
  v28 = 0LL;
  v9 = 0LL;
  v29 = 0LL;
  if ( v8 )
  {
    while ( !*(_BYTE *)(v8 + 3) )
      v8 = *(_QWORD *)(v8 + 8);
    v9 = v8 + 8;
    v28 = v8;
    v29 = v8 + 8;
    v7 = v8;
  }
  v10 = v30;
  while ( 1 )
  {
    if ( v4 )
    {
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
        a1 + 448,
        v10,
        v32,
        0LL);
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
        v26,
        &v28,
        v32);
      v9 = v29;
      v7 = v28;
      v4 = 0;
    }
    if ( !v7 )
      break;
    v9 += 8LL;
    v11 = (unsigned __int16)*(_DWORD *)v7 + 2LL;
    v29 = v9;
    if ( v9 < v7 + 8 * v11 )
      goto LABEL_7;
    v13 = *(_QWORD *)(v7 + 8);
    if ( v13 )
    {
      v9 = v13 + 16;
      v28 = *(_QWORD *)(v7 + 8);
      v29 = v13 + 16;
      v7 = v13;
LABEL_7:
      v12 = v9;
      goto LABEL_8;
    }
    v12 = 0LL;
LABEL_8:
    if ( !v12 )
      break;
    if ( *(unsigned __int16 *)(v12 + 4) == a2 )
    {
      v10 = *(_DWORD *)v12;
      *(_BYTE *)(v12 + 6) = 0;
      SMKM_STORE_MGR<SM_TRAITS>::SmFeDeleteEntry(a1, v32, &v28);
      v9 = v29;
      v7 = v28;
      v4 = 1;
    }
  }
  v30 = v10;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 440);
  LODWORD(v27) = 0;
  v14 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(a1 + 440) == 1 )
    SessionId = MmGetSessionIdEx(v14->ApcState.Process);
  else
    SessionId = -1;
  --v14->SpecialApcDisable;
  v16 = ++v14->AbAllocationRegionCount;
  v17 = ((char)v14->AbEntrySummary | (char)v14->AbOrphanedEntrySummary) ^ 0x3F;
  v18 = !_BitScanReverse((unsigned int *)&v19, v17);
  v31 = v19;
  if ( v18 )
    goto LABEL_38;
  while ( 1 )
  {
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
        break;
    }
    v18 = !_BitScanReverse((unsigned int *)&v19, v17);
    v31 = v19;
    if ( v18 )
      goto LABEL_38;
  }
  if ( !v22 )
  {
LABEL_38:
    if ( (*((_DWORD *)&v14->0 + 1) & 0x8000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v14, v6, SessionId, 0LL);
  }
  else
  {
    v22->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v22->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v14->LockEntries[v21].TreeNode);
    LODWORD(v27) = 0;
    LODWORD(v27) = v22->BoostBitmap.AllFields & 0x1FFFF;
    v22->BoostBitmap.AllFields &= 0xFFFE0000;
    v22->ThreadLocalFlags &= ~1u;
    v22->LockState.0 = 0LL;
    v23 = ((char *)v22 - (char *)v14 - 800) / 96;
    if ( v16 == 1 )
      v14->AbEntrySummary |= 1 << v23;
    else
      _InterlockedOr8((volatile signed __int8 *)&v14->AbOrphanedEntrySummary, 1 << v23);
  }
  --v14->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(v14, v6, &v27);
  v24 = v14->SpecialApcDisable + 1;
  v14->SpecialApcDisable = v24;
  if ( !v24 && ($69CD3F157F9F39B6F7113F2231989901 *)v14->ApcState.ApcListHead[0].Flink != &v14->152 )
    KiCheckForKernelApcDelivery();
  return KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
}
