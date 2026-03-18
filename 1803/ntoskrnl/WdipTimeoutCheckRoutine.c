/*
 * XREFs of WdipTimeoutCheckRoutine @ 0x14052DCB0
 * Callers:
 *     <none>
 * Callees:
 *     ExSetTimer @ 0x140085490 (ExSetTimer.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x14052DB58 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     WdipSemMarkNextTimedOutInstanceForDeletion @ 0x14052DC1C (WdipSemMarkNextTimedOutInstanceForDeletion.c)
 *     WdipSemDeleteTransitionalInstance @ 0x14060C924 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemDisableContextProviders @ 0x14060DA50 (WdipSemDisableContextProviders.c)
 *     WdipSemLogTimeoutInformation @ 0x1407A1A38 (WdipSemLogTimeoutInformation.c)
 */

_BOOL8 WdipTimeoutCheckRoutine()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // rdx
  __int64 *TimedOutInstanceForDeletion; // rdi
  __int64 v5; // rbx
  __int64 *v7; // rbx
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 *v10; // r8

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&WdipSemPushLock, 0LL);
  WdipSemSqmLogInflightLimitExceededDataPoints();
  if ( WdipSemTimeoutEnabled )
  {
    TimedOutInstanceForDeletion = WdipSemMarkNextTimedOutInstanceForDeletion((__int64 **)&WdipSemEnabledInstanceTable);
    while ( TimedOutInstanceForDeletion )
    {
      LOBYTE(v3) = 1;
      WdipSemDisableContextProviders(TimedOutInstanceForDeletion, v3);
      v7 = TimedOutInstanceForDeletion;
      v8 = WdipSemMarkNextTimedOutInstanceForDeletion((__int64 **)TimedOutInstanceForDeletion);
      v9 = TimedOutInstanceForDeletion[4];
      v10 = TimedOutInstanceForDeletion + 2;
      TimedOutInstanceForDeletion = v8;
      WdipSemLogTimeoutInformation(v9, *(unsigned __int16 *)(v9 + 16), v10);
      WdipSemDeleteTransitionalInstance(v7);
    }
  }
  v5 = WdipSemOneSecond * (WdipSemTimeoutValue / 0xAu);
  ExReleasePushLockEx((ULONG_PTR)&WdipSemPushLock, 0LL, v1, v2);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return ExSetTimer(WdipTimeoutTimer, v5, 0LL, (__int64)&WdipTimeoutTimerParameters);
}
