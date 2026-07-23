/*
 * XREFs of ?SmFeEmpty@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140266750
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
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ?BTreeNodeFree@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@@Z @ 0x140262D20 (-BTreeNodeFree@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeEmpty(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v3; // rsi
  char *v4; // rdx
  struct _KTHREAD *v5; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v7; // bp
  unsigned int v8; // r8d
  int v9; // eax
  __int64 v10; // rcx
  _KLOCK_ENTRY *v11; // rdi
  bool v12; // zf
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v17; // [rsp+50h] [rbp+8h] BYREF
  int v18; // [rsp+58h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = a1 + 440;
  ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
  v4 = *(char **)(a1 + 448);
  if ( v4 )
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNodeFree(
      a1 + 448,
      v4);
  *(_QWORD *)(a1 + 448) = 0LL;
  *(_QWORD *)(a1 + 456) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  v17 = 0;
  v5 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v3) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v5->ApcState.Process);
  else
    SessionId = -1;
  --v5->SpecialApcDisable;
  v7 = ++v5->AbAllocationRegionCount;
  v8 = ((char)v5->AbEntrySummary | (char)v5->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v12 = !_BitScanReverse((unsigned int *)&v13, v8);
    v18 = v13;
    if ( v12 )
      goto LABEL_15;
    v9 = 1 << v13;
    v10 = v13;
    v11 = &v5->LockEntries[v10];
    v8 &= ~v9;
    if ( (v11->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v11->LockState.0 & 1) == 0
      && (*(_QWORD *)&v11->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v3 & 0x7FFFFFFFFFFFFFFCLL)
      && v11->LockState.SessionId == SessionId )
    {
      v11->AcquiredByte &= ~1u;
      if ( v11->LockState.0 )
        break;
    }
  }
  if ( !v11 )
  {
LABEL_15:
    if ( (*((_DWORD *)&v5->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v5, v3, SessionId, 0LL);
    goto LABEL_22;
  }
  v11->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v11->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v5->LockEntries[v10].TreeNode);
  v17 = 0;
  v17 = v11->BoostBitmap.AllFields & 0x1FFFF;
  v11->BoostBitmap.AllFields &= 0xFFFE0000;
  v11->ThreadLocalFlags &= ~1u;
  v11->LockState.0 = 0LL;
  v14 = ((char *)v11 - (char *)v5 - 800) / 96;
  if ( v7 == 1 )
    v5->AbEntrySummary |= 1 << v14;
  else
    _InterlockedOr8((volatile signed __int8 *)&v5->AbOrphanedEntrySummary, 1 << v14);
LABEL_22:
  --v5->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v5, v3, (unsigned int *)&v17);
  v12 = v5->SpecialApcDisable++ == -1;
  if ( v12 && ($B476B70DB57F76B110DA5B9238C3E934 *)v5->ApcState.ApcListHead[0].Flink != &v5->152 )
    KiCheckForKernelApcDelivery(v15);
  return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
}
