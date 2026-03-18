/*
 * XREFs of PopPowerButtonBugcheckConfigure @ 0x140627920
 * Callers:
 *     PopPowerButtonBugcheckWatchCallback @ 0x14076BC80 (PopPowerButtonBugcheckWatchCallback.c)
 *     PopInitializePowerButtonHold @ 0x1408A8DD4 (PopInitializePowerButtonHold.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     PopQueryPowerButtonBugcheckConfiguration @ 0x140171F54 (PopQueryPowerButtonBugcheckConfiguration.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x1401A9700 (ZwNotifyChangeKey.c)
 */

NTSTATUS __fastcall PopPowerButtonBugcheckConfigure(HANDLE KeyHandle)
{
  struct _KTHREAD *CurrentThread; // rax
  bool v3; // si
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  char v7; // bl
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-28h] BYREF
  int v10; // [rsp+88h] [rbp+10h] BYREF

  v10 = 0;
  v3 = ZwNotifyChangeKey(
         KeyHandle,
         0LL,
         PopPowerButtonBugcheckWatchWorkItem,
         (PVOID)1,
         &IoStatusBlock,
         4u,
         0,
         0LL,
         0,
         1u) < 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopPowerButtonBugcheckLock, 0LL);
  if ( PopQueryPowerButtonBugcheckConfiguration(KeyHandle, &v10) < 0 )
    PopPowerButtonBugcheckConfig = 0;
  else
    PopPowerButtonBugcheckConfig = (v10 != 0) + 1;
  v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PopPowerButtonBugcheckLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopPowerButtonBugcheckLock, v4, v5, v6);
  KeAbPostRelease((ULONG_PTR)&PopPowerButtonBugcheckLock);
  result = (unsigned int)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v3 )
    return ZwClose(KeyHandle);
  return result;
}
