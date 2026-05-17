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

__int64 RtlpInitMuiCriticalSection()
{
  __int64 result; // rax
  __int64 v1; // [rsp+38h] [rbp+10h] BYREF

  v1 = -1000000LL;
  while ( _InterlockedCompareExchange(&InitRegistryInfoCritSect, 1, 0) )
  {
    result = (unsigned int)InitRegistryInfoCritSect;
    if ( InitRegistryInfoCritSect == 1 )
    {
      ZwDelayExecution(0LL, &v1);
      result = (unsigned int)InitRegistryInfoCritSect;
    }
    if ( (_DWORD)result == 2 )
      return result;
  }
  result = RtlInitializeCriticalSectionEx(&RegistryInfoCritSect, 0LL, 0LL);
  InitRegistryInfoCritSect = 2;
  return result;
}
