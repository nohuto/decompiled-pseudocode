/*
 * XREFs of WheaCrashDumpInitializationComplete @ 0x1405F26E0
 * Callers:
 *     NtSetSystemInformation @ 0x140469CA0 (NtSetSystemInformation.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     WheapWriteTriageDump @ 0x140763B4C (WheapWriteTriageDump.c)
 */

__int64 WheaCrashDumpInitializationComplete()
{
  char v0; // di
  unsigned int v1; // ebx

  v0 = 0;
  v1 = 0;
  ExAcquireFastMutex((PFAST_MUTEX)&WheapDispatchPtr.Queue.Wcb.NumberOfChannels);
  WheapCrashDumpInitialized = 1;
  if ( WheapTriageDumpGenerated && !WheapTriageDumpReported )
  {
    v0 = 1;
    WheapTriageDumpReported = 1;
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&WheapDispatchPtr.Queue.Wcb.NumberOfChannels);
  if ( v0 )
  {
    v1 = WheapWriteTriageDump();
    ExFreePoolWithTag(WheapTriageDump, 0x61656857u);
    WheapTriageDump = 0LL;
    WheapTriageDumpLength = 0;
  }
  return v1;
}
