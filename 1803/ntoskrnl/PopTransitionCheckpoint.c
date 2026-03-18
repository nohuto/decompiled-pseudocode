/*
 * XREFs of PopTransitionCheckpoint @ 0x1405EBCD4
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 *     PopGracefulShutdown @ 0x140485D40 (PopGracefulShutdown.c)
 *     PopPowerInformationInternal @ 0x140522340 (PopPowerInformationInternal.c)
 *     PoUserShutdownInitiated @ 0x1405EBBD0 (PoUserShutdownInitiated.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 *     PsGetCurrentServerSilo @ 0x1400F17B0 (PsGetCurrentServerSilo.c)
 *     PsIsHostSilo @ 0x140108640 (PsIsHostSilo.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
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
        v7 = (_QWORD *)qword_1403ABC68;
        if ( *(PVOID **)qword_1403ABC68 != &PopTransitionCheckpoints )
          __fastfail(3u);
        *v6 = &PopTransitionCheckpoints;
        v6[1] = v7;
        *v7 = v6;
        qword_1403ABC68 = (__int64)v6;
      }
      PopBsdTransitionLatestCheckpointSeqNumber = PopTransitionCheckpointsSequenceNumber++;
      PopBsdTransitionLatestCheckpointId = a1;
      PopBsdTransitionLatestCheckpointType = a2;
    }
    PopReleaseRwLock((ULONG_PTR)&PopTransitionCheckpointLock);
  }
}
