/*
 * XREFs of PspGetNextJob @ 0x1405109D0
 * Callers:
 *     PspEnforceLimits @ 0x14050F6C0 (PspEnforceLimits.c)
 *     PspGetNextSilo @ 0x140510998 (PspGetNextSilo.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x140083060 (ObReferenceObjectSafeWithTag.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 */

__int64 *__fastcall PspGetNextJob(_QWORD *Object)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 *v3; // rsi
  __int64 *v4; // rbx

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PspJobListLock, 0LL);
  v4 = (__int64 *)PspJobList;
  if ( Object )
    v4 = (__int64 *)Object[3];
  while ( v4 != &PspJobList )
  {
    if ( ObReferenceObjectSafeWithTag((__int64)(v4 - 3)) )
    {
      v3 = v4 - 3;
      break;
    }
    v4 = (__int64 *)*v4;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspJobListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspJobListLock);
  KeAbPostRelease((ULONG_PTR)&PspJobListLock);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457350u);
  return v3;
}
