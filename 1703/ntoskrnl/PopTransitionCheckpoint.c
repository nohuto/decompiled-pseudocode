/*
 * XREFs of PopTransitionCheckpoint @ 0x140576B7C
 * Callers:
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 *     PopGracefulShutdown @ 0x1404199F0 (PopGracefulShutdown.c)
 *     PopPowerInformationInternal @ 0x1404C44B4 (PopPowerInformationInternal.c)
 *     PoUserShutdownInitiated @ 0x1405768F0 (PoUserShutdownInitiated.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x14007157C (PopAcquireRwLockExclusive.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

void __fastcall PopTransitionCheckpoint(int a1, int a2)
{
  _DWORD *PoolWithTag; // rax
  int v5; // r8d
  _QWORD *v6; // rcx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopTransitionCheckpointLock);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x50434B50u);
  v5 = PopTransitionCheckpointsSequenceNumber;
  if ( PoolWithTag )
  {
    PoolWithTag[4] = PopTransitionCheckpointsSequenceNumber;
    PoolWithTag[5] = a1;
    PoolWithTag[6] = a2;
    v6 = (_QWORD *)qword_14034C978;
    if ( *(__int64 **)qword_14034C978 != &PopTransitionCheckpoints )
      __fastfail(3u);
    *(_QWORD *)PoolWithTag = &PopTransitionCheckpoints;
    *((_QWORD *)PoolWithTag + 1) = v6;
    *v6 = PoolWithTag;
    qword_14034C978 = (__int64)PoolWithTag;
  }
  PopBsdTransitionLatestCheckpointSeqNumber = v5;
  PopBsdTransitionLatestCheckpointId = a1;
  PopTransitionCheckpointsSequenceNumber = v5 + 1;
  PopBsdTransitionLatestCheckpointType = a2;
  PopReleaseRwLock((ULONG_PTR)&PopTransitionCheckpointLock);
}
