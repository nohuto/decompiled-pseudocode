/*
 * XREFs of EngCreateSemaphore @ 0x1C00546B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HSEMAPHORE EngCreateSemaphore(void)
{
  return (HSEMAPHORE)GreCreateSemaphoreInternal(1LL);
}
