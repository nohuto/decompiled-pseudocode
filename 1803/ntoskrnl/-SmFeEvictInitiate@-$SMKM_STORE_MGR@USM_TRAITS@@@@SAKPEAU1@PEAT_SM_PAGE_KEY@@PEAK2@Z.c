/*
 * XREFs of ?SmFeEvictInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x140096E64
 * Callers:
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x140096C50 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14008F424 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     ?SmFeEvictUpdatePass@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@@Z @ 0x140097108 (-SmFeEvictUpdatePass@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2PEAUSEARCH_R.c)
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

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictInitiate(__int64 a1, unsigned int *a2, int a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int updated; // r14d
  struct _KTHREAD *v13; // rbx
  unsigned int SessionId; // r8d
  unsigned __int8 v15; // si
  unsigned int v16; // edx
  bool v17; // zf
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  _KLOCK_ENTRY *v21; // rdi
  __int64 v22; // rdx
  _DWORD v24[4]; // [rsp+30h] [rbp-A9h] BYREF
  ULONG_PTR v25[5]; // [rsp+40h] [rbp-99h] BYREF
  char v26; // [rsp+68h] [rbp-71h] BYREF

  memset(v25, 0, sizeof(v25));
  v25[3] = 0x800000000LL;
  v25[0] = (ULONG_PTR)&v26;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140465B78, 0LL);
  B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
    (__int64)&unk_140465B80,
    *a2,
    (__int64)v25);
  updated = SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictUpdatePass(v8, (_DWORD)a2, a3, a4, (__int64)v25);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140465B78, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140465B78, v9, v10, v11);
  v24[0] = 0;
  v13 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(&qword_140465B78) == 1 )
    SessionId = MmGetSessionIdEx(v13->ApcState.Process);
  else
    SessionId = -1;
  --v13->SpecialApcDisable;
  v15 = ++v13->AbAllocationRegionCount;
  v16 = ((char)v13->AbEntrySummary | (char)v13->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v17 = !_BitScanReverse((unsigned int *)&v18, v16);
    v24[1] = v18;
    if ( v17 )
      break;
    v19 = 1 << v18;
    v20 = v18;
    v21 = &v13->LockEntries[v20];
    v16 &= ~v19;
    if ( (v21->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v21->LockState.0 & 1) == 0
      && (*(_QWORD *)&v21->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140465B78 & 0x7FFFFFFFFFFFFFFCLL)
      && v21->LockState.SessionId == SessionId )
    {
      v21->AcquiredByte &= ~1u;
      if ( v21->LockState.0 )
      {
        if ( v21 )
        {
          v21->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v21->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v13->LockEntries[v20].TreeNode);
          v24[0] = 0;
          v24[0] = v21->BoostBitmap.AllFields & 0x1FFFF;
          v21->BoostBitmap.AllFields &= 0xFFFE0000;
          v21->ThreadLocalFlags &= ~1u;
          v21->LockState.0 = 0LL;
          v22 = ((char *)v21 - (char *)v13 - 800) / 96;
          if ( v15 == 1 )
            v13->AbEntrySummary |= 1 << v22;
          else
            _InterlockedOr8((volatile signed __int8 *)&v13->AbOrphanedEntrySummary, 1 << v22);
          goto LABEL_17;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v13->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v13, (ULONG_PTR)&qword_140465B78, SessionId, 0LL);
LABEL_17:
  --v13->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(v13, &qword_140465B78, v24);
  v17 = v13->SpecialApcDisable++ == -1;
  if ( v17 && ($005F0E83B22994B61E86C72E0CE43C71 *)v13->ApcState.ApcListHead[0].Flink != &v13->152 )
    KiCheckForKernelApcDelivery();
  KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
  return updated;
}
