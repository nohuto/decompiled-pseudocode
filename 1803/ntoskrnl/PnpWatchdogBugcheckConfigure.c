/*
 * XREFs of PnpWatchdogBugcheckConfigure @ 0x14060594C
 * Callers:
 *     PnpWatchdogBugcheckWatchCallback @ 0x1405F4180 (PnpWatchdogBugcheckWatchCallback.c)
 *     PnpInitializePnpWatchdogs @ 0x1408B786C (PnpInitializePnpWatchdogs.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1401A77A0 (ZwQueryValueKey.c)
 *     ZwNotifyChangeKey @ 0x1401A9700 (ZwNotifyChangeKey.c)
 */

NTSTATUS __fastcall PnpWatchdogBugcheckConfigure(HANDLE Handle)
{
  struct _KTHREAD *CurrentThread; // rax
  bool v3; // bp
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  bool v8; // di
  bool v9; // sf
  int v10; // eax
  char v11; // bl
  NTSTATUS result; // eax
  ULONG ResultLength; // [rsp+50h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-60h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-50h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+78h] [rbp-40h] BYREF
  int v17; // [rsp+7Ch] [rbp-3Ch]
  int v18; // [rsp+80h] [rbp-38h]
  int v19; // [rsp+84h] [rbp-34h]

  v3 = ZwNotifyChangeKey(Handle, 0LL, PnpWatchdogBugcheckWatchWorkItem, (PVOID)1, &IoStatusBlock, 4u, 0, 0LL, 0, 1u) < 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PnpWatchdogBugcheckLock, 0LL);
  RtlInitUnicodeString(&DestinationString, L"PnpWatchdogBugcheckEnabled");
  v4 = ZwQueryValueKey(
         Handle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x14u,
         &ResultLength);
  v8 = v4 >= 0 && v17 == 4 && v18 == 4 && v19 != 0;
  v9 = v4 < 0;
  v10 = 2;
  if ( !v9 )
    v10 = v8;
  PnpWatchdogBugcheckConfig = v10;
  v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PnpWatchdogBugcheckLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v11 & 2) != 0 && (v11 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PnpWatchdogBugcheckLock, v5, v6, v7);
  KeAbPostRelease((ULONG_PTR)&PnpWatchdogBugcheckLock);
  result = (unsigned int)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v3 )
    return ZwClose(Handle);
  return result;
}
