/*
 * XREFs of ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x140055720
 * Callers:
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x140055574 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x140055E00 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x140053590 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x140054FF0 (-SmFeAddComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z.c)
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x140055338 (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x140055B90 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x140055BC8 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x140055D84 (-StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeAddInitiate(
        __int64 a1,
        unsigned int *a2,
        int a3,
        int a4,
        int *a5,
        __int64 *a6,
        char a7)
{
  __int16 v9; // si
  unsigned int v10; // ebx
  int v11; // r15d
  ULONG_PTR v12; // rsi
  int v13; // edi
  __int64 v14; // r9
  struct _KTHREAD *CurrentThread; // rax
  int v17; // r12d
  unsigned int v18; // ecx
  __int64 v19; // r9
  unsigned __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // r8
  int v23; // edi
  int v24; // eax
  struct _KTHREAD *v25; // rbx
  ULONG_PTR SessionId; // r9
  unsigned __int8 v27; // r15
  __int64 v28; // rdx
  bool v29; // zf
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  _KLOCK_ENTRY *v33; // rdi
  __int64 v34; // rdx
  __int16 v35; // ax
  struct _KTHREAD *v36; // rax
  struct _KTHREAD *v37; // rdi
  __int64 v38; // rdx
  unsigned int v39; // r8d
  __int64 v40; // rcx
  __int64 v41; // r15
  __int64 v42; // rdx
  __int16 v43; // ax
  NTSTATUS v44; // edi
  struct _KTHREAD *v45; // rcx
  struct _KTHREAD *v46; // rax
  unsigned __int8 v47; // [rsp+30h] [rbp-D0h]
  unsigned int v48; // [rsp+34h] [rbp-CCh] BYREF
  int v49; // [rsp+38h] [rbp-C8h] BYREF
  int v50; // [rsp+3Ch] [rbp-C4h] BYREF
  int v51; // [rsp+40h] [rbp-C0h]
  __int64 v52; // [rsp+48h] [rbp-B8h] BYREF
  int v53; // [rsp+50h] [rbp-B0h]
  int v54; // [rsp+54h] [rbp-ACh]
  int v55; // [rsp+5Ch] [rbp-A4h]
  int v56; // [rsp+60h] [rbp-A0h]
  __int16 Object; // [rsp+68h] [rbp-98h] BYREF
  char v58; // [rsp+6Ah] [rbp-96h]
  int v59; // [rsp+6Ch] [rbp-94h]
  _QWORD v60[2]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int *v61; // [rsp+80h] [rbp-80h]
  LARGE_INTEGER Timeout; // [rsp+88h] [rbp-78h] BYREF
  __int64 *v63; // [rsp+90h] [rbp-70h]
  __int64 v64; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v65; // [rsp+A0h] [rbp-60h]
  int *v66; // [rsp+A8h] [rbp-58h]
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
    v36 = KeGetCurrentThread();
    --v36->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
    v48 = 1;
  }
  v17 = -1073740682;
  while ( 1 )
  {
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
      a1 + 448,
      v10,
      v67,
      v14);
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
      *v61,
      &v64,
      v67);
    if ( !v64 )
      break;
    v20 = v65 + 8;
    v21 = (unsigned __int16)*(_DWORD *)v64 + 2LL;
    v65 = v20;
    if ( v20 >= v64 + 8 * v21 )
    {
      v22 = *(_QWORD *)(v64 + 8);
      if ( v22 )
      {
        v64 = *(_QWORD *)(v64 + 8);
        v20 = v22 + 16;
        v65 = v20;
      }
      else
      {
        v20 = 0LL;
      }
    }
    if ( !v20 || v18 < *(_DWORD *)v20 && (unsigned int)v19 < *(_DWORD *)v20 )
      break;
    if ( (*(_BYTE *)(v20 + 7) & 1) != 0 )
    {
      v17 = -1073740747;
      goto LABEL_20;
    }
    if ( v13 || (a7 & 1) == 0 )
      goto LABEL_20;
    Object = 0;
    v60[1] = v60;
    v60[0] = v60;
    *(_QWORD *)(a1 + 1632) = &Object;
    v58 = 6;
    v59 = 0;
    *(_DWORD *)(a1 + 1624) = v10;
    if ( v11 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v12, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(a1 + 440);
      KeAbPostRelease(a1 + 440);
      KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 440);
      v49 = 0;
      v37 = KeGetCurrentThread();
      v38 = (unsigned int)MiGetSystemRegionType(a1 + 440) == 1
          ? (unsigned int)MmGetSessionIdEx(v37->ApcState.Process)
          : 0xFFFFFFFFLL;
      --v37->SpecialApcDisable;
      v47 = ++v37->AbAllocationRegionCount;
      v39 = ((char)v37->AbEntrySummary | (char)v37->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v29 = !_BitScanReverse((unsigned int *)&v40, v39);
        v53 = v40;
        if ( v29 )
          goto LABEL_66;
        v41 = (__int64)&v37->LockEntries[v40];
        v39 &= ~(1 << v40);
        if ( (*(_BYTE *)(v41 + 26) & 1) != 0
          && (*(_DWORD *)(v41 + 32) & 1) == 0
          && (*(_QWORD *)(v41 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v12 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v41 + 40) == (_DWORD)v38 )
        {
          *(_BYTE *)(v41 + 26) &= ~1u;
          if ( *(_QWORD *)(v41 + 32) )
            break;
        }
      }
      if ( !v41 )
      {
LABEL_66:
        if ( (*((_DWORD *)&v37->0 + 1) & 0x8000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v37, a1 + 440, (unsigned int)v38, 0LL);
        goto LABEL_78;
      }
      *(_BYTE *)(v41 + 32) |= 2u;
      if ( *(__int64 *)(v41 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v41, v38);
      v49 = 0;
      v49 = *(_DWORD *)(v41 + 88) & 0x1FFFF;
      *(_DWORD *)(v41 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v41 + 25) &= ~1u;
      *(_QWORD *)(v41 + 32) = 0LL;
      v42 = (v41 - (__int64)v37 - 800) / 96;
      if ( v47 == 1 )
        v37->AbEntrySummary |= 1 << v42;
      else
        _InterlockedOr8((volatile signed __int8 *)&v37->AbOrphanedEntrySummary, 1 << v42);
LABEL_78:
      --v37->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts(v37, a1 + 440, &v49);
      v43 = v37->SpecialApcDisable + 1;
      v37->SpecialApcDisable = v43;
      if ( !v43 && ($69CD3F157F9F39B6F7113F2231989901 *)v37->ApcState.ApcListHead[0].Flink != &v37->152 )
        KiCheckForKernelApcDelivery();
      KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
      v11 = v54;
    }
    Timeout.QuadPart = -2500000LL;
    v44 = KeWaitForSingleObject(&Object, WrKernel, 0, 0, &Timeout);
    if ( v11 )
    {
      v45 = KeGetCurrentThread();
      --v45->SpecialApcDisable;
      ExAcquirePushLockSharedEx(a1 + 440, 0LL);
      v48 = 2;
    }
    else
    {
      v46 = KeGetCurrentThread();
      --v46->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
      v48 = 1;
    }
    *(_QWORD *)(a1 + 1632) = 0LL;
    if ( v44 )
      goto LABEL_20;
    v13 = 1;
  }
  if ( v11 )
  {
LABEL_19:
    v17 = 0;
  }
  else
  {
    v23 = 0;
    while ( 1 )
    {
      LODWORD(v52) = v10;
      v24 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
              a1 + 448,
              v10,
              v67,
              v19);
      v17 = v24;
      if ( v24 == -1073741275 )
      {
        v17 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeInsertEx(
                (__int64 *)(a1 + 448),
                (__int64)v67,
                &v52);
      }
      else if ( v24 >= 0 )
      {
        v17 = -1073741484;
      }
      if ( v17 < 0 )
        break;
      if ( ++v23 == v51 )
      {
        SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxQueueWork(v63, a1, v55, v66);
        goto LABEL_19;
      }
      ++v10;
    }
    if ( v23 )
      SMKM_STORE_MGR<SM_TRAITS>::SmFeAddComplete(a1, v61, v23, v19, 2);
  }
LABEL_20:
  if ( v11 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v12, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(a1 + 440);
    KeAbPostRelease(a1 + 440);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 440);
    v50 = 0;
    v25 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(a1 + 440) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx(v25->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --v25->SpecialApcDisable;
    v27 = ++v25->AbAllocationRegionCount;
    LODWORD(v28) = ((char)v25->AbEntrySummary | (char)v25->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v29 = !_BitScanReverse((unsigned int *)&v30, v28);
      v56 = v30;
      if ( v29 )
        break;
      v31 = 1 << v30;
      v32 = v30;
      v33 = &v25->LockEntries[v32];
      v28 = ~v31 & (unsigned int)v28;
      if ( (v33->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v33->LockState.0 & 1) == 0
        && (*(_QWORD *)&v33->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v12 & 0x7FFFFFFFFFFFFFFCLL)
        && v33->LockState.SessionId == (_DWORD)SessionId )
      {
        v33->AcquiredByte &= ~1u;
        if ( v33->LockState.0 )
        {
          if ( v33 )
          {
            v33->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v33->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v25->LockEntries[v32].TreeNode, v28);
            v50 = 0;
            v50 = v33->BoostBitmap.AllFields & 0x1FFFF;
            v33->BoostBitmap.AllFields &= 0xFFFE0000;
            v33->ThreadLocalFlags &= ~1u;
            v33->LockState.0 = 0LL;
            v34 = ((char *)v33 - (char *)v25 - 800) / 96;
            if ( v27 == 1 )
              v25->AbEntrySummary |= 1 << v34;
            else
              _InterlockedOr8((volatile signed __int8 *)&v25->AbOrphanedEntrySummary, 1 << v34);
            goto LABEL_41;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v25->0 + 1) & 0x8000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v25, v12, SessionId, 0LL);
LABEL_41:
    --v25->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(v25, v12, &v50);
    v35 = v25->SpecialApcDisable + 1;
    v25->SpecialApcDisable = v35;
    if ( !v35 && ($69CD3F157F9F39B6F7113F2231989901 *)v25->ApcState.ApcListHead[0].Flink != &v25->152 )
      KiCheckForKernelApcDelivery();
  }
  KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
  return (unsigned int)v17;
}
