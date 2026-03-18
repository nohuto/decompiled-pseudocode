/*
 * XREFs of CmpFlushNotifiesOnKeyBodyList @ 0x1404D1090
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x14007FC2C (CmpRemoveHiveFromNamespace.c)
 *     CmDeleteLayeredKey @ 0x1401E0660 (CmDeleteLayeredKey.c)
 *     CmpPerformUnloadKey @ 0x1404CB738 (CmpPerformUnloadKey.c)
 *     CmpCompleteUnloadKey @ 0x1404CD454 (CmpCompleteUnloadKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1404CE2D0 (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteKey @ 0x1404CF840 (CmDeleteKey.c)
 *     NtRenameKey @ 0x14065F2B4 (NtRenameKey.c)
 *     CmRenameKey @ 0x140663778 (CmRenameKey.c)
 *     CmpInvalidateSubtreeWorker @ 0x140666090 (CmpInvalidateSubtreeWorker.c)
 *     CmpSearchAndDerefWorker @ 0x1406661E0 (CmpSearchAndDerefWorker.c)
 *     CmpFlushNotifiesPostCallback @ 0x14066D950 (CmpFlushNotifiesPostCallback.c)
 *     CmpForceInvalidatePostCallback @ 0x14066D990 (CmpForceInvalidatePostCallback.c)
 *     CmpRefreshWorkerRoutine @ 0x1406732D0 (CmpRefreshWorkerRoutine.c)
 *     CmpCommitDeleteKeyUoW @ 0x140673690 (CmpCommitDeleteKeyUoW.c)
 *     CmpCommitRenameKeyUoW @ 0x140673838 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140673E8C (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x140674188 (CmpLightWeightCommitRenameKeyUoW.c)
 * Callees:
 *     CmpFlushNotify @ 0x1404CB670 (CmpFlushNotify.c)
 */

void __fastcall CmpFlushNotifiesOnKeyBodyList(__int64 a1, __int64 a2, char a3)
{
  __int64 *v3; // rdi
  __int64 *v5; // rbx
  __int16 v6; // r15
  __int64 v8; // rdi
  __int64 *v9; // r14
  __int64 v10; // rbx

  v3 = (__int64 *)(a1 + 112);
  v5 = *(__int64 **)(a1 + 112);
  v6 = a2;
  while ( v5 != v3 )
  {
    if ( *(v5 - 2) )
    {
      LOBYTE(a2) = a3;
      CmpFlushNotify((__int64)(v5 - 4), a2, 0LL);
    }
    *((_WORD *)v5 + 8) |= v6;
    v5 = (__int64 *)*v5;
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
      {
        LOBYTE(a2) = a3;
        CmpFlushNotify(v10, a2, 0LL);
      }
      *(_WORD *)(v10 + 48) |= v6;
      _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v8 + 128), v10, 2LL);
    }
    v8 = (unsigned int)(v8 + 1);
    ++v9;
  }
  while ( (unsigned int)v8 < 4 );
}
