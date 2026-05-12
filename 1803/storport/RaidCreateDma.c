/*
 * XREFs of RaidCreateDma @ 0x1C0065458
 * Callers:
 *     RaidCreateAdapter @ 0x1C0029B00 (RaidCreateAdapter.c)
 * Callees:
 *     memset @ 0x1C0018140 (memset.c)
 */

void *__fastcall RaidCreateDma(void *a1)
{
  void *result; // rax

  if ( a1 )
    return memset(a1, 0, 0x20uLL);
  return result;
}
