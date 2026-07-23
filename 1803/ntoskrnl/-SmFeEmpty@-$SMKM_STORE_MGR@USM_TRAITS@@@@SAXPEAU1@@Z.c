/*
 * XREFs of ?SmFeEmpty@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402A2B28
 * Callers:
 *     ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x14009A8E0 (-SmStoreMgrCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ?BTreeNodeFree@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@@Z @ 0x1402A23A4 (-BTreeNodeFree@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeEmpty(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v3; // rsi
  __int64 v4; // r8
  __int64 v5; // r9
  char *v6; // rdx
  struct _KTHREAD *v7; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v9; // bp
  unsigned int v10; // r8d
  int v11; // eax
  __int64 v12; // rcx
  _KLOCK_ENTRY *v13; // rdi
  bool v14; // zf
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v18; // [rsp+50h] [rbp+8h] BYREF
  int v19; // [rsp+58h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = a1 + 440;
  ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
  v6 = *(char **)(a1 + 448);
  if ( v6 )
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNodeFree(
      a1 + 448,
      v6);
  *(_QWORD *)(a1 + 448) = 0LL;
  *(_QWORD *)(a1 + 456) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3, (__int64)v6, v4, v5);
  v18 = 0;
  v7 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v3) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx((__int64)v7->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --v7->SpecialApcDisable;
  v9 = ++v7->AbAllocationRegionCount;
  v10 = ((char)v7->AbEntrySummary | (char)v7->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v14 = !_BitScanReverse((unsigned int *)&v15, v10);
    v19 = v15;
    if ( v14 )
      goto LABEL_15;
    v11 = 1 << v15;
    v12 = v15;
    v13 = &v7->LockEntries[v12];
    v10 &= ~v11;
    if ( (v13->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v13->LockState.0 & 1) == 0
      && (*(_QWORD *)&v13->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v3 & 0x7FFFFFFFFFFFFFFCLL)
      && v13->LockState.SessionId == (_DWORD)SessionId )
    {
      v13->AcquiredByte &= ~1u;
      if ( v13->LockState.0 )
        break;
    }
  }
  if ( !v13 )
  {
LABEL_15:
    if ( (*((_DWORD *)&v7->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v7, v3, (unsigned int)SessionId, 0LL);
    goto LABEL_22;
  }
  v13->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v13->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v7->LockEntries[v12].TreeNode, SessionId);
  v18 = 0;
  v18 = v13->BoostBitmap.AllFields & 0x1FFFF;
  v13->BoostBitmap.AllFields &= 0xFFFE0000;
  v13->ThreadLocalFlags &= ~1u;
  v13->LockState.0 = 0LL;
  v16 = ((char *)v13 - (char *)v7 - 800) / 96;
  if ( v9 == 1 )
    v7->AbEntrySummary |= 1 << v16;
  else
    _InterlockedOr8((volatile signed __int8 *)&v7->AbOrphanedEntrySummary, 1 << v16);
LABEL_22:
  --v7->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v7, v3, (__int64)&v18);
  v14 = v7->SpecialApcDisable++ == -1;
  if ( v14 && ($005F0E83B22994B61E86C72E0CE43C71 *)v7->ApcState.ApcListHead[0].Flink != &v7->152 )
    KiCheckForKernelApcDelivery();
  return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
}
