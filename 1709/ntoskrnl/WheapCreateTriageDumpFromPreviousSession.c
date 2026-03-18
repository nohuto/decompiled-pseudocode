/*
 * XREFs of WheapCreateTriageDumpFromPreviousSession @ 0x14043B4C8
 * Callers:
 *     WheapProcessWorkQueueItem @ 0x140289820 (WheapProcessWorkQueueItem.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     WheapCreateLiveTriageDump @ 0x1407638E8 (WheapCreateLiveTriageDump.c)
 *     WheapWriteTriageDump @ 0x140763B4C (WheapWriteTriageDump.c)
 */

__int64 WheapCreateTriageDumpFromPreviousSession()
{
  char v0; // di
  int LiveTriageDump; // ebx

  v0 = 0;
  if ( _InterlockedIncrement(&WheapTriageDumpCreation) <= 1 )
  {
    LiveTriageDump = WheapCreateLiveTriageDump();
    if ( LiveTriageDump >= 0 )
    {
      ExAcquireFastMutex((PFAST_MUTEX)&WheapDispatchPtr.Queue.Wcb.NumberOfChannels);
      WheapTriageDumpGenerated = 1;
      if ( WheapCrashDumpInitialized )
      {
        v0 = 1;
        WheapTriageDumpReported = 1;
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)&WheapDispatchPtr.Queue.Wcb.NumberOfChannels);
      if ( v0 )
      {
        LiveTriageDump = WheapWriteTriageDump();
        ExFreePoolWithTag(WheapTriageDump, 0x61656857u);
        WheapTriageDump = 0LL;
        WheapTriageDumpLength = 0;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)LiveTriageDump;
}
