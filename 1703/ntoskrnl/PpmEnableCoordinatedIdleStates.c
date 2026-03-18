/*
 * XREFs of PpmEnableCoordinatedIdleStates @ 0x1406C5A4C
 * Callers:
 *     PpmInstallCoordinatedIdleStates @ 0x1406C5A80 (PpmInstallCoordinatedIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x1406C6000 (PpmInstallPlatformIdleStates.c)
 * Callees:
 *     PpmGetDeepSleepPlatformStateIndex @ 0x140227C38 (PpmGetDeepSleepPlatformStateIndex.c)
 *     PopFxEnablePlatformStates @ 0x14022AD14 (PopFxEnablePlatformStates.c)
 */

__int64 __fastcall PpmEnableCoordinatedIdleStates(int *a1, char a2)
{
  __int64 result; // rax

  PpmIdleCoordinatedMode = a2;
  PpmPlatformStates = (__int64)a1;
  PopFxEnablePlatformStates(*a1);
  result = PpmGetDeepSleepPlatformStateIndex();
  if ( (_DWORD)result != -1 )
    return (unsigned int)_InterlockedExchange(&dword_14036E240, result);
  return result;
}
