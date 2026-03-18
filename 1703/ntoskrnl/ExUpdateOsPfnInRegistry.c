/*
 * XREFs of ExUpdateOsPfnInRegistry @ 0x140717D10
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwCreateKey @ 0x14017E2E0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14017EB40 (ZwSetValueKey.c)
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
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1407ACA60, 0LL);
  if ( DataSize )
  {
    if ( a3 )
    {
      v11 = ZwCreateKey(&KeyHandle, 0x20006u, (POBJECT_ATTRIBUTES)&stru_14074B2F8, 0, 0LL, 0, 0LL);
      if ( v11 >= 0 )
      {
        v10 = 1;
        v11 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&stru_14074A398, 0, 1u, Data, DataSize);
        if ( v11 >= 0 )
          v11 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&stru_14074A7A0, 0, 1u, a4, a3);
      }
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1407ACA60, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1407ACA60);
  KeAbPostRelease((ULONG_PTR)&qword_1407ACA60);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v10 == 1 )
    ZwClose(KeyHandle);
  return (unsigned int)v11;
}
