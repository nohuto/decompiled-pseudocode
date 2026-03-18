/*
 * XREFs of PpmEnableCoordinatedIdleStates @ 0x1406F5CE4
 * Callers:
 *     PpmInstallCoordinatedIdleStates @ 0x1406F5D30 (PpmInstallCoordinatedIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x1406F62E0 (PpmInstallPlatformIdleStates.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     PpmGetDeepSleepPlatformStateIndex @ 0x14023ABF0 (PpmGetDeepSleepPlatformStateIndex.c)
 *     PopFxEnablePlatformStates @ 0x14023DEE4 (PopFxEnablePlatformStates.c)
 */

__int64 __fastcall PpmEnableCoordinatedIdleStates(int *a1, char a2)
{
  __int64 result; // rax

  PpmIdleCoordinatedMode = a2;
  PpmPlatformStates = (__int64)a1;
  PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
  PopFxEnablePlatformStates(*a1);
  result = PpmGetDeepSleepPlatformStateIndex();
  if ( (_DWORD)result != -1 )
    return (unsigned int)_InterlockedExchange(&dword_140389CC0, result);
  return result;
}
