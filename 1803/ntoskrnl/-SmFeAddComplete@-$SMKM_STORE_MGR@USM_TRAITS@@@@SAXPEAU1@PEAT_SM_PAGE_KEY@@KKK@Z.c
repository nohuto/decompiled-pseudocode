/*
 * XREFs of ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x14008CA88
 * Callers:
 *     ?SmProcessAddCompletion@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@KPEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14008C9F8 (-SmProcessAddCompletion@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@KPEAU-$SMKM_.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x14008EF6C (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14008F3EC (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14008F424 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     ?SmFeDeleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@PEAUITERATOR@3@PEAUSMKM_FRONTEND_ENTRY@1@@Z @ 0x1400BC648 (-SmFeDeleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@-$B_TREE@T_SM_PAGE_KE.c)
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

_BYTE *__fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeAddComplete(__int64 a1, unsigned int *a2, int a3, __int64 a4, char a5)
{
  unsigned int v5; // ebx
  __int64 v8; // r9
  _BYTE *result; // rax
  int v10; // edi
  int v11; // r14d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // r8
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  ULONG_PTR v17; // rsi
  struct _KTHREAD *v18; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v20; // r14
  unsigned int v21; // r8d
  bool v22; // zf
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  _KLOCK_ENTRY *v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v31; // [rsp+40h] [rbp-C0h]
  int v32; // [rsp+48h] [rbp-B8h]
  _QWORD v33[5]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v34[136]; // [rsp+78h] [rbp-88h] BYREF

  v5 = *a2;
  memset(v33, 0, sizeof(v33));
  result = v34;
  v33[3] = 0x800000000LL;
  v10 = 0;
  v33[0] = v34;
  v11 = 1;
  if ( (a5 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    result = (_BYTE *)ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
  }
  v13 = v30;
  while ( 1 )
  {
    if ( v11 )
    {
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
        a1 + 448,
        v5,
        v33);
      result = (_BYTE *)B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
                          v14,
                          &v30,
                          v33);
      v13 = v30;
      v11 = 0;
    }
    if ( v13 )
    {
      v15 = v31 + 8;
      v16 = (unsigned __int16)*(_DWORD *)v13 + 2LL;
      v31 = v15;
      result = (_BYTE *)(v13 + 8 * v16);
      if ( v15 >= (unsigned __int64)result )
      {
        v28 = *(_QWORD *)(v13 + 8);
        if ( v28 )
        {
          v30 = *(_QWORD *)(v13 + 8);
          v31 = v28 + 16;
          v13 = v28;
        }
        result = (_BYTE *)(v28 + 16);
        v15 = (v28 + 16) & -(__int64)(v28 != 0);
      }
    }
    else
    {
      v15 = 0LL;
    }
    if ( (*(_BYTE *)(v15 + 7) & 1) != 0 )
    {
      if ( (a5 & 1) != 0 )
        goto LABEL_12;
    }
    else
    {
      if ( *(_BYTE *)(v15 + 6) != 1 )
        goto LABEL_12;
      if ( (a5 & 1) != 0 )
      {
        *(_BYTE *)(v15 + 6) = 3;
        goto LABEL_12;
      }
    }
    *(_BYTE *)(v15 + 6) = 0;
    result = (_BYTE *)SMKM_STORE_MGR<SM_TRAITS>::SmFeDeleteEntry(a1, v33, &v30);
    v13 = v30;
    v11 = 1;
LABEL_12:
    if ( ++v10 == a3 )
      break;
    ++v5;
  }
  if ( (a5 & 2) == 0 )
  {
    v17 = a1 + 440;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v17, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v17, v15, v13, v8);
    v29 = 0;
    v18 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v17) == 1 )
      SessionId = MmGetSessionIdEx(v18->ApcState.Process);
    else
      SessionId = -1;
    --v18->SpecialApcDisable;
    v20 = ++v18->AbAllocationRegionCount;
    v21 = ((char)v18->AbEntrySummary | (char)v18->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v22 = !_BitScanReverse((unsigned int *)&v23, v21);
      v32 = v23;
      if ( v22 )
        break;
      v24 = 1 << v23;
      v25 = v23;
      v26 = &v18->LockEntries[v25];
      v21 &= ~v24;
      if ( (v26->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v26->LockState.0 & 1) == 0
        && (*(_QWORD *)&v26->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v17 & 0x7FFFFFFFFFFFFFFCLL)
        && v26->LockState.SessionId == SessionId )
      {
        v26->AcquiredByte &= ~1u;
        if ( v26->LockState.0 )
        {
          if ( v26 )
          {
            v26->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v26->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v18->LockEntries[v25].TreeNode);
            v29 = 0;
            v29 = v26->BoostBitmap.AllFields & 0x1FFFF;
            v26->BoostBitmap.AllFields &= 0xFFFE0000;
            v26->ThreadLocalFlags &= ~1u;
            v26->LockState.0 = 0LL;
            v27 = ((char *)v26 - (char *)v18 - 800) / 96;
            if ( v20 == 1 )
              v18->AbEntrySummary |= 1 << v27;
            else
              _InterlockedOr8((volatile signed __int8 *)&v18->AbOrphanedEntrySummary, 1 << v27);
            goto LABEL_30;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v18->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v18, v17, SessionId, 0LL);
LABEL_30:
    --v18->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(v18, v17, &v29);
    v22 = v18->SpecialApcDisable++ == -1;
    if ( v22 && ($005F0E83B22994B61E86C72E0CE43C71 *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
      KiCheckForKernelApcDelivery();
    return (_BYTE *)KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
  }
  return result;
}
