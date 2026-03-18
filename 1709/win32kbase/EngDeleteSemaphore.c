/*
 * XREFs of EngDeleteSemaphore @ 0x1C00211A0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteSemaphore @ 0x1C0024AA0 (GreDeleteSemaphore.c)
 */

void __stdcall EngDeleteSemaphore(HSEMAPHORE hsem)
{
  GreDeleteSemaphore((PERESOURCE)hsem);
}
