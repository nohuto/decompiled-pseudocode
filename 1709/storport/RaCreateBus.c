/*
 * XREFs of RaCreateBus @ 0x1C005F8E0
 * Callers:
 *     RaidCreateAdapter @ 0x1C001171C (RaidCreateAdapter.c)
 * Callees:
 *     memset @ 0x1C001F680 (memset.c)
 */

void *__fastcall RaCreateBus(_BYTE *a1)
{
  *a1 = 0;
  return memset(a1 + 8, 0, 0x40uLL);
}
