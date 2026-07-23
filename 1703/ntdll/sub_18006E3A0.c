/*
 * XREFs of sub_18006E3A0 @ 0x18006E3A0
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180040520 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180040DB0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlSetProcessPreferredUILanguages @ 0x18006C0F0 (RtlSetProcessPreferredUILanguages.c)
 *     sub_18006C280 @ 0x18006C280 (sub_18006C280.c)
 *     sub_18006C54C @ 0x18006C54C (sub_18006C54C.c)
 *     sub_18006DC8C @ 0x18006DC8C (sub_18006DC8C.c)
 *     RtlGetProcessPreferredUILanguages @ 0x1800EBAB0 (RtlGetProcessPreferredUILanguages.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EC730 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x18000F440 (RtlInitializeCriticalSectionEx.c)
 *     ZwDelayExecution @ 0x1800A5980 (ZwDelayExecution.c)
 */

NTSTATUS sub_18006E3A0()
{
  NTSTATUS result; // eax
  LARGE_INTEGER DelayInterval; // [rsp+38h] [rbp+10h] BYREF

  DelayInterval.QuadPart = -1000000LL;
  while ( _InterlockedCompareExchange(&dword_18015C270, 1, 0) )
  {
    result = dword_18015C270;
    if ( dword_18015C270 == 1 )
    {
      ZwDelayExecution(0, &DelayInterval);
      result = dword_18015C270;
    }
    if ( result == 2 )
      return result;
  }
  result = RtlInitializeCriticalSectionEx(&stru_180159BA0, 0, 0);
  dword_18015C270 = 2;
  return result;
}
