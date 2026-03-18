/*
 * XREFs of ExpPutLicenseDataIntoRegistry @ 0x14045D6C4
 * Callers:
 *     ExpTimeRefreshWork @ 0x14041A8E0 (ExpTimeRefreshWork.c)
 *     ExUpdateLicenseDataInternal @ 0x1404AEAB0 (ExUpdateLicenseDataInternal.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwCreateKey @ 0x14017E2E0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14017EB40 (ZwSetValueKey.c)
 */

__int64 ExpPutLicenseDataIntoRegistry()
{
  struct _KTHREAD *CurrentThread; // rax
  char v2; // [rsp+50h] [rbp+8h]
  NTSTATUS v3; // [rsp+58h] [rbp+10h]
  HANDLE KeyHandle; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0;
  KeyHandle = 0LL;
  v2 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1407ACA60, 0LL);
  if ( Data )
  {
    v3 = ZwCreateKey(&KeyHandle, 0x20006u, (POBJECT_ATTRIBUTES)&stru_14074B2C8, 0, 0LL, 0, 0LL);
    if ( v3 >= 0 )
    {
      v2 = 1;
      v3 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&stru_14074A780, 0, 3u, Data, *(_DWORD *)Data);
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1407ACA60, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1407ACA60);
  KeAbPostRelease((ULONG_PTR)&qword_1407ACA60);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v2 == 1 )
    ZwClose(KeyHandle);
  return (unsigned int)v3;
}
