/*
 * XREFs of WheaCrashDumpInitializationComplete @ 0x1406557F0
 * Callers:
 *     NtSetSystemInformation @ 0x14048D108 (NtSetSystemInformation.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     WheapWriteTriageDump @ 0x1407CB834 (WheapWriteTriageDump.c)
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
