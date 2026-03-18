/*
 * XREFs of ExpPutLicenseDataIntoRegistry @ 0x1404F33D8
 * Callers:
 *     ExpTimeRefreshWork @ 0x140428DB0 (ExpTimeRefreshWork.c)
 *     ExUpdateLicenseDataInternal @ 0x1404F3810 (ExUpdateLicenseDataInternal.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwCreateKey @ 0x14017DC60 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14017E4C0 (ZwSetValueKey.c)
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
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1407F3AE0, 0LL);
  if ( Data )
  {
    v3 = ZwCreateKey(&KeyHandle, 0x20006u, (POBJECT_ATTRIBUTES)&stru_14078DB68, 0, 0LL, 0, 0LL);
    if ( v3 >= 0 )
    {
      v2 = 1;
      v3 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&stru_14078CF80, 0, 3u, Data, *(_DWORD *)Data);
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1407F3AE0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1407F3AE0);
  KeAbPostRelease((ULONG_PTR)&qword_1407F3AE0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v2 == 1 )
    ZwClose(KeyHandle);
  return (unsigned int)v3;
}
