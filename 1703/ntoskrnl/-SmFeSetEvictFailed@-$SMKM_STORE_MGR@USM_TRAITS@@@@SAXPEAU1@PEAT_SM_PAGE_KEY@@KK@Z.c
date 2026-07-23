/*
 * XREFs of ?SmFeSetEvictFailed@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140249B6C
 * Callers:
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x140121758 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 * Callees:
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

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeSetEvictFailed(__int64 a1, unsigned int *a2, int a3)
{
  unsigned int v3; // ebx
  struct _KTHREAD *CurrentThread; // rax
  int v6; // edi
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  struct _KTHREAD *v13; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v15; // r14
  unsigned int v16; // r8d
  int v17; // eax
  __int64 v18; // rcx
  _KLOCK_ENTRY *v19; // rdi
  bool v20; // zf
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int16 v24; // ax
  unsigned int v26[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v28; // [rsp+48h] [rbp-C0h]
  _QWORD v29[5]; // [rsp+58h] [rbp-B0h] BYREF
  char v30; // [rsp+80h] [rbp-88h] BYREF

  v3 = *a2;
  memset(v29, 0, sizeof(v29));
  v29[3] = 0x800000000LL;
  v29[0] = &v30;
  CurrentThread = KeGetCurrentThread();
  v6 = 0;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403F9BB8, 0LL);
  B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
    qword_1403F9BC0,
    v3,
    (__int64)v29);
  B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
    v7,
    &v27,
    (__int64)v29);
  v8 = v28;
  v9 = v27;
  do
  {
    if ( !v9 )
    {
LABEL_5:
      v12 = 0LL;
      goto LABEL_8;
    }
    v8 += 8LL;
    v10 = (unsigned __int16)*(_DWORD *)v9 + 2LL;
    v28 = v8;
    if ( v8 >= v9 + 8 * v10 )
    {
      v11 = *(_QWORD *)(v9 + 8);
      if ( !v11 )
        goto LABEL_5;
      v8 = v11 + 16;
      v9 = *(_QWORD *)(v9 + 8);
      v28 = v11 + 16;
    }
    v12 = v8;
LABEL_8:
    *(_BYTE *)(v12 + 7) |= 1u;
    ++v6;
    *(_BYTE *)(v12 + 6) = 3;
  }
  while ( v6 != a3 );
  v27 = v9;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403F9BB8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403F9BB8);
  v26[0] = 0;
  v13 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_1403F9BB8) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx(v13->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --v13->SpecialApcDisable;
  v15 = ++v13->AbAllocationRegionCount;
  v16 = ((char)v13->AbEntrySummary | (char)v13->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v20 = !_BitScanReverse((unsigned int *)&v21, v16);
    v26[1] = v21;
    if ( v20 )
      goto LABEL_21;
    v17 = 1 << v21;
    v18 = v21;
    v19 = &v13->LockEntries[v18];
    v16 &= ~v17;
    if ( (v19->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v19->LockState.0 & 1) == 0
      && (*(_QWORD *)&v19->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_1403F9BB8 & 0x7FFFFFFFFFFFFFFCLL)
      && v19->LockState.SessionId == (_DWORD)SessionId )
    {
      v19->AcquiredByte &= ~1u;
      if ( v19->LockState.0 )
        break;
    }
  }
  if ( !v19 )
  {
LABEL_21:
    if ( (*((_DWORD *)&v13->0 + 1) & 0x8000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v13, (ULONG_PTR)&qword_1403F9BB8, (unsigned int)SessionId, 0LL);
    goto LABEL_28;
  }
  v19->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v19->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v13->LockEntries[v18].TreeNode, SessionId);
  v26[0] = 0;
  v26[0] = v19->BoostBitmap.AllFields & 0x1FFFF;
  v19->BoostBitmap.AllFields &= 0xFFFE0000;
  v19->ThreadLocalFlags &= ~1u;
  v19->LockState.0 = 0LL;
  v22 = ((char *)v19 - (char *)v13 - 800) / 96;
  if ( v15 == 1 )
    v13->AbEntrySummary |= 1 << v22;
  else
    _InterlockedOr8((volatile signed __int8 *)&v13->AbOrphanedEntrySummary, 1 << v22);
LABEL_28:
  --v13->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(&v13->Header.Lock, (__int64)&qword_1403F9BB8, v26);
  v24 = v13->SpecialApcDisable + 1;
  v13->SpecialApcDisable = v24;
  if ( !v24 && ($69CD3F157F9F39B6F7113F2231989901 *)v13->ApcState.ApcListHead[0].Flink != &v13->152 )
    KiCheckForKernelApcDelivery(v23);
  return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
}
