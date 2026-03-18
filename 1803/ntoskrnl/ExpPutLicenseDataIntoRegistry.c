/*
 * XREFs of ExpPutLicenseDataIntoRegistry @ 0x14054B684
 * Callers:
 *     ExpTimeRefreshWork @ 0x1404777B0 (ExpTimeRefreshWork.c)
 *     ExUpdateLicenseDataInternal @ 0x140548390 (ExUpdateLicenseDataInternal.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwCreateKey @ 0x1401A7860 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1401A80C0 (ZwSetValueKey.c)
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
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140862420, 0LL);
  if ( Data )
  {
    v3 = ZwCreateKey(&KeyHandle, 0x20006u, (POBJECT_ATTRIBUTES)&stru_1407FA0F0, 0, 0LL, 0, 0LL);
    if ( v3 >= 0 )
    {
      v2 = 1;
      v3 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&stru_1407F9510, 0, 3u, Data, *(_DWORD *)Data);
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140862420, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140862420);
  KeAbPostRelease((ULONG_PTR)&qword_140862420);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v2 == 1 )
    ZwClose(KeyHandle);
  return (unsigned int)v3;
}
