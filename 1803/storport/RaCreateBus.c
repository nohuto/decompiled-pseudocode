/*
 * XREFs of RaCreateBus @ 0x1C00653C8
 * Callers:
 *     RaidCreateAdapter @ 0x1C0029B00 (RaidCreateAdapter.c)
 * Callees:
 *     memset @ 0x1C0018140 (memset.c)
 */

void *__fastcall RaCreateBus(_BYTE *a1)
{
  *a1 = 0;
  return memset(a1 + 8, 0, 0x40uLL);
}
