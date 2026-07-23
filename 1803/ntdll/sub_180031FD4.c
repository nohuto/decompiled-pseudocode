/*
 * XREFs of sub_180031FD4 @ 0x180031FD4
 * Callers:
 *     sub_180031B44 @ 0x180031B44 (sub_180031B44.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180032530 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180034D10 (RtlpCreateProcessRegistryInfo.c)
 *     sub_18006E740 @ 0x18006E740 (sub_18006E740.c)
 *     sub_1800801CC @ 0x1800801CC (sub_1800801CC.c)
 *     RtlSetProcessPreferredUILanguages @ 0x180087CA0 (RtlSetProcessPreferredUILanguages.c)
 *     RtlGetProcessPreferredUILanguages @ 0x180089300 (RtlGetProcessPreferredUILanguages.c)
 *     RtlpCleanupRegistryKeys @ 0x1800E8720 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x18005C890 (RtlInitializeCriticalSectionEx.c)
 *     ZwDelayExecution @ 0x18009B140 (ZwDelayExecution.c)
 */

NTSTATUS sub_180031FD4()
{
  NTSTATUS result; // eax
  LARGE_INTEGER DelayInterval; // [rsp+38h] [rbp+10h] BYREF

  DelayInterval.QuadPart = -1000000LL;
  while ( _InterlockedCompareExchange(&dword_18015D3F0, 1, 0) )
  {
    result = dword_18015D3F0;
    if ( dword_18015D3F0 == 1 )
    {
      ZwDelayExecution(0, &DelayInterval);
      result = dword_18015D3F0;
    }
    if ( result == 2 )
      return result;
  }
  result = RtlInitializeCriticalSectionEx(&stru_18015ABE0, 0, 0);
  dword_18015D3F0 = 2;
  return result;
}
