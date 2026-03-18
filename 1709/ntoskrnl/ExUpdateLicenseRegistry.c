/*
 * XREFs of ExUpdateLicenseRegistry @ 0x140592BA8
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1405925B0 (ExpWatchProductTypeWork.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     NtSetValueKey @ 0x14047AFF0 (NtSetValueKey.c)
 */

__int64 ExUpdateLicenseRegistry()
{
  struct _KTHREAD *CurrentThread; // rax
  HANDLE v1; // rdi
  unsigned int v2; // ebx

  CurrentThread = KeGetCurrentThread();
  v1 = ExpProductTypeKey;
  v2 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1407F3AE0, 0LL);
  if ( Data )
    v2 = NtSetValueKey(v1, (PUNICODE_STRING)&stru_14078CF80, 0, 3u, Data, *(_DWORD *)Data);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1407F3AE0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1407F3AE0);
  KeAbPostRelease((ULONG_PTR)&qword_1407F3AE0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v2;
}
