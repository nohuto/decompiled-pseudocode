/*
 * XREFs of ?SmFeEvictInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x140121970
 * Callers:
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x140121758 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x140055BC8 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     ?SmFeEvictUpdatePass@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@@Z @ 0x140121C28 (-SmFeEvictUpdatePass@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2PEAUSEARCH_R.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictInitiate(__int64 a1, unsigned int *a2, int a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int v8; // ecx
  unsigned int updated; // r15d
  struct _KTHREAD *v10; // rbx
  unsigned int SessionId; // r8d
  unsigned __int8 v12; // r14
  __int64 v13; // rdx
  bool v14; // zf
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  _KLOCK_ENTRY *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int16 v21; // ax
  unsigned int v23[4]; // [rsp+30h] [rbp-A9h] BYREF
  _QWORD v24[5]; // [rsp+40h] [rbp-99h] BYREF
  char v25; // [rsp+68h] [rbp-71h] BYREF

  memset(v24, 0, sizeof(v24));
  v24[0] = &v25;
  v24[3] = 0x800000000LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403F9BB8, 0LL);
  B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
    qword_1403F9BC0,
    *a2,
    (__int64)v24);
  updated = SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictUpdatePass(v8, (_DWORD)a2, a3, a4, (__int64)v24);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403F9BB8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403F9BB8);
  v23[0] = 0;
  v10 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_1403F9BB8) == 1 )
    SessionId = MmGetSessionIdEx(v10->ApcState.Process);
  else
    SessionId = -1;
  --v10->SpecialApcDisable;
  v12 = ++v10->AbAllocationRegionCount;
  LODWORD(v13) = ((char)v10->AbEntrySummary | (char)v10->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v14 = !_BitScanReverse((unsigned int *)&v15, v13);
    v23[1] = v15;
    if ( v14 )
      break;
    v16 = 1 << v15;
    v17 = v15;
    v18 = &v10->LockEntries[v17];
    v13 = ~v16 & (unsigned int)v13;
    if ( (v18->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v18->LockState.0 & 1) == 0
      && (*(_QWORD *)&v18->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_1403F9BB8 & 0x7FFFFFFFFFFFFFFCLL)
      && v18->LockState.SessionId == SessionId )
    {
      v18->AcquiredByte &= ~1u;
      if ( v18->LockState.0 )
      {
        if ( v18 )
        {
          v18->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v18->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v10->LockEntries[v17].TreeNode, v13);
          v23[0] = 0;
          v23[0] = v18->BoostBitmap.AllFields & 0x1FFFF;
          v18->BoostBitmap.AllFields &= 0xFFFE0000;
          v18->ThreadLocalFlags &= ~1u;
          v18->LockState.0 = 0LL;
          v19 = ((char *)v18 - (char *)v10 - 800) / 96;
          if ( v12 == 1 )
            v10->AbEntrySummary |= 1 << v19;
          else
            _InterlockedOr8((volatile signed __int8 *)&v10->AbOrphanedEntrySummary, 1 << v19);
          goto LABEL_17;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v10->0 + 1) & 0x8000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v10, (ULONG_PTR)&qword_1403F9BB8, SessionId, 0LL);
LABEL_17:
  --v10->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(&v10->Header.Lock, (__int64)&qword_1403F9BB8, v23);
  v21 = v10->SpecialApcDisable + 1;
  v10->SpecialApcDisable = v21;
  if ( !v21 && ($69CD3F157F9F39B6F7113F2231989901 *)v10->ApcState.ApcListHead[0].Flink != &v10->152 )
    KiCheckForKernelApcDelivery(v20);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return updated;
}
