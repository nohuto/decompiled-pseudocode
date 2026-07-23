/*
 * XREFs of ?SmFeStoreEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14024ECBC
 * Callers:
 *     ?SmEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KPEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x14024EC48 (-SmEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KPEAU-$SMKM_STORE@USM_TRA.c)
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

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeStoreEvictKeys(__int64 a1, unsigned int *a2, int a3)
{
  unsigned int v3; // ebx
  int v6; // edi
  struct _KTHREAD *CurrentThread; // rax
  int v8; // r15d
  volatile signed __int64 *v9; // r14
  __int64 v10; // r9
  unsigned __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  struct _KTHREAD *v17; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v19; // r15
  unsigned int v20; // r8d
  int v21; // eax
  __int64 v22; // rcx
  _KLOCK_ENTRY *v23; // rdi
  bool v24; // zf
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int16 v28; // ax
  int v30; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v31; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v32; // [rsp+40h] [rbp-C0h]
  int v33; // [rsp+48h] [rbp-B8h]
  _QWORD v34[5]; // [rsp+50h] [rbp-B0h] BYREF
  char v35; // [rsp+78h] [rbp-88h] BYREF

  v3 = *a2;
  memset(v34, 0, sizeof(v34));
  v34[3] = 0x800000000LL;
  v6 = 0;
  v34[0] = &v35;
  CurrentThread = KeGetCurrentThread();
  v8 = 1;
  --CurrentThread->SpecialApcDisable;
  v9 = (volatile signed __int64 *)(a1 + 440);
  ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
  v11 = v32;
  v12 = v31;
  while ( 1 )
  {
    if ( v8 )
    {
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
        (__int64 *)(a1 + 448),
        v3,
        (__int64)v34);
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
        v13,
        &v31,
        (__int64)v34);
      v11 = v32;
      v8 = 0;
      v12 = v31;
    }
    if ( !v12 )
    {
LABEL_7:
      v16 = 0LL;
      goto LABEL_10;
    }
    v11 += 8LL;
    v14 = (unsigned __int16)*(_DWORD *)v12 + 2LL;
    v32 = v11;
    if ( v11 >= v12 + 8 * v14 )
    {
      v15 = *(_QWORD *)(v12 + 8);
      if ( !v15 )
        goto LABEL_7;
      v11 = v15 + 16;
      v31 = *(_QWORD *)(v12 + 8);
      v32 = v15 + 16;
      v12 = v15;
    }
    v16 = v11;
LABEL_10:
    if ( *(_BYTE *)(v16 + 6) == 3 )
    {
      *(_BYTE *)(v16 + 6) = 0;
      SMKM_STORE_MGR<SM_TRAITS>::SmFeDeleteEntry(a1, (__int64)v34, &v31, v10);
      v11 = v32;
      v8 = 1;
      v12 = v31;
    }
    if ( ++v6 == a3 )
      break;
    ++v3;
  }
  if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 440));
  v30 = 0;
  v17 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(a1 + 440) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx(v17->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --v17->SpecialApcDisable;
  v19 = ++v17->AbAllocationRegionCount;
  v20 = ((char)v17->AbEntrySummary | (char)v17->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v24 = !_BitScanReverse((unsigned int *)&v25, v20);
    v33 = v25;
    if ( v24 )
      goto LABEL_26;
    v21 = 1 << v25;
    v22 = v25;
    v23 = &v17->LockEntries[v22];
    v20 &= ~v21;
    if ( (v23->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v23->LockState.0 & 1) == 0
      && (*(_QWORD *)&v23->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)v9 & 0x7FFFFFFFFFFFFFFCLL)
      && v23->LockState.SessionId == (_DWORD)SessionId )
    {
      v23->AcquiredByte &= ~1u;
      if ( v23->LockState.0 )
        break;
    }
  }
  if ( !v23 )
  {
LABEL_26:
    if ( (*((_DWORD *)&v17->0 + 1) & 0x8000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v17, a1 + 440, (unsigned int)SessionId, 0LL);
    goto LABEL_33;
  }
  v23->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v23->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v17->LockEntries[v22].TreeNode, SessionId);
  v30 = 0;
  v30 = v23->BoostBitmap.AllFields & 0x1FFFF;
  v23->BoostBitmap.AllFields &= 0xFFFE0000;
  v23->ThreadLocalFlags &= ~1u;
  v23->LockState.0 = 0LL;
  v26 = ((char *)v23 - (char *)v17 - 800) / 96;
  if ( v19 == 1 )
    v17->AbEntrySummary |= 1 << v26;
  else
    _InterlockedOr8((volatile signed __int8 *)&v17->AbOrphanedEntrySummary, 1 << v26);
LABEL_33:
  --v17->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(&v17->Header.Lock, a1 + 440, (unsigned int *)&v30);
  v28 = v17->SpecialApcDisable + 1;
  v17->SpecialApcDisable = v28;
  if ( !v28 && ($69CD3F157F9F39B6F7113F2231989901 *)v17->ApcState.ApcListHead[0].Flink != &v17->152 )
    KiCheckForKernelApcDelivery(v27);
  return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
}
