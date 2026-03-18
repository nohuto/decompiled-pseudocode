/*
 * XREFs of ?DxgkEngVisRgnUniq@@YAIXZ @ 0x1C00C9330
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005AB30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C005BCF0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

__int64 __fastcall DxgkEngVisRgnUniq(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  int v4; // r8d
  __int64 v5; // rcx

  if ( ghsemVisRgnUniqueness )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemVisRgnUniqueness);
  EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemVisRgnUniqueness", (int)ghsemVisRgnUniqueness, a3);
  v3 = giVisRgnUniqueness + giSpriteUniqueness;
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemVisRgnUniqueness", (int)ghsemVisRgnUniqueness, v4);
  if ( ghsemVisRgnUniqueness )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemVisRgnUniqueness);
    PsLeavePriorityRegion(v5);
  }
  return v3;
}
