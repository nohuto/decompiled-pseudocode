/*
 * XREFs of ExUpdateOsPfnInRegistry @ 0x140757490
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwCreateKey @ 0x14017DC60 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14017E4C0 (ZwSetValueKey.c)
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
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1407F3AE0, 0LL);
  if ( DataSize )
  {
    if ( a3 )
    {
      v11 = ZwCreateKey(&KeyHandle, 0x20006u, (POBJECT_ATTRIBUTES)&stru_14078DB38, 0, 0LL, 0, 0LL);
      if ( v11 >= 0 )
      {
        v10 = 1;
        v11 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&stru_14078CB58, 0, 1u, Data, DataSize);
        if ( v11 >= 0 )
          v11 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&stru_14078CF70, 0, 1u, a4, a3);
      }
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1407F3AE0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1407F3AE0);
  KeAbPostRelease((ULONG_PTR)&qword_1407F3AE0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v10 == 1 )
    ZwClose(KeyHandle);
  return (unsigned int)v11;
}
