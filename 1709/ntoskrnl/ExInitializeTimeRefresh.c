/*
 * XREFs of ExInitializeTimeRefresh @ 0x14083CB54
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x1405C1FB4 (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     KeSetTimer2 @ 0x1400605A0 (KeSetTimer2.c)
 *     ExInitializeResourceLite @ 0x140089610 (ExInitializeResourceLite.c)
 *     KiInitializeTimer2 @ 0x1400B274C (KiInitializeTimer2.c)
 *     ZwLockProductActivationKeys @ 0x14017F940 (ZwLockProductActivationKeys.c)
 *     ExGetExpirationDate @ 0x1405C2C4C (ExGetExpirationDate.c)
 */

__int64 *ExInitializeTimeRefresh()
{
  __int64 v0; // r8
  __int64 *result; // rax
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF

  ZwLockProductActivationKeys(0LL, 0LL);
  if ( !ExpSystemSetupInProgress )
  {
    if ( (int)ExGetExpirationDate(&ExpNtExpirationDate) < 0 )
      ExpNtExpirationDate.QuadPart = 0LL;
    MEMORY[0xFFFFF780000002C8] = ExpNtExpirationDate.QuadPart;
    ExpShuttingDown = 0;
  }
  LODWORD(ExpTimeRefreshDpc) = 275;
  qword_14035E3F8 = (__int64)ExpTimeRefreshDpcRoutine;
  qword_14035E418 = 0LL;
  qword_14035E400 = (__int64)&ExpOkToTimeRefresh;
  qword_14035E3F0 = 0LL;
  ExpTimeRefreshWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ExpTimeRefreshWork;
  ExpTimeRefreshWorkItem.Parameter = 0LL;
  ExpTimeRefreshWorkItem.List.Flink = 0LL;
  word_14035E342 = 0;
  KiInitializeTimer2((__int64)&ExpTimeRefreshTimer, (__int64)ExpTimeRefreshCallback, 0LL, 8);
  v2[1] = -1LL;
  ExpTimeRefreshInterval = -36000000000LL;
  v2[0] = 0LL;
  KeSetTimer2((__int64)&ExpTimeRefreshTimer, -36000000000LL, v0, (__int64)v2);
  ExInitializeResourceLite(&ExpTimeRefreshLock);
  result = &ExpTimerResolutionListHead;
  qword_14035E4E8 = (__int64)&ExpTimerResolutionListHead;
  ExpTimerResolutionListHead = (__int64)&ExpTimerResolutionListHead;
  return result;
}
