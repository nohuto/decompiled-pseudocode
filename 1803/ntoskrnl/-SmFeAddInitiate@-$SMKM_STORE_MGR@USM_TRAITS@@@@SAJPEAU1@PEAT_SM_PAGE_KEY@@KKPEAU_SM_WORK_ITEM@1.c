/*
 * XREFs of ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x14008EF6C
 * Callers:
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14008C6C4 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x14008EC0C (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x14008CA88 (-SmFeAddComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z.c)
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x14008CDB4 (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14008F3EC (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14008F424 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x14008F600 (-StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14008FFAC (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
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
  int v16; // r15d
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // r9
  unsigned int v20; // r10d
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rcx
  int v24; // r12d
  int v25; // eax
  struct _KTHREAD *v26; // rbx
  ULONG_PTR SessionId; // r9
  unsigned __int8 v28; // r14
  unsigned int v29; // edx
  bool v30; // zf
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  _KLOCK_ENTRY *v34; // rdi
  __int64 v35; // rdx
  struct _KTHREAD *v36; // rax
  struct _KTHREAD *v37; // rdi
  unsigned int v38; // edx
  unsigned __int8 v39; // r12
  unsigned int v40; // r8d
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rcx
  _KLOCK_ENTRY *v44; // r14
  __int64 v45; // rdx
  NTSTATUS v46; // eax
  struct _KTHREAD *v47; // rcx
  NTSTATUS v48; // edi
  ULONG_PTR v49; // rcx
  unsigned int v50; // ecx
  int v51; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v52; // [rsp+34h] [rbp-CCh] BYREF
  int v53; // [rsp+38h] [rbp-C8h] BYREF
  int v54; // [rsp+3Ch] [rbp-C4h]
  __int64 v55; // [rsp+40h] [rbp-C0h] BYREF
  int v56; // [rsp+48h] [rbp-B8h]
  int v57; // [rsp+4Ch] [rbp-B4h]
  unsigned int v58; // [rsp+54h] [rbp-ACh]
  int v59; // [rsp+58h] [rbp-A8h]
  __int16 Object; // [rsp+60h] [rbp-A0h] BYREF
  char v61; // [rsp+62h] [rbp-9Eh]
  int v62; // [rsp+64h] [rbp-9Ch]
  _QWORD v63[2]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int *v64; // [rsp+78h] [rbp-88h]
  LARGE_INTEGER Timeout; // [rsp+80h] [rbp-80h] BYREF
  __int64 v66; // [rsp+88h] [rbp-78h]
  __int64 v67; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v68; // [rsp+98h] [rbp-68h]
  __int64 v69; // [rsp+A0h] [rbp-60h]
  _QWORD v70[5]; // [rsp+B0h] [rbp-50h] BYREF
  char v71; // [rsp+D8h] [rbp-28h] BYREF

  v64 = a2;
  v69 = a5;
  v54 = a3;
  v9 = a4;
  v58 = a4;
  v66 = a6;
  memset(v70, 0, sizeof(v70));
  v10 = *a2;
  v70[0] = &v71;
  v70[3] = 0x800000000LL;
  v55 = 0x1000000000000LL;
  v11 = a7 & 2;
  WORD2(v55) = v9;
  v57 = v11;
  v12 = a1 + 440;
  v13 = 0;
  if ( (a7 & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx(a1 + 440, 0LL);
    v52 = 2;
  }
  else if ( (a7 & 4) != 0 )
  {
    if ( !StLockTryAcquireExclusive(a1 + 440, &v52) )
      return 3221225557LL;
  }
  else
  {
    v36 = KeGetCurrentThread();
    --v36->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
    v52 = 1;
  }
  v16 = -1073740682;
  while ( 1 )
  {
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
      a1 + 448,
      v10,
      v70);
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
      v17,
      &v67,
      v70);
    v21 = v67;
    if ( !v67 )
      break;
    v18 = v68 + 8;
    v22 = (unsigned __int16)*(_DWORD *)v67 + 2LL;
    v68 = v18;
    if ( v18 >= v67 + 8 * v22 )
    {
      v23 = *(_QWORD *)(v67 + 8);
      if ( v23 )
      {
        v67 = *(_QWORD *)(v67 + 8);
        v68 = v23 + 16;
      }
      v18 = (v23 + 16) & -(__int64)(v23 != 0);
    }
    if ( !v18 || (unsigned int)v19 < *(_DWORD *)v18 && v20 < *(_DWORD *)v18 )
      break;
    if ( (*(_BYTE *)(v18 + 7) & 1) != 0 )
    {
      v16 = -1073740747;
      goto LABEL_15;
    }
    if ( v13 || (a7 & 1) == 0 )
      goto LABEL_15;
    Object = 0;
    v63[1] = v63;
    v63[0] = v63;
    *(_QWORD *)(a1 + 1656) = &Object;
    v61 = 6;
    v62 = 0;
    *(_DWORD *)(a1 + 1648) = v10;
    if ( v11 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v12, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 440));
      KeAbPostRelease(a1 + 440);
      KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 440), v18, v21, v19);
      v51 = 0;
      v37 = KeGetCurrentThread();
      v38 = (unsigned int)MiGetSystemRegionType(a1 + 440) == 1 ? MmGetSessionIdEx(v37->ApcState.Process) : -1;
      --v37->SpecialApcDisable;
      v39 = ++v37->AbAllocationRegionCount;
      v40 = ((char)v37->AbEntrySummary | (char)v37->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v30 = !_BitScanReverse((unsigned int *)&v41, v40);
        v56 = v41;
        if ( v30 )
          goto LABEL_66;
        v42 = 1 << v41;
        v43 = v41;
        v44 = &v37->LockEntries[v43];
        v40 &= ~v42;
        if ( (v44->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v44->LockState.0 & 1) == 0
          && (*(_QWORD *)&v44->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v12 & 0x7FFFFFFFFFFFFFFCLL)
          && v44->LockState.SessionId == v38 )
        {
          v44->AcquiredByte &= ~1u;
          if ( v44->LockState.0 )
            break;
        }
      }
      if ( !v44 )
      {
LABEL_66:
        if ( (*((_DWORD *)&v37->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v37, a1 + 440, v38, 0LL);
        goto LABEL_78;
      }
      v44->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v44->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&v37->LockEntries[v43].TreeNode);
      v51 = 0;
      v51 = v44->BoostBitmap.AllFields & 0x1FFFF;
      v44->BoostBitmap.AllFields &= 0xFFFE0000;
      v44->ThreadLocalFlags &= ~1u;
      v44->LockState.0 = 0LL;
      v45 = ((char *)v44 - (char *)v37 - 800) / 96;
      if ( v39 == 1 )
        v37->AbEntrySummary |= 1 << v45;
      else
        _InterlockedOr8((volatile signed __int8 *)&v37->AbOrphanedEntrySummary, 1 << v45);
LABEL_78:
      --v37->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts(v37, a1 + 440, &v51);
      v30 = v37->SpecialApcDisable++ == -1;
      if ( v30 && ($005F0E83B22994B61E86C72E0CE43C71 *)v37->ApcState.ApcListHead[0].Flink != &v37->152 )
        KiCheckForKernelApcDelivery();
      KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
      v11 = v57;
    }
    Timeout.QuadPart = -2500000LL;
    v46 = KeWaitForSingleObject(&Object, WrKernel, 0, 0, &Timeout);
    v47 = KeGetCurrentThread();
    v48 = v46;
    --v47->SpecialApcDisable;
    v49 = a1 + 440;
    if ( v11 )
    {
      ExAcquirePushLockSharedEx(v49, 0LL);
      v50 = 2;
    }
    else
    {
      ExAcquirePushLockExclusiveEx(v49, 0LL);
      v50 = 1;
    }
    v52 = v50;
    *(_QWORD *)(a1 + 1656) = 0LL;
    if ( v48 )
      goto LABEL_15;
    v13 = 1;
  }
  if ( v11 )
  {
    v16 = 0;
  }
  else
  {
    v24 = 0;
    while ( 1 )
    {
      LODWORD(v55) = v10;
      v25 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
              a1 + 448,
              v10,
              v70);
      v16 = v25;
      if ( v25 == -1073741275 )
      {
        v16 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeInsertEx(
                (__int64 *)(a1 + 448),
                (__int64)v70,
                &v55);
      }
      else if ( v25 >= 0 )
      {
        v16 = -1073741484;
      }
      if ( v16 < 0 )
        break;
      if ( ++v24 == v54 )
      {
        SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxQueueWork(v66, a1, v58, v69);
        v16 = 0;
        goto LABEL_26;
      }
      ++v10;
    }
    if ( v24 )
      SMKM_STORE_MGR<SM_TRAITS>::SmFeAddComplete(a1, v64, v24, v19, 2);
  }
LABEL_15:
  if ( v11 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v12, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 440));
    KeAbPostRelease(a1 + 440);
  }
  else
  {
LABEL_26:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 440), v18, v21, v19);
    v53 = 0;
    v26 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(a1 + 440) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx(v26->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --v26->SpecialApcDisable;
    v28 = ++v26->AbAllocationRegionCount;
    v29 = ((char)v26->AbEntrySummary | (char)v26->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v30 = !_BitScanReverse((unsigned int *)&v31, v29);
      v59 = v31;
      if ( v30 )
        break;
      v32 = 1 << v31;
      v33 = v31;
      v34 = &v26->LockEntries[v33];
      v29 &= ~v32;
      if ( (v34->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v34->LockState.0 & 1) == 0
        && (*(_QWORD *)&v34->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v12 & 0x7FFFFFFFFFFFFFFCLL)
        && v34->LockState.SessionId == (_DWORD)SessionId )
      {
        v34->AcquiredByte &= ~1u;
        if ( v34->LockState.0 )
        {
          if ( v34 )
          {
            v34->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v34->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v26->LockEntries[v33].TreeNode);
            v53 = 0;
            v53 = v34->BoostBitmap.AllFields & 0x1FFFF;
            v34->BoostBitmap.AllFields &= 0xFFFE0000;
            v34->ThreadLocalFlags &= ~1u;
            v34->LockState.0 = 0LL;
            v35 = ((char *)v34 - (char *)v26 - 800) / 96;
            if ( v28 == 1 )
              v26->AbEntrySummary |= 1 << v35;
            else
              _InterlockedOr8((volatile signed __int8 *)&v26->AbOrphanedEntrySummary, 1 << v35);
            goto LABEL_42;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v26->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v26, v12, SessionId, 0LL);
LABEL_42:
    --v26->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(v26, v12, &v53);
    v30 = v26->SpecialApcDisable++ == -1;
    if ( v30 && ($005F0E83B22994B61E86C72E0CE43C71 *)v26->ApcState.ApcListHead[0].Flink != &v26->152 )
      KiCheckForKernelApcDelivery();
  }
  KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
  return (unsigned int)v16;
}
