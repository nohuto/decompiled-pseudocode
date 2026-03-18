/*
 * XREFs of PopTransitionCheckpoint @ 0x1406F5940
 * Callers:
 *     PopGracefulShutdown @ 0x140431740 (PopGracefulShutdown.c)
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 *     PopPowerInformationInternal @ 0x1404EA1F0 (PopPowerInformationInternal.c)
 *     PoUserShutdownInitiated @ 0x1406FDA60 (PoUserShutdownInitiated.c)
 * Callees:
 *     PsIsHostSilo @ 0x1400859F0 (PsIsHostSilo.c)
 *     PsGetCurrentServerSilo @ 0x140089070 (PsGetCurrentServerSilo.c)
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

void __fastcall PopTransitionCheckpoint(int a1, int a2)
{
  __int64 CurrentServerSilo; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rdx
  _QWORD *v7; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( PsIsHostSilo(CurrentServerSilo) )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopTransitionCheckpointLock);
    if ( PopTransitionCheckpoints != &PopTransitionCheckpoints || a1 == 1 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x50434B50u);
      v6 = PoolWithTag;
      if ( PoolWithTag )
      {
        *((_DWORD *)PoolWithTag + 4) = PopTransitionCheckpointsSequenceNumber;
        *((_DWORD *)PoolWithTag + 5) = a1;
        *((_DWORD *)PoolWithTag + 6) = a2;
        PoolWithTag[4] = MEMORY[0xFFFFF78000000008];
        v7 = (_QWORD *)qword_1403673E8;
        if ( *(PVOID **)qword_1403673E8 != &PopTransitionCheckpoints )
          __fastfail(3u);
        *v6 = &PopTransitionCheckpoints;
        v6[1] = v7;
        *v7 = v6;
        qword_1403673E8 = (__int64)v6;
      }
      PopBsdTransitionLatestCheckpointSeqNumber = PopTransitionCheckpointsSequenceNumber++;
      PopBsdTransitionLatestCheckpointId = a1;
      PopBsdTransitionLatestCheckpointType = a2;
    }
    PopReleaseRwLock((ULONG_PTR)&PopTransitionCheckpointLock);
  }
}
