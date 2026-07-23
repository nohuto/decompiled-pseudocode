/*
 * XREFs of ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1400BC2F8
 * Callers:
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14008FE10 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14008F3EC (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14008F424 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140090324 (SmKmStoreRefFromStoreIndex.c)
 *     ?SmFeDeleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@PEAUITERATOR@3@PEAUSMKM_FRONTEND_ENTRY@1@@Z @ 0x1400BC648 (-SmFeDeleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@-$B_TREE@T_SM_PAGE_KE.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x1400BC874 (SmKmStoreDeleteWhenEmpty.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
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
  struct _KEVENT *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  struct _KTHREAD *v17; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v19; // r15
  unsigned int v20; // r8d
  bool v21; // zf
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  _KLOCK_ENTRY *v25; // rdi
  __int64 v26; // rdx
  _QWORD *v27; // rax
  __int64 v28; // rcx
  __int64 v30; // rcx
  _DWORD v31[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v32; // [rsp+38h] [rbp-C8h]
  __int64 v33; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v34; // [rsp+48h] [rbp-B8h]
  _QWORD v35[5]; // [rsp+50h] [rbp-B0h] BYREF
  char v36; // [rsp+78h] [rbp-88h] BYREF

  v4 = *a2;
  v32 = a4;
  memset(v35, 0, sizeof(v35));
  v35[3] = 0x800000000LL;
  v35[0] = &v36;
  v7 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v9 = (volatile signed __int64 *)(a1 + 440);
  ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
  while ( 1 )
  {
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
      a1 + 448,
      v4,
      (__int64)v35);
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
      v10,
      &v33,
      (__int64)v35);
    if ( v33 )
    {
      v11 = v34 + 8;
      v12 = (unsigned __int16)*(_DWORD *)v33 + 2LL;
      v34 = v11;
      if ( v11 >= v33 + 8 * v12 )
      {
        v30 = *(_QWORD *)(v33 + 8);
        if ( v30 )
        {
          v33 = *(_QWORD *)(v33 + 8);
          v34 = v30 + 16;
        }
        v11 = (v30 + 16) & -(__int64)(v30 != 0);
      }
    }
    else
    {
      v11 = 0LL;
    }
    v13 = *(struct _KEVENT **)(a1 + 1656);
    if ( v13 && *(_DWORD *)(a1 + 1648) == *(_DWORD *)v11 )
      KeSetEvent(v13, 0, 0);
    *(_BYTE *)(v11 + 6) = 0;
    SMKM_STORE_MGR<SM_TRAITS>::SmFeDeleteEntry(a1, v35, &v33);
    if ( ++v7 == a3 )
      break;
    ++v4;
  }
  if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 440), v14, v15, v16);
  v31[0] = 0;
  v17 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(a1 + 440) == 1 )
    SessionId = MmGetSessionIdEx(v17->ApcState.Process);
  else
    SessionId = -1;
  --v17->SpecialApcDisable;
  v19 = ++v17->AbAllocationRegionCount;
  v20 = ((char)v17->AbEntrySummary | (char)v17->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v21 = !_BitScanReverse((unsigned int *)&v22, v20);
    v31[1] = v22;
    if ( v21 )
      break;
    v23 = 1 << v22;
    v24 = v22;
    v25 = &v17->LockEntries[v24];
    v20 &= ~v23;
    if ( (v25->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v25->LockState.0 & 1) == 0
      && (*(_QWORD *)&v25->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)v9 & 0x7FFFFFFFFFFFFFFCLL)
      && v25->LockState.SessionId == SessionId )
    {
      v25->AcquiredByte &= ~1u;
      if ( v25->LockState.0 )
      {
        if ( v25 )
        {
          v25->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v25->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v17->LockEntries[v24].TreeNode);
          v31[0] = 0;
          v31[0] = v25->BoostBitmap.AllFields & 0x1FFFF;
          v25->BoostBitmap.AllFields &= 0xFFFE0000;
          v25->ThreadLocalFlags &= ~1u;
          v25->LockState.0 = 0LL;
          v26 = ((char *)v25 - (char *)v17 - 800) / 96;
          if ( v19 == 1 )
            v17->AbEntrySummary |= 1 << v26;
          else
            _InterlockedOr8((volatile signed __int8 *)&v17->AbOrphanedEntrySummary, 1 << v26);
          goto LABEL_23;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v17->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v17, a1 + 440, SessionId, 0LL);
LABEL_23:
  --v17->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(v17, a1 + 440, v31);
  v21 = v17->SpecialApcDisable++ == -1;
  if ( v21 && ($005F0E83B22994B61E86C72E0CE43C71 *)v17->ApcState.ApcListHead[0].Flink != &v17->152 )
    KiCheckForKernelApcDelivery();
  KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
  v27 = (_QWORD *)SmKmStoreRefFromStoreIndex(a1, v32 & 0x3FF);
  return SmKmStoreDeleteWhenEmpty(v28, *v27, 0LL);
}
