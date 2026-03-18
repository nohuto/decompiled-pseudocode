/*
 * XREFs of PopPowerButtonBugcheckConfigure @ 0x1405A83C0
 * Callers:
 *     PopPowerButtonBugcheckWatchCallback @ 0x1406CFF90 (PopPowerButtonBugcheckWatchCallback.c)
 *     PopInitializePowerButtonHold @ 0x14080C4FC (PopInitializePowerButtonHold.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14017E220 (ZwQueryValueKey.c)
 *     ZwNotifyChangeKey @ 0x140180100 (ZwNotifyChangeKey.c)
 */

NTSTATUS __fastcall PopPowerButtonBugcheckConfigure(HANDLE Handle)
{
  struct _KTHREAD *CurrentThread; // rax
  bool v3; // si
  NTSTATUS result; // eax
  ULONG ResultLength; // [rsp+50h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-60h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-50h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+78h] [rbp-40h] BYREF
  int v9; // [rsp+7Ch] [rbp-3Ch]
  int v10; // [rsp+80h] [rbp-38h]
  int v11; // [rsp+84h] [rbp-34h]

  RtlInitUnicodeString(&DestinationString, L"PowerButtonBugcheck");
  v3 = ZwNotifyChangeKey(Handle, 0LL, PopPowerButtonBugcheckWatchWorkItem, (PVOID)1, &IoStatusBlock, 4u, 0, 0LL, 0, 1u) < 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopPowerButtonBugcheckLock, 0LL);
  if ( ZwQueryValueKey(
         Handle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x14u,
         &ResultLength) >= 0
    && v9 == 4
    && v10 == 4 )
  {
    PopPowerButtonBugcheckConfig = (v11 != 0) + 1;
  }
  else
  {
    PopPowerButtonBugcheckConfig = 0;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPowerButtonBugcheckLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopPowerButtonBugcheckLock);
  KeAbPostRelease((ULONG_PTR)&PopPowerButtonBugcheckLock);
  result = KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v3 )
    return ZwClose(Handle);
  return result;
}
