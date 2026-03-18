/*
 * XREFs of CmpFlushNotifiesOnKeyBodyList @ 0x14054DF64
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x1400A1E60 (CmpRemoveHiveFromNamespace.c)
 *     CmDeleteLayeredKey @ 0x140222964 (CmDeleteLayeredKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x140498730 (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteKey @ 0x14049FF78 (CmDeleteKey.c)
 *     CmpPerformUnloadKey @ 0x14054D0B4 (CmpPerformUnloadKey.c)
 *     CmpCompleteUnloadKey @ 0x14054D8E8 (CmpCompleteUnloadKey.c)
 *     CmpInvalidateSubtreeWorker @ 0x1405EDF90 (CmpInvalidateSubtreeWorker.c)
 *     NtRenameKey @ 0x1406EC3E0 (NtRenameKey.c)
 *     CmRenameKey @ 0x1406F1120 (CmRenameKey.c)
 *     CmpFlushNotifiesPostCallback @ 0x1406FAFA0 (CmpFlushNotifiesPostCallback.c)
 *     CmpInvalidateAllHigherLayerKcbsPostCallback @ 0x1406FB0B0 (CmpInvalidateAllHigherLayerKcbsPostCallback.c)
 *     CmpRefreshHive @ 0x14070306C (CmpRefreshHive.c)
 *     CmpRefreshWorkerRoutine @ 0x1407034F0 (CmpRefreshWorkerRoutine.c)
 *     CmpCommitDeleteKeyUoW @ 0x140703850 (CmpCommitDeleteKeyUoW.c)
 *     CmpCommitRenameKeyUoW @ 0x140703A10 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x1407040FC (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x140704408 (CmpLightWeightCommitRenameKeyUoW.c)
 * Callees:
 *     CmpFlushNotify @ 0x14054E0F0 (CmpFlushNotify.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x1406FFD38 (CmpKeyEnumStackFreeResumeContext.c)
 */

__int64 __fastcall CmpFlushNotifiesOnKeyBodyList(__int64 a1, __int64 a2, char a3)
{
  __int64 *v3; // rdi
  __int64 *v5; // rbx
  __int16 v6; // r12
  __int64 v8; // rdi
  signed __int64 *v9; // rsi
  signed __int64 v10; // rbx
  __int64 result; // rax
  struct _PRIVILEGE_SET *v12; // rcx
  struct _PRIVILEGE_SET *v13; // rcx

  v3 = (__int64 *)(a1 + 112);
  v5 = *(__int64 **)(a1 + 112);
  v6 = a2;
  while ( v5 != v3 )
  {
    if ( *(v5 - 2) )
    {
      LOBYTE(a2) = a3;
      result = CmpFlushNotify(v5 - 4, a2, 0LL);
    }
    v13 = (struct _PRIVILEGE_SET *)_InterlockedExchange64(v5 + 7, 0LL);
    if ( v13 )
      result = CmpKeyEnumStackFreeResumeContext(v13);
    *((_WORD *)v5 + 8) |= v6;
    v5 = (__int64 *)*v5;
  }
  v8 = 0LL;
  v9 = (signed __int64 *)(a1 + 128);
  do
  {
    v10 = *v9;
    if ( (unsigned __int64)*v9 >= 3 )
    {
      result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v8 + 128), 2LL, v10);
      if ( v10 == result )
      {
        if ( *(_QWORD *)(v10 + 16) )
        {
          LOBYTE(a2) = a3;
          CmpFlushNotify(v10, a2, 0LL);
        }
        v12 = (struct _PRIVILEGE_SET *)_InterlockedExchange64((volatile __int64 *)(v10 + 88), 0LL);
        if ( v12 )
          CmpKeyEnumStackFreeResumeContext(v12);
        *(_WORD *)(v10 + 48) |= v6;
        result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v8 + 128), v10, 2LL);
      }
    }
    v8 = (unsigned int)(v8 + 1);
    ++v9;
  }
  while ( (unsigned int)v8 < 4 );
  return result;
}
