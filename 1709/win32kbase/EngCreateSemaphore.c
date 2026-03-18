/*
 * XREFs of EngCreateSemaphore @ 0x1C0021450
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateSemaphoreInternal @ 0x1C0024B58 (GreCreateSemaphoreInternal.c)
 */

HSEMAPHORE EngCreateSemaphore(void)
{
  return (HSEMAPHORE)GreCreateSemaphoreInternal(1LL);
}
