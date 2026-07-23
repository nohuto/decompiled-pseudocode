/*
 * XREFs of RtlpInitMuiCriticalSection @ 0x1800061E0
 * Callers:
 *     RtlSetProcessPreferredUILanguages @ 0x1800033D0 (RtlSetProcessPreferredUILanguages.c)
 *     RtlUpdateProcessRegistryInfo @ 0x1800035F8 (RtlUpdateProcessRegistryInfo.c)
 *     RtlpSetProcMergedLangList @ 0x1800045FC (RtlpSetProcMergedLangList.c)
 *     RtlpSetProcUserMachineLangList @ 0x180005D20 (RtlpSetProcUserMachineLangList.c)
 *     RtlGetThreadPreferredUILanguages @ 0x18002C530 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18002CDB0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlGetProcessPreferredUILanguages @ 0x1800907A0 (RtlGetProcessPreferredUILanguages.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EC2B0 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x180009D10 (RtlInitializeCriticalSectionEx.c)
 *     ZwDelayExecution @ 0x1800A0740 (ZwDelayExecution.c)
 */

NTSTATUS RtlpInitMuiCriticalSection()
{
  NTSTATUS result; // eax
  LARGE_INTEGER DelayInterval; // [rsp+38h] [rbp+10h] BYREF

  DelayInterval.QuadPart = -1000000LL;
  while ( _InterlockedCompareExchange(&InitRegistryInfoCritSect, 1, 0) )
  {
    result = InitRegistryInfoCritSect;
    if ( InitRegistryInfoCritSect == 1 )
    {
      ZwDelayExecution(0, &DelayInterval);
      result = InitRegistryInfoCritSect;
    }
    if ( result == 2 )
      return result;
  }
  result = RtlInitializeCriticalSectionEx(&RegistryInfoCritSect, 0, 0);
  InitRegistryInfoCritSect = 2;
  return result;
}
