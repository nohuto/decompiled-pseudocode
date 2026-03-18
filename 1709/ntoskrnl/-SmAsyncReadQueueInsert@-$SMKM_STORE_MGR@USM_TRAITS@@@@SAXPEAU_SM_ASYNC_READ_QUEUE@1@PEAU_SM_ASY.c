/*
 * XREFs of ?SmAsyncReadQueueInsert@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASYNC_DIRECT_READ_CTX@1@K@Z @ 0x140264BC0
 * Callers:
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x140267348 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeQueryActiveProcessorCountEx @ 0x14008D0E0 (KeQueryActiveProcessorCountEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItemToPrivatePool @ 0x140287208 (ExQueueWorkItemToPrivatePool.c)
 */

ULONG_PTR *__fastcall SMKM_STORE_MGR<SM_TRAITS>::SmAsyncReadQueueInsert(__int64 a1, ULONG_PTR a2, unsigned int a3)
{
  KSPIN_LOCK *v3; // r14
  __int128 *v5; // rdi
  KIRQL v6; // r15
  ULONG_PTR *v7; // rdx
  unsigned __int64 v8; // rbx
  __int128 v9; // xmm0
  ULONG_PTR *result; // rax
  _QWORD *v11; // rcx
  ULONG_PTR BugCheckParameter2[2]; // [rsp+20h] [rbp-10h] BYREF

  BugCheckParameter2[0] = 0LL;
  BugCheckParameter2[1] = (ULONG_PTR)BugCheckParameter2;
  v3 = (KSPIN_LOCK *)(a1 + 768);
  *(_DWORD *)(a2 + 32) ^= ((unsigned __int8)a3 ^ (unsigned __int8)*(_DWORD *)(a2 + 32)) & 7;
  v5 = (__int128 *)(a1 + 24LL * a3);
  *(_DWORD *)(a2 + 40) ^= (*(_DWORD *)(a2 + 40) ^ (a3 >> 3)) & 3;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 768));
  if ( *((_DWORD *)v5 + 4) || *((_DWORD *)v5 + 5) )
  {
    *(_QWORD *)a2 = **((_QWORD **)v5 + 1) + 1LL;
    **((_QWORD **)v5 + 1) = a2;
    *((_QWORD *)v5 + 1) = a2;
    v8 = *(_QWORD *)a2;
    if ( v8 >= KeQueryActiveProcessorCountEx(0xFFFFu) && *((__int128 **)v5 + 1) != v5 )
    {
      v9 = *v5;
      *((_QWORD *)v5 + 1) = v5;
      *(_OWORD *)BugCheckParameter2 = v9;
      *(_QWORD *)v5 = 0LL;
    }
  }
  else
  {
    v7 = (ULONG_PTR *)BugCheckParameter2[1];
    *(_QWORD *)a2 = *(_QWORD *)BugCheckParameter2[1] + 1LL;
    *v7 = a2;
    BugCheckParameter2[1] = a2;
  }
  *((_DWORD *)v5 + 4) += *(_DWORD *)BugCheckParameter2[1];
  KxReleaseSpinLock(v3);
  __writecr8(v6);
  while ( 1 )
  {
    result = BugCheckParameter2;
    if ( (ULONG_PTR *)BugCheckParameter2[1] == BugCheckParameter2 )
      break;
    v11 = (_QWORD *)BugCheckParameter2[0];
    BugCheckParameter2[0] = *(_QWORD *)BugCheckParameter2[0];
    if ( v11 == (_QWORD *)BugCheckParameter2[1] )
    {
      BugCheckParameter2[0] = 0LL;
      BugCheckParameter2[1] = (ULONG_PTR)BugCheckParameter2;
    }
    else
    {
      --*(_QWORD *)BugCheckParameter2[1];
    }
    *v11 = 0LL;
    v11[2] = SMKM_STORE_MGR<SM_TRAITS>::SmAsyncReadQueueWorker;
    v11[3] = v11;
    ExQueueWorkItemToPrivatePool((ULONG_PTR)v11);
  }
  return result;
}
