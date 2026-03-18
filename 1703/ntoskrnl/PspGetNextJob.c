/*
 * XREFs of PspGetNextJob @ 0x14054B100
 * Callers:
 *     PspEnforceLimits @ 0x140478970 (PspEnforceLimits.c)
 *     PspGetNextSilo @ 0x14054B0C4 (PspGetNextSilo.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x1400EFD50 (ObReferenceObjectSafeWithTag.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 */

__int64 *__fastcall PspGetNextJob(_QWORD *Object)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 *v3; // rsi
  __int64 *v4; // r14

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = 0LL;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PspJobListLock, 0LL);
  if ( Object )
    v4 = (__int64 *)Object[3];
  else
    v4 = (__int64 *)PspJobList;
  if ( v4 != &PspJobList )
  {
    while ( !ObReferenceObjectSafeWithTag((__int64)(v4 - 3)) )
    {
      v4 = (__int64 *)*v4;
      if ( v4 == &PspJobList )
        goto LABEL_6;
    }
    v3 = v4 - 3;
  }
LABEL_6:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspJobListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspJobListLock);
  KeAbPostRelease((ULONG_PTR)&PspJobListLock);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457350u);
  return v3;
}
