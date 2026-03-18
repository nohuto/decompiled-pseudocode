/*
 * XREFs of ExUpdateLicenseRegistry @ 0x140455E24
 * Callers:
 *     ExpWatchProductTypeWork @ 0x140455830 (ExpWatchProductTypeWork.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     NtSetValueKey @ 0x14048EDA0 (NtSetValueKey.c)
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
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1407ACA60, 0LL);
  if ( Data )
    v2 = NtSetValueKey(v1, (PUNICODE_STRING)&stru_14074A780, 0, 3u, Data, *(_DWORD *)Data);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1407ACA60, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1407ACA60);
  KeAbPostRelease((ULONG_PTR)&qword_1407ACA60);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v2;
}
