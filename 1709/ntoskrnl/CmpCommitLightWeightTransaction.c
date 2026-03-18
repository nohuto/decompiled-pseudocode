/*
 * XREFs of CmpCommitLightWeightTransaction @ 0x14044B9BC
 * Callers:
 *     NtCommitRegistryTransaction @ 0x14044B8F0 (NtCommitRegistryTransaction.c)
 * Callees:
 *     ExfUnblockPushLock @ 0x14017D4F0 (ExfUnblockPushLock.c)
 *     CmpCleanupLightWeightPrepare @ 0x14044BA6C (CmpCleanupLightWeightPrepare.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x14044BBC8 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x14044BCDC (CmpPrepareLightWeightTransaction.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpLockRegistryExclusive @ 0x1404E3BCC (CmpLockRegistryExclusive.c)
 *     CmpAbortLightWeightTransaction @ 0x140568928 (CmpAbortLightWeightTransaction.c)
 *     CmpCleanupLightWeightTransaction @ 0x1405689D4 (CmpCleanupLightWeightTransaction.c)
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
