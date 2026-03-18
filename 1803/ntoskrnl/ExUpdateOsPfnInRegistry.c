/*
 * XREFs of ExUpdateOsPfnInRegistry @ 0x1407BE110
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwCreateKey @ 0x1401A7860 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1401A80C0 (ZwSetValueKey.c)
 */

__int64 __fastcall ExUpdateOsPfnInRegistry(ULONG DataSize, PVOID Data, ULONG a3, PVOID a4)
{
  struct _KTHREAD *CurrentThread; // rax
  char v10; // [rsp+40h] [rbp-28h]
  NTSTATUS v11; // [rsp+44h] [rbp-24h]
  HANDLE KeyHandle; // [rsp+48h] [rbp-20h] BYREF

  v11 = 0;
  KeyHandle = 0LL;
  v10 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140862420, 0LL);
  if ( DataSize )
  {
    if ( a3 )
    {
      v11 = ZwCreateKey(&KeyHandle, 0x20006u, (POBJECT_ATTRIBUTES)&stru_1407FA120, 0, 0LL, 0, 0LL);
      if ( v11 >= 0 )
      {
        v10 = 1;
        v11 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&stru_1407F90D0, 0, 1u, Data, DataSize);
        if ( v11 >= 0 )
          v11 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&stru_1407F9520, 0, 1u, a4, a3);
      }
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140862420, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140862420);
  KeAbPostRelease((ULONG_PTR)&qword_140862420);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v10 == 1 )
    ZwClose(KeyHandle);
  return (unsigned int)v11;
}
