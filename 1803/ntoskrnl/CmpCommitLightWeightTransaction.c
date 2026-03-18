/*
 * XREFs of CmpCommitLightWeightTransaction @ 0x14054BE4C
 * Callers:
 *     NtCommitRegistryTransaction @ 0x14054BD4C (NtCommitRegistryTransaction.c)
 * Callees:
 *     ExfUnblockPushLock @ 0x1401A70F0 (ExfUnblockPushLock.c)
 *     CmpLockRegistryExclusive @ 0x14049BC8C (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpAbortLightWeightTransaction @ 0x14054BBE8 (CmpAbortLightWeightTransaction.c)
 *     CmpCleanupLightWeightTransaction @ 0x14054BEFC (CmpCleanupLightWeightTransaction.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x14054E9B4 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x14054EAD4 (CmpPrepareLightWeightTransaction.c)
 *     CmpCleanupLightWeightPrepare @ 0x14054EBE4 (CmpCleanupLightWeightPrepare.c)
 */

__int64 __fastcall CmpCommitLightWeightTransaction(__int64 a1)
{
  int v1; // ebp
  signed __int32 v3; // eax
  __int64 v4; // rsi
  int v5; // ebx
  signed __int32 v7[14]; // [rsp+0h] [rbp-38h] BYREF

  v1 = 0;
  v3 = _InterlockedCompareExchange((volatile signed __int32 *)a1, 1, 0);
  if ( v3 )
  {
    v5 = -1072103421;
    if ( v3 == 3 )
      return (unsigned int)-1072103403;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 16);
    if ( v4 )
    {
      v1 = 1;
      CmpLockRegistryExclusive();
    }
    v5 = CmpPrepareLightWeightTransaction(v4);
    if ( v5 < 0 )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)a1, 3, 1) == 1 )
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
    }
    else if ( _InterlockedCompareExchange((volatile signed __int32 *)a1, 2, 1) == 4 )
    {
      CmpCleanupLightWeightPrepare(v4);
      _InterlockedCompareExchange((volatile signed __int32 *)a1, 3, 4);
      _InterlockedOr(v7, 0);
      if ( *(_QWORD *)(a1 + 8) )
        ExfUnblockPushLock((volatile __int64 *)(a1 + 8), 0LL);
      v5 = -1072103421;
    }
    else
    {
      CmpCommitPreparedLightWeightTransaction(v4);
      if ( v1 )
      {
        CmpUnlockRegistry();
        v1 = 0;
        CmpCleanupLightWeightPrepare(v4);
        CmpCleanupLightWeightTransaction(v4, 4LL);
      }
      v5 = 0;
    }
    if ( v1 )
      CmpUnlockRegistry();
  }
  return (unsigned int)v5;
}
