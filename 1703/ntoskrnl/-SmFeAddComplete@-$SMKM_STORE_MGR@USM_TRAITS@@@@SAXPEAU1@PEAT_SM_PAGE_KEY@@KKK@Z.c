/*
 * XREFs of ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x140054FF0
 * Callers:
 *     ?SmProcessAddCompletion@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@KPEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x140054F60 (-SmProcessAddCompletion@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@KPEAU-$SMKM_.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x140055720 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
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

_BYTE *__fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeAddComplete(__int64 a1, unsigned int *a2, int a3, __int64 a4, char a5)
{
  unsigned int v5; // ebx
  __int64 v7; // r9
  _BYTE *result; // rax
  int v9; // r12d
  int v10; // edi
  bool v11; // zf
  int v12; // r15d
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rax
  _BYTE *v18; // rcx
  ULONG_PTR v19; // r14
  struct _KTHREAD *v20; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v22; // r15
  unsigned int v23; // r8d
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  _KLOCK_ENTRY *v27; // rdi
  __int64 v28; // rdx
  __int16 v29; // ax
  int v30; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v31; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE *v32; // [rsp+40h] [rbp-C0h]
  int v33; // [rsp+48h] [rbp-B8h]
  int v34; // [rsp+4Ch] [rbp-B4h]
  _QWORD v35[5]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v36[136]; // [rsp+78h] [rbp-88h] BYREF
  int v37; // [rsp+170h] [rbp+70h]

  v5 = *a2;
  v33 = a3;
  memset(v35, 0, sizeof(v35));
  result = v36;
  v35[3] = 0x800000000LL;
  v35[0] = v36;
  v9 = a5 & 1;
  v10 = 0;
  v11 = (a5 & 2) == 0;
  v12 = 1;
  v37 = a5 & 2;
  if ( v11 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    result = (_BYTE *)ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
  }
  v14 = v32;
  v15 = v31;
  while ( 1 )
  {
    if ( v12 )
    {
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
        a1 + 448,
        v5,
        v35,
        v7);
      result = (_BYTE *)B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
                          v16,
                          &v31,
                          v35);
      v14 = v32;
      v12 = 0;
      v15 = v31;
    }
    if ( v15 )
    {
      v14 += 8;
      v17 = (unsigned __int16)*(_DWORD *)v15 + 2LL;
      v32 = v14;
      result = (_BYTE *)(v15 + 8 * v17);
      if ( v14 < result )
        goto LABEL_8;
      result = *(_BYTE **)(v15 + 8);
      if ( result )
      {
        v14 = result + 16;
        v31 = *(_QWORD *)(v15 + 8);
        v32 = result + 16;
        v15 = (__int64)result;
LABEL_8:
        v18 = v14;
        goto LABEL_9;
      }
    }
    v18 = 0LL;
LABEL_9:
    if ( (v18[7] & 1) != 0 )
    {
      if ( v9 )
        goto LABEL_13;
    }
    else
    {
      if ( v18[6] != 1 )
        goto LABEL_13;
      if ( v9 )
      {
        v18[6] = 3;
        goto LABEL_13;
      }
    }
    v18[6] = 0;
    result = (_BYTE *)SMKM_STORE_MGR<SM_TRAITS>::SmFeDeleteEntry(a1, (__int64)v35, &v31, v7);
    v14 = v32;
    v12 = 1;
    v15 = v31;
LABEL_13:
    if ( ++v10 == v33 )
      break;
    ++v5;
  }
  if ( !v37 )
  {
    v19 = a1 + 440;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v19, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v19);
    v30 = 0;
    v20 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v19) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx(v20->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --v20->SpecialApcDisable;
    v22 = ++v20->AbAllocationRegionCount;
    v23 = ((char)v20->AbEntrySummary | (char)v20->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v11 = !_BitScanReverse((unsigned int *)&v24, v23);
      v34 = v24;
      if ( v11 )
        break;
      v25 = 1 << v24;
      v26 = v24;
      v27 = &v20->LockEntries[v26];
      v23 &= ~v25;
      if ( (v27->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v27->LockState.0 & 1) == 0
        && (*(_QWORD *)&v27->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v19 & 0x7FFFFFFFFFFFFFFCLL)
        && v27->LockState.SessionId == (_DWORD)SessionId )
      {
        v27->AcquiredByte &= ~1u;
        if ( v27->LockState.0 )
        {
          if ( v27 )
          {
            v27->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v27->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v20->LockEntries[v26].TreeNode, SessionId);
            v30 = 0;
            v30 = v27->BoostBitmap.AllFields & 0x1FFFF;
            v27->BoostBitmap.AllFields &= 0xFFFE0000;
            v27->ThreadLocalFlags &= ~1u;
            v27->LockState.0 = 0LL;
            v28 = ((char *)v27 - (char *)v20 - 800) / 96;
            if ( v22 == 1 )
              v20->AbEntrySummary |= 1 << v28;
            else
              _InterlockedOr8((volatile signed __int8 *)&v20->AbOrphanedEntrySummary, 1 << v28);
            goto LABEL_31;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v20->0 + 1) & 0x8000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v20, v19, (unsigned int)SessionId, 0LL);
LABEL_31:
    --v20->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(v20, v19, &v30);
    v29 = v20->SpecialApcDisable + 1;
    v20->SpecialApcDisable = v29;
    if ( !v29 && ($69CD3F157F9F39B6F7113F2231989901 *)v20->ApcState.ApcListHead[0].Flink != &v20->152 )
      KiCheckForKernelApcDelivery();
    return (_BYTE *)KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
  }
  return result;
}
