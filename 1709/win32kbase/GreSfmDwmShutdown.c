/*
 * XREFs of GreSfmDwmShutdown @ 0x1C009BCA0
 * Callers:
 *     <none>
 * Callees:
 *     ?DeInitialize@SfmTokenArray@@QEAAXXZ @ 0x1C001F340 (-DeInitialize@SfmTokenArray@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C003E250 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0070F10 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

__int64 GreSfmDwmShutdown()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  int v2; // r8d
  __int64 result; // rax
  __int64 v4; // rcx

  EngAcquireSemaphore((HSEMAPHORE)ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDwmState", (int)ghsemDwmState, 7);
  SfmTokenArray::DeInitialize(gpSfmState, v0, v1);
  if ( (int)IsGrepSfmRemoveSurfacesSupported() >= 0 )
    GrepSfmRemoveSurfaces();
  result = EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDwmState", (int)ghsemDwmState, v2);
  if ( ghsemDwmState )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDwmState);
    return PsLeavePriorityRegion(v4);
  }
  return result;
}
