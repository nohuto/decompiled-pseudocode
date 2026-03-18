/*
 * XREFs of CmpEnumerateAllHigherLayerKcbs @ 0x1405F2DD8
 * Callers:
 *     CmDeleteKey @ 0x140472480 (CmDeleteKey.c)
 *     CmpCleanupDiscardReplaceContext @ 0x140472B60 (CmpCleanupDiscardReplaceContext.c)
 *     CmpSaveBootControlSet @ 0x1405A4B40 (CmpSaveBootControlSet.c)
 *     CmRenameKey @ 0x14068CE58 (CmRenameKey.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140697BB8 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x140697E28 (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x14069809C (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpCommitDeleteKeyUoW @ 0x14069E61C (CmpCommitDeleteKeyUoW.c)
 *     CmpCommitRenameKeyUoW @ 0x14069E7D0 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x14069EE20 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14069F8B8 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404784E0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpLockKcbExclusive @ 0x140478D48 (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x14047F670 (CmpUnlockKcb.c)
 *     CmpReferenceKeyControlBlock @ 0x140563480 (CmpReferenceKeyControlBlock.c)
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
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF
  unsigned int (__fastcall *v17)(_QWORD, _QWORD); // [rsp+60h] [rbp+18h]

  result = &retaddr;
  v17 = a3;
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
LABEL_18:
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
          CmpUnlockKcb(v13);
        if ( v8 )
        {
          v11 = v7;
          v7 = (_QWORD *)v7[3];
          v12 = 1;
          goto LABEL_17;
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
            CmpUnlockKcb(v13);
        }
      }
      v12 = 0;
LABEL_17:
      a3 = v17;
      goto LABEL_18;
    }
  }
  return result;
}
