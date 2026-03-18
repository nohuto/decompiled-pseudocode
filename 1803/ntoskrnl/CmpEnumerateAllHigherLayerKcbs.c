/*
 * XREFs of CmpEnumerateAllHigherLayerKcbs @ 0x1406FADDC
 * Callers:
 *     CmDeleteKey @ 0x14049FF78 (CmDeleteKey.c)
 *     CmpCleanupDiscardReplaceContext @ 0x14057DF08 (CmpCleanupDiscardReplaceContext.c)
 *     CmpSaveBootControlSet @ 0x1406EB510 (CmpSaveBootControlSet.c)
 *     CmRenameKey @ 0x1406F1120 (CmRenameKey.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1406FAB8C (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x1406FAF60 (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1406FB1DC (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmRestoreKey @ 0x140701768 (CmRestoreKey.c)
 *     CmpCommitDeleteKeyUoW @ 0x140703850 (CmpCommitDeleteKeyUoW.c)
 *     CmpCommitRenameKeyUoW @ 0x140703A10 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x1407040FC (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140704F5C (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     CmpLockKcbExclusive @ 0x14049D0D8 (CmpLockKcbExclusive.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404A8840 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpUnlockKcb @ 0x1404AA790 (CmpUnlockKcb.c)
 *     CmpReferenceKeyControlBlock @ 0x14052AA50 (CmpReferenceKeyControlBlock.c)
 */

_UNKNOWN **__fastcall CmpEnumerateAllHigherLayerKcbs(
        __int64 a1,
        unsigned int (__fastcall *a2)(ULONG_PTR, __int64),
        unsigned int (__fastcall *a3)(_QWORD, _QWORD),
        __int64 a4,
        char a5,
        char a6)
{
  _UNKNOWN **result; // rax
  _QWORD *v7; // rdi
  bool v8; // bp
  _QWORD *v11; // rbx
  char v12; // r10
  ULONG_PTR v13; // rsi
  _QWORD *v14; // r15
  __int64 v15; // r8
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF
  unsigned int (__fastcall *v18)(_QWORD, _QWORD); // [rsp+60h] [rbp+18h]

  result = &retaddr;
  v18 = a3;
  v7 = *(_QWORD **)(a1 + 184);
  v8 = 0;
  if ( v7 )
  {
    v11 = (_QWORD *)v7[4];
    result = (_UNKNOWN **)(v7 + 4);
    v12 = 0;
    if ( v11 != v7 + 4 )
    {
      while ( v11 == v7 + 4 )
      {
        v11 = v7;
        v12 = 1;
        v7 = (_QWORD *)v7[3];
LABEL_17:
        result = (_UNKNOWN **)(*(_QWORD *)(a1 + 184) + 32LL);
        if ( v11 == result )
          return result;
      }
      v13 = v11[2];
      v14 = v11;
      if ( v12 )
      {
        v11 = (_QWORD *)*v11;
        if ( !v8 )
          v8 = a3(v13, a4) == 1;
        if ( a5 )
          CmpDereferenceKeyControlBlockWithLock(v13);
        else
          CmpUnlockKcb(v13, (__int64)a2, (__int64)a3, a4);
        if ( v8 )
        {
          v11 = v7;
          v7 = (_QWORD *)v7[3];
          v12 = 1;
          goto LABEL_16;
        }
      }
      else
      {
        if ( a5 )
        {
          CmpReferenceKeyControlBlock(v11[2]);
        }
        else if ( a6 )
        {
          CmpLockKcbExclusive(v11[2]);
        }
        else
        {
          ExAcquirePushLockSharedEx(v13 + 40, 0LL);
          _InterlockedIncrement((volatile signed __int32 *)(v13 + 48));
        }
        if ( a2(v13, a4) == 1 )
        {
          v11 = (_QWORD *)v11[4];
          v7 = v14;
        }
        else
        {
          v11 = (_QWORD *)*v11;
          if ( a5 )
            CmpDereferenceKeyControlBlockWithLock(v13);
          else
            CmpUnlockKcb(v13, (__int64)a2, v15, a4);
        }
      }
      v12 = 0;
LABEL_16:
      a3 = v18;
      goto LABEL_17;
    }
  }
  return result;
}
