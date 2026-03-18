/*
 * XREFs of PpmIdleStartCsVetoAccounting @ 0x14023BB50
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140244A94 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x14023B6D8 (PpmIdleCsVetoAccountingUpdateBlock.c)
 */

__int64 PpmIdleStartCsVetoAccounting()
{
  __int64 result; // rax
  KIRQL v1; // al
  __int64 v2; // r8
  __int64 v3; // rbx
  KIRQL i; // di
  unsigned int v5; // edx
  __int64 v6; // r9
  __int64 v7; // rcx

  result = PpmPlatformStates;
  if ( PpmPlatformStates && *(_DWORD *)(PpmPlatformStates + 4) )
  {
    v1 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
    v2 = PpmPlatformStates;
    v3 = 0LL;
    for ( i = v1; (unsigned int)v3 < *(_DWORD *)PpmPlatformStates; v3 = (unsigned int)(v3 + 1) )
    {
      v5 = 0;
      v6 = v2 + 384 * v3;
      if ( *(_DWORD *)(v6 + 108) )
      {
        do
        {
          v7 = v5++;
          *(_QWORD *)((v7 << 6) + *(_QWORD *)(v6 + 112) + 56) = 0LL;
        }
        while ( v5 < *(_DWORD *)(v6 + 108) );
      }
      PpmIdleCsVetoAccountingUpdateBlock(v6 + 80, 4, 1);
      v2 = PpmPlatformStates;
    }
    KxReleaseSpinLock(&PpmIdleVetoLock);
    result = i;
    __writecr8(i);
  }
  return result;
}
