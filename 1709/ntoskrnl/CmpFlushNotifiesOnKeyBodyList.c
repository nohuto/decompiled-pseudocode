/*
 * XREFs of CmpFlushNotifiesOnKeyBodyList @ 0x140472EE4
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x140015CA8 (CmpRemoveHiveFromNamespace.c)
 *     CmDeleteLayeredKey @ 0x1401E47C0 (CmDeleteLayeredKey.c)
 *     CmpPerformUnloadKey @ 0x14046E4FC (CmpPerformUnloadKey.c)
 *     CmpCompleteUnloadKey @ 0x14046FBB4 (CmpCompleteUnloadKey.c)
 *     CmDeleteKey @ 0x140472480 (CmDeleteKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1405691F0 (CmpTransMgrFreeVolatileData.c)
 *     NtRenameKey @ 0x14068812C (NtRenameKey.c)
 *     CmRenameKey @ 0x14068CE58 (CmRenameKey.c)
 *     CmpInvalidateSubtreeWorker @ 0x14068FB10 (CmpInvalidateSubtreeWorker.c)
 *     CmpSearchAndDerefWorker @ 0x14068FC80 (CmpSearchAndDerefWorker.c)
 *     CmpFlushNotifiesPostCallback @ 0x140697E70 (CmpFlushNotifiesPostCallback.c)
 *     CmpForceInvalidatePostCallback @ 0x140697EB0 (CmpForceInvalidatePostCallback.c)
 *     CmpRefreshWorkerRoutine @ 0x14069E390 (CmpRefreshWorkerRoutine.c)
 *     CmpCommitDeleteKeyUoW @ 0x14069E61C (CmpCommitDeleteKeyUoW.c)
 *     CmpCommitRenameKeyUoW @ 0x14069E7D0 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x14069EE20 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x14069F008 (CmpLightWeightCommitRenameKeyUoW.c)
 * Callees:
 *     CmpFlushNotify @ 0x14046E88C (CmpFlushNotify.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x14069B148 (CmpKeyEnumStackFreeResumeContext.c)
 */

void __fastcall CmpFlushNotifiesOnKeyBodyList(__int64 a1, __int16 a2, char a3)
{
  __int64 *v3; // rdi
  __int64 *i; // rbx
  __int64 v8; // rdi
  __int64 *v9; // rsi
  __int64 v10; // rbx
  struct _PRIVILEGE_SET *v11; // rcx
  struct _PRIVILEGE_SET *v12; // rcx

  v3 = (__int64 *)(a1 + 112);
  for ( i = *(__int64 **)(a1 + 112); i != v3; i = (__int64 *)*i )
  {
    if ( *(i - 2) )
      CmpFlushNotify((__int64)(i - 4), a3, 0LL);
    v12 = (struct _PRIVILEGE_SET *)_InterlockedExchange64(i + 7, 0LL);
    if ( v12 )
      CmpKeyEnumStackFreeResumeContext(v12);
    *((_WORD *)i + 8) |= a2;
  }
  v8 = 0LL;
  v9 = (__int64 *)(a1 + 128);
  do
  {
    v10 = *v9;
    if ( (unsigned __int64)*v9 >= 3
      && v10 == _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v8 + 128), 2LL, v10) )
    {
      if ( *(_QWORD *)(v10 + 16) )
        CmpFlushNotify(v10, a3, 0LL);
      v11 = (struct _PRIVILEGE_SET *)_InterlockedExchange64((volatile __int64 *)(v10 + 88), 0LL);
      if ( v11 )
        CmpKeyEnumStackFreeResumeContext(v11);
      *(_WORD *)(v10 + 48) |= a2;
      _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v8 + 128), v10, 2LL);
    }
    v8 = (unsigned int)(v8 + 1);
    ++v9;
  }
  while ( (unsigned int)v8 < 4 );
}
