/*
 * XREFs of EngAcquireSemaphoreShared @ 0x1C00FB5B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall EngAcquireSemaphoreShared(HSEMAPHORE hsem)
{
  if ( hsem )
    ExEnterPriorityRegionAndAcquireResourceShared(hsem);
  EtwTraceGreLockAcquireSemaphoreShared((__int64)L"hsem");
}
