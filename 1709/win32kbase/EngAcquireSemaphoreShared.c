/*
 * XREFs of EngAcquireSemaphoreShared @ 0x1C00FB9E0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0073530 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

void __stdcall EngAcquireSemaphoreShared(HSEMAPHORE hsem)
{
  int v1; // r8d
  int v2; // ebx

  v2 = (int)hsem;
  if ( hsem )
    ExEnterPriorityRegionAndAcquireResourceShared(hsem);
  EtwTraceGreLockAcquireSemaphoreShared((__int64)L"hsem", v2, v1);
}
