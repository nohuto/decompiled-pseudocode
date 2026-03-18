/*
 * XREFs of GreIsDwmStateLocked @ 0x1C00FBCC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 GreIsDwmStateLocked()
{
  return GreIsSemaphoreOwnedOrSharedByCurrentThread((PERESOURCE)ghsemDwmState);
}
