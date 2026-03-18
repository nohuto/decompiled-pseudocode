/*
 * XREFs of LeaveHandleFlagsCrit @ 0x1C007F620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 LeaveHandleFlagsCrit()
{
  return ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpHandleFlagsMutex);
}
