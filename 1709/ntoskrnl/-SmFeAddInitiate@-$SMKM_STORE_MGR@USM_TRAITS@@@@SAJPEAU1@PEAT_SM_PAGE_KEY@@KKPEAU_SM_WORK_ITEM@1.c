/*
 * XREFs of ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x140265D68
 * Callers:
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x1402654CC (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14026784C (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14017D098 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x14026187C (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x140262520 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x1402659F4 (-SmFeAddComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x140267348 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x1402705DC (-StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeAddInitiate(
        __int64 a1,
        unsigned int *a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int16 v9; // si
  unsigned int v10; // ebx
  int v11; // r14d
  ULONG_PTR v12; // rsi
  int v13; // edi
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v16; // rax
  int v17; // r15d
  __int64 v18; // rcx
  unsigned int v19; // r9d
  unsigned int v20; // r10d
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  struct _KTHREAD *v24; // rdi
  unsigned int v25; // edx
  unsigned __int8 v26; // r12
  unsigned int v27; // r8d
  __int64 v28; // r14
  bool v29; // zf
  __int64 v30; // rcx
  NTSTATUS v31; // edi
  struct _KTHREAD *v32; // rcx
  __int64 v33; // rdx
  struct _KTHREAD *v34; // rax
  int v35; // r12d
  int v36; // eax
  __int64 v37; // r9
  struct _KTHREAD *v38; // rbx
  ULONG_PTR SessionId; // r9
  unsigned __int8 v40; // r14
  unsigned int v41; // edx
  int v42; // eax
  __int64 v43; // rcx
  _KLOCK_ENTRY *v44; // rdi
  __int64 v45; // rcx
  __int64 v46; // rdx
  $B476B70DB57F76B110DA5B9238C3E934 *v47; // rcx
  unsigned int v48; // [rsp+30h] [rbp-D0h] BYREF
  int v49; // [rsp+34h] [rbp-CCh] BYREF
  int v50; // [rsp+38h] [rbp-C8h] BYREF
  int v51; // [rsp+3Ch] [rbp-C4h]
  __int64 v52; // [rsp+40h] [rbp-C0h] BYREF
  int v53; // [rsp+48h] [rbp-B8h]
  int v54; // [rsp+4Ch] [rbp-B4h]
  unsigned int v55; // [rsp+54h] [rbp-ACh]
  int v56; // [rsp+58h] [rbp-A8h]
  __int16 Object; // [rsp+60h] [rbp-A0h] BYREF
  char v58; // [rsp+62h] [rbp-9Eh]
  int v59; // [rsp+64h] [rbp-9Ch]
  _QWORD v60[2]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int *v61; // [rsp+78h] [rbp-88h]
  LARGE_INTEGER Timeout; // [rsp+80h] [rbp-80h] BYREF
  __int64 v63; // [rsp+88h] [rbp-78h]
  __int64 v64; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v65; // [rsp+98h] [rbp-68h]
  __int64 v66; // [rsp+A0h] [rbp-60h]
  _QWORD v67[5]; // [rsp+B0h] [rbp-50h] BYREF
  char v68; // [rsp+D8h] [rbp-28h] BYREF

  v61 = a2;
  v66 = a5;
  v51 = a3;
  v9 = a4;
  v55 = a4;
  v63 = a6;
  memset(v67, 0, sizeof(v67));
  v10 = *a2;
  v67[0] = &v68;
  v67[3] = 0x800000000LL;
  v52 = 0x1000000000000LL;
  v11 = a7 & 2;
  WORD2(v52) = v9;
  v54 = v11;
  v12 = a1 + 440;
  v13 = 0;
  if ( (a7 & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx(a1 + 440, 0LL);
    v48 = 2;
  }
  else if ( (a7 & 4) != 0 )
  {
    if ( !StLockTryAcquireExclusive(a1 + 440, &v48) )
      return 3221225557LL;
  }
  else
  {
    v16 = KeGetCurrentThread();
    --v16->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
    v48 = 1;
  }
  v17 = -1073740682;
  while ( 1 )
  {
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
      (__int64 *)(a1 + 448),
      v10,
      (__int64)v67);
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
      v18,
      &v64,
      (__int64)v67);
    if ( !v64 )
      break;
    v21 = v65 + 8;
    v22 = (unsigned __int16)*(_DWORD *)v64 + 2LL;
    v65 = v21;
    if ( v21 >= v64 + 8 * v22 )
    {
      v23 = *(_QWORD *)(v64 + 8);
      if ( v23 )
      {
        v64 = *(_QWORD *)(v64 + 8);
        v21 = v23 + 16;
        v65 = v21;
      }
      else
      {
        v21 = 0LL;
      }
    }
    if ( !v21 || v19 < *(_DWORD *)v21 && v20 < *(_DWORD *)v21 )
      break;
    if ( (*(_BYTE *)(v21 + 7) & 1) != 0 )
    {
      v17 = -1073740747;
      goto LABEL_66;
    }
    if ( v13 || (a7 & 1) == 0 )
      goto LABEL_66;
    Object = 0;
    v60[1] = v60;
    v60[0] = v60;
    *(_QWORD *)(a1 + 1656) = &Object;
    v58 = 6;
    v59 = 0;
    *(_DWORD *)(a1 + 1648) = v10;
    if ( v11 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v12, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 440));
      KeAbPostRelease(a1 + 440);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 440));
      v49 = 0;
      v24 = KeGetCurrentThread();
      v25 = (unsigned int)MiGetSystemRegionType(a1 + 440) == 1 ? MmGetSessionIdEx((__int64)v24->ApcState.Process) : -1;
      --v24->SpecialApcDisable;
      v26 = ++v24->AbAllocationRegionCount;
      v27 = ((char)v24->AbEntrySummary | (char)v24->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v29 = !_BitScanReverse((unsigned int *)&v30, v27);
        v53 = v30;
        if ( v29 )
          goto LABEL_35;
        v28 = (__int64)&v24->LockEntries[v30];
        v27 &= ~(1 << v30);
        if ( (*(_BYTE *)(v28 + 26) & 1) != 0
          && (*(_DWORD *)(v28 + 32) & 1) == 0
          && (*(_QWORD *)(v28 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v12 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v28 + 40) == v25 )
        {
          *(_BYTE *)(v28 + 26) &= ~1u;
          if ( *(_QWORD *)(v28 + 32) )
            break;
        }
      }
      if ( !v28 )
      {
LABEL_35:
        if ( (*((_DWORD *)&v24->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v24, a1 + 440, v25, 0LL);
        goto LABEL_36;
      }
      *(_BYTE *)(v28 + 32) |= 2u;
      if ( *(__int64 *)(v28 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v28);
      v49 = 0;
      v49 = *(_DWORD *)(v28 + 88) & 0x1FFFF;
      *(_DWORD *)(v28 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v28 + 25) &= ~1u;
      *(_QWORD *)(v28 + 32) = 0LL;
      v33 = (v28 - (__int64)v24 - 800) / 96;
      if ( v26 == 1 )
        v24->AbEntrySummary |= 1 << v33;
      else
        _InterlockedOr8((volatile signed __int8 *)&v24->AbOrphanedEntrySummary, 1 << v33);
LABEL_36:
      --v24->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v24, a1 + 440, (unsigned int *)&v49);
      v29 = v24->SpecialApcDisable++ == -1;
      if ( v29 && ($B476B70DB57F76B110DA5B9238C3E934 *)v24->ApcState.ApcListHead[0].Flink != &v24->152 )
        KiCheckForKernelApcDelivery(1LL);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      v11 = v54;
    }
    Timeout.QuadPart = -2500000LL;
    v31 = KeWaitForSingleObject(&Object, WrKernel, 0, 0, &Timeout);
    if ( v11 )
    {
      v32 = KeGetCurrentThread();
      --v32->SpecialApcDisable;
      ExAcquirePushLockSharedEx(a1 + 440, 0LL);
      v48 = 2;
    }
    else
    {
      v34 = KeGetCurrentThread();
      --v34->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
      v48 = 1;
    }
    *(_QWORD *)(a1 + 1656) = 0LL;
    if ( v31 )
      goto LABEL_66;
    v13 = 1;
  }
  if ( v11 )
  {
LABEL_63:
    v17 = 0;
  }
  else
  {
    v35 = 0;
    while ( 1 )
    {
      LODWORD(v52) = v10;
      v36 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
              (__int64 *)(a1 + 448),
              v10,
              (__int64)v67);
      v17 = v36;
      if ( v36 == -1073741275 )
      {
        v17 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeInsertEx(
                (__int64 *)(a1 + 448),
                (__int64)v67,
                &v52);
      }
      else if ( v36 >= 0 )
      {
        v17 = -1073741484;
      }
      if ( v17 < 0 )
        break;
      if ( ++v35 == v51 )
      {
        SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxQueueWork(v63, a1, v55, v66);
        goto LABEL_63;
      }
      ++v10;
    }
    if ( v35 )
      SMKM_STORE_MGR<SM_TRAITS>::SmFeAddComplete(a1, v61, v35, v37, 2);
  }
LABEL_66:
  if ( v11 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v12, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 440));
    KeAbPostRelease(a1 + 440);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 440));
    v50 = 0;
    v38 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(a1 + 440) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx((__int64)v38->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --v38->SpecialApcDisable;
    v40 = ++v38->AbAllocationRegionCount;
    v41 = ((char)v38->AbEntrySummary | (char)v38->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v29 = !_BitScanReverse((unsigned int *)&v45, v41);
      v56 = v45;
      if ( v29 )
        goto LABEL_82;
      v42 = 1 << v45;
      v43 = v45;
      v44 = &v38->LockEntries[v43];
      v41 &= ~v42;
      if ( (v44->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v44->LockState.0 & 1) == 0
        && (*(_QWORD *)&v44->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v12 & 0x7FFFFFFFFFFFFFFCLL)
        && v44->LockState.SessionId == (_DWORD)SessionId )
      {
        v44->AcquiredByte &= ~1u;
        if ( v44->LockState.0 )
          break;
      }
    }
    if ( !v44 )
    {
LABEL_82:
      if ( (*((_DWORD *)&v38->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v38, v12, SessionId, 0LL);
      goto LABEL_89;
    }
    v44->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v44->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v38->LockEntries[v43].TreeNode);
    v50 = 0;
    v50 = v44->BoostBitmap.AllFields & 0x1FFFF;
    v44->BoostBitmap.AllFields &= 0xFFFE0000;
    v44->ThreadLocalFlags &= ~1u;
    v44->LockState.0 = 0LL;
    v46 = ((char *)v44 - (char *)v38 - 800) / 96;
    if ( v40 == 1 )
      v38->AbEntrySummary |= 1 << v46;
    else
      _InterlockedOr8((volatile signed __int8 *)&v38->AbOrphanedEntrySummary, 1 << v46);
LABEL_89:
    --v38->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v38, v12, (unsigned int *)&v50);
    v29 = v38->SpecialApcDisable++ == -1;
    if ( v29 )
    {
      v47 = &v38->152;
      if ( ($B476B70DB57F76B110DA5B9238C3E934 *)v47->ApcState.ApcListHead[0].Flink != v47 )
        KiCheckForKernelApcDelivery((__int64)v47);
    }
  }
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v17;
}
