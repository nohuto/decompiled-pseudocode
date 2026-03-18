/*
 * XREFs of PopBootStatRestoreDefaults @ 0x14076C05C
 * Callers:
 *     PopPowerInformationInternal @ 0x140522340 (PopPowerInformationInternal.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     RtlUnlockBootStatusData @ 0x14060F250 (RtlUnlockBootStatusData.c)
 *     RtlLockBootStatusData @ 0x14060F700 (RtlLockBootStatusData.c)
 *     PopBootStatAccessCheck @ 0x1406501D4 (PopBootStatAccessCheck.c)
 *     RtlRestoreBootStatusDefaults @ 0x140786D28 (RtlRestoreBootStatusDefaults.c)
 */

__int64 PopBootStatRestoreDefaults()
{
  KPROCESSOR_MODE PreviousMode; // bp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // rdx
  int v3; // esi
  __int64 v4; // r8
  __int64 v5; // r9
  HANDLE FileHandle; // [rsp+30h] [rbp+8h] BYREF

  FileHandle = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopBootStatLock, 0LL);
  v3 = RtlLockBootStatusData(&FileHandle);
  if ( v3 >= 0 )
  {
    if ( !PreviousMode || (v3 = PopBootStatAccessCheck(FileHandle, PreviousMode, 1u), v3 >= 0) )
      v3 = RtlRestoreBootStatusDefaults(FileHandle);
  }
  if ( FileHandle )
    RtlUnlockBootStatusData(FileHandle);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopBootStatLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopBootStatLock, v2, v4, v5);
  KeAbPostRelease((ULONG_PTR)&PopBootStatLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v3;
}
