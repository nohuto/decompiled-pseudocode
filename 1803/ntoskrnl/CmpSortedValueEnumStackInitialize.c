/*
 * XREFs of CmpSortedValueEnumStackInitialize @ 0x140700E40
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x140222658 (CmpGetValueCountForKeyNodeStack.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 */

void *__fastcall CmpSortedValueEnumStackInitialize(_WORD *a1)
{
  memset(a1, 0, 0x58uLL);
  a1[4] = -1;
  return memset(a1 + 8, 0, 0x40uLL);
}
