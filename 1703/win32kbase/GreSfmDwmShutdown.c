/*
 * XREFs of GreSfmDwmShutdown @ 0x1C007D2A0
 * Callers:
 *     <none>
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0076C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?DeInitialize@SfmTokenArray@@QEAAXXZ @ 0x1C007E020 (-DeInitialize@SfmTokenArray@@QEAAXXZ.c)
 */

__int64 GreSfmDwmShutdown()
{
  __int64 result; // rax
  __int64 v1; // rcx

  EngAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDwmState", (int)ghsemDwmState, 7);
  SfmTokenArray::DeInitialize(gpSfmState);
  if ( (int)IsGrepSfmRemoveSurfacesSupported() >= 0 )
    GrepSfmRemoveSurfaces();
  result = EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDwmState");
  if ( ghsemDwmState )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDwmState);
    return PsLeavePriorityRegion(v1);
  }
  return result;
}
