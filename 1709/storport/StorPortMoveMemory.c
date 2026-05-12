/*
 * XREFs of StorPortMoveMemory @ 0x1C0034050
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C001F340 (memmove.c)
 */

void *__fastcall StorPortMoveMemory(void *a1, const void *a2, unsigned int a3)
{
  return memmove(a1, a2, a3);
}
