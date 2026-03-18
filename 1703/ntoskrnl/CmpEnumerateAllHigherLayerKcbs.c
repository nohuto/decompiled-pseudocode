/*
 * XREFs of CmpEnumerateAllHigherLayerKcbs @ 0x14066D79C
 * Callers:
 *     CmDeleteKey @ 0x1404CF840 (CmDeleteKey.c)
 *     CmpCleanupDiscardReplaceContext @ 0x1404CFF1C (CmpCleanupDiscardReplaceContext.c)
 *     CmRenameKey @ 0x140663778 (CmRenameKey.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x14066D548 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x14066D910 (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x14066DB80 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpCommitDeleteKeyUoW @ 0x140673690 (CmpCommitDeleteKeyUoW.c)
 *     CmpCommitRenameKeyUoW @ 0x140673838 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140673E8C (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140674EFC (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140490F80 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpLockKcbExclusive @ 0x1404916C8 (CmpLockKcbExclusive.c)
 *     CmpLockKcbShared @ 0x1404FF9AC (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140500590 (CmpUnlockKcb.c)
 *     CmpReferenceKeyControlBlock @ 0x14054CCC0 (CmpReferenceKeyControlBlock.c)
 */

_UNKNOWN **__fastcall CmpEnumerateAllHigherLayerKcbs(
        __int64 a1,
        unsigned int (__fastcall *a2)(volatile signed __int32 *, __int64),
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
  volatile signed __int32 *v13; // rsi
  _QWORD *v14; // r15
  ULONG_PTR v15; // rcx
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
      v13 = (volatile signed __int32 *)v11[2];
      v14 = v11;
      if ( v12 )
      {
        v11 = (_QWORD *)*v11;
        if ( !v8 )
          v8 = a3(v13, a4) == 1;
        if ( a5 )
          CmpDereferenceKeyControlBlockWithLock(v13, 1u);
        else
          CmpUnlockKcb((__int64)v13);
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
        v15 = v11[2];
        if ( a5 )
        {
          CmpReferenceKeyControlBlock(v15);
        }
        else if ( a6 )
        {
          CmpLockKcbExclusive(v15);
        }
        else
        {
          CmpLockKcbShared(v15);
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
            CmpDereferenceKeyControlBlockWithLock(v13, 1u);
          else
            CmpUnlockKcb((__int64)v13);
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
