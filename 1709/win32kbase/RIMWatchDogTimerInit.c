/*
 * XREFs of RIMWatchDogTimerInit @ 0x1C00FF690
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 */

void __fastcall RIMWatchDogTimerInit(struct _KTIMER *a1)
{
  RIMLockExclusive((__int64)&gWatchDogQPCLock);
  if ( a1 )
  {
    gWatchDogTimer = a1;
  }
  else
  {
    gWatchDogTimer = 0LL;
    gbWatchDogTimerArmed = 0;
  }
  qword_1C0193AC8 = 0LL;
  ExReleasePushLockExclusiveEx(&gWatchDogQPCLock, 0LL);
  KeLeaveCriticalRegion();
}
