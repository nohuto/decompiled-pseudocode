/*
 * XREFs of ExUpdateLicenseRegistry @ 0x14057A3E4
 * Callers:
 *     ExpWatchProductTypeWork @ 0x140579DB0 (ExpWatchProductTypeWork.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     NtSetValueKey @ 0x1404A3E60 (NtSetValueKey.c)
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
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140862420, 0LL);
  if ( Data )
    v2 = NtSetValueKey(v1, (PUNICODE_STRING)&stru_1407F9510, 0, 3u, Data, *(_DWORD *)Data);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140862420, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140862420);
  KeAbPostRelease((ULONG_PTR)&qword_140862420);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v2;
}
