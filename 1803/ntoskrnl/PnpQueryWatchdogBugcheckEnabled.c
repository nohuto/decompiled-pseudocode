/*
 * XREFs of PnpQueryWatchdogBugcheckEnabled @ 0x14015EF80
 * Callers:
 *     PnpDisableWatchdog @ 0x140075428 (PnpDisableWatchdog.c)
 *     PnpQueryWatchdogTimeout @ 0x1400758EC (PnpQueryWatchdogTimeout.c)
 *     PnpProcessWatchdogWorkItem @ 0x14015F108 (PnpProcessWatchdogWorkItem.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

char PnpQueryWatchdogBugcheckEnabled()
{
  struct _KTHREAD *CurrentThread; // rax
  char v1; // bl
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  char v5; // di

  CurrentThread = KeGetCurrentThread();
  v1 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PnpWatchdogBugcheckLock, 0LL);
  if ( !(_BYTE)dword_14044B190 && (PnpSetupOOBEInProgress || PnpSetupInProgress) )
    v1 = 1;
  if ( PnpWatchdogBugcheckConfig )
  {
    if ( PnpWatchdogBugcheckConfig == 1 )
      v1 = 1;
  }
  else
  {
    v1 = 0;
  }
  v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PnpWatchdogBugcheckLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v5 & 2) != 0 && (v5 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PnpWatchdogBugcheckLock, v2, v3, v4);
  KeAbPostRelease((ULONG_PTR)&PnpWatchdogBugcheckLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v1;
}
