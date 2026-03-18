/*
 * XREFs of ExInitializeTimeRefresh @ 0x1408B1178
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x14062FA98 (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     KeSetTimer2 @ 0x140037E50 (KeSetTimer2.c)
 *     KiInitializeTimer2 @ 0x14008605C (KiInitializeTimer2.c)
 *     ExInitializeResourceLite @ 0x1400F3430 (ExInitializeResourceLite.c)
 *     ZwLockProductActivationKeys @ 0x1401A9560 (ZwLockProductActivationKeys.c)
 *     ExGetExpirationDate @ 0x14063071C (ExGetExpirationDate.c)
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
  qword_1403A1898 = (__int64)ExpTimeRefreshDpcRoutine;
  qword_1403A18B8 = 0LL;
  qword_1403A18A0 = (__int64)&ExpOkToTimeRefresh;
  qword_1403A1890 = 0LL;
  ExpTimeRefreshWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ExpTimeRefreshWork;
  ExpTimeRefreshWorkItem.Parameter = 0LL;
  ExpTimeRefreshWorkItem.List.Flink = 0LL;
  word_1403A1A02 = 0;
  KiInitializeTimer2((__int64)&ExpTimeRefreshTimer, (__int64)ExpTimeRefreshCallback, 0LL, 8);
  v2[1] = -1LL;
  ExpTimeRefreshInterval = -36000000000LL;
  v2[0] = 0LL;
  KeSetTimer2((__int64)&ExpTimeRefreshTimer, -36000000000LL, v0, (__int64)v2);
  ExInitializeResourceLite(&ExpTimeRefreshLock);
  result = &ExpTimerResolutionListHead;
  qword_1403A1B28 = (__int64)&ExpTimerResolutionListHead;
  ExpTimerResolutionListHead = (__int64)&ExpTimerResolutionListHead;
  return result;
}
