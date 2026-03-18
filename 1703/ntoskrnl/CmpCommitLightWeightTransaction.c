/*
 * XREFs of CmpCommitLightWeightTransaction @ 0x140669900
 * Callers:
 *     NtCommitRegistryTransaction @ 0x14065E760 (NtCommitRegistryTransaction.c)
 * Callees:
 *     ExfUnblockPushLock @ 0x14017DAD0 (ExfUnblockPushLock.c)
 *     CmpAbortLightWeightTransaction @ 0x14042D3E8 (CmpAbortLightWeightTransaction.c)
 *     CmpCleanupLightWeightTransaction @ 0x14042D494 (CmpCleanupLightWeightTransaction.c)
 *     CmpLockRegistryExclusive @ 0x1404D85A8 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpCleanupLightWeightPrepare @ 0x1406697BC (CmpCleanupLightWeightPrepare.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x140669A1C (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x140669B9C (CmpPrepareLightWeightTransaction.c)
 */

__int64 __fastcall CmpCommitLightWeightTransaction(__int64 a1)
{
  int v1; // ebp
  signed __int32 v3; // eax
  int v4; // ebx
  _QWORD *v5; // rsi
  signed __int32 v7[14]; // [rsp+0h] [rbp-38h] BYREF

  v1 = 0;
  v3 = _InterlockedCompareExchange((volatile signed __int32 *)a1, 1, 0);
  if ( v3 )
  {
    v4 = -1072103421;
    if ( v3 == 3 )
      return (unsigned int)-1072103403;
  }
  else
  {
    v5 = *(_QWORD **)(a1 + 16);
    if ( v5 )
    {
      v1 = 1;
      CmpLockRegistryExclusive();
    }
    v4 = CmpPrepareLightWeightTransaction(v5);
    if ( v4 >= 0 )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)a1, 2, 1) == 4 )
      {
        CmpCleanupLightWeightPrepare((__int64)v5);
        _InterlockedCompareExchange((volatile signed __int32 *)a1, 3, 4);
        _InterlockedOr(v7, 0);
        if ( *(_QWORD *)(a1 + 8) )
          ExfUnblockPushLock((volatile __int64 *)(a1 + 8), 0LL);
        v4 = -1072103421;
      }
      else
      {
        CmpCommitPreparedLightWeightTransaction(v5);
        if ( v1 )
        {
          CmpUnlockRegistry();
          v1 = 0;
          CmpCleanupLightWeightPrepare((__int64)v5);
          CmpCleanupLightWeightTransaction(v5, 4u);
        }
        v4 = 0;
      }
    }
    else if ( _InterlockedCompareExchange((volatile signed __int32 *)a1, 3, 1) == 1 )
    {
      CmpAbortLightWeightTransaction(a1);
    }
    else
    {
      _InterlockedCompareExchange((volatile signed __int32 *)a1, 3, 4);
      _InterlockedOr(v7, 0);
      if ( *(_QWORD *)(a1 + 8) )
        ExfUnblockPushLock((volatile __int64 *)(a1 + 8), 0LL);
    }
    if ( v1 )
      CmpUnlockRegistry();
  }
  return (unsigned int)v4;
}
