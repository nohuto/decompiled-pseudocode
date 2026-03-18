/*
 * XREFs of ExInitializeTimeRefresh @ 0x140808838
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x1405A588C (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     KeSetTimer2 @ 0x140049180 (KeSetTimer2.c)
 *     ExInitializeResourceLite @ 0x140093AD0 (ExInitializeResourceLite.c)
 *     KiInitializeTimer2 @ 0x14012A6A0 (KiInitializeTimer2.c)
 *     ZwLockProductActivationKeys @ 0x14017FFA0 (ZwLockProductActivationKeys.c)
 *     ExGetExpirationDate @ 0x1405A651C (ExGetExpirationDate.c)
 */

__int64 *ExInitializeTimeRefresh()
{
  LARGE_INTEGER v0; // rax
  __int64 v1; // r8
  __int64 *result; // rax
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  ZwLockProductActivationKeys(0LL, 0LL);
  if ( !ExpSystemSetupInProgress )
  {
    if ( (int)ExGetExpirationDate(&ExpNtExpirationDate) < 0 )
    {
      v0.QuadPart = 0LL;
      ExpNtExpirationDate.QuadPart = 0LL;
    }
    else
    {
      v0 = ExpNtExpirationDate;
    }
    MEMORY[0xFFFFF780000002C8] = v0.QuadPart;
    ExpShuttingDown = 0;
  }
  LODWORD(ExpTimeRefreshDpc) = 275;
  qword_140344898 = (__int64)ExpTimeRefreshDpcRoutine;
  qword_1403448B8 = 0LL;
  qword_1403448A0 = (__int64)&ExpOkToTimeRefresh;
  qword_140344890 = 0LL;
  ExpTimeRefreshWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ExpTimeRefreshWork;
  ExpTimeRefreshWorkItem.Parameter = 0LL;
  ExpTimeRefreshWorkItem.List.Flink = 0LL;
  word_1403447A2 = 0;
  KiInitializeTimer2((__int64)&ExpTimeRefreshTimer, (__int64)ExpTimeRefreshCallback, 0LL, 8);
  v3[1] = -1LL;
  ExpTimeRefreshInterval = -36000000000LL;
  v3[0] = 0LL;
  KeSetTimer2((__int64)&ExpTimeRefreshTimer, -36000000000LL, v1, (__int64)v3);
  ExInitializeResourceLite(&ExpTimeRefreshLock);
  result = &ExpTimerResolutionListHead;
  qword_140344988 = (__int64)&ExpTimerResolutionListHead;
  ExpTimerResolutionListHead = (__int64)&ExpTimerResolutionListHead;
  return result;
}
