/*
 * XREFs of WheapCreateTriageDumpFromPreviousSession @ 0x14041B9C0
 * Callers:
 *     WheapProcessWorkQueueItem @ 0x14025FC60 (WheapProcessWorkQueueItem.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     WheapCreateLiveTriageDump @ 0x140723E24 (WheapCreateLiveTriageDump.c)
 *     WheapWriteTriageDump @ 0x140724084 (WheapWriteTriageDump.c)
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
