/*
 * XREFs of CmpSortedValueEnumStackInitialize @ 0x14069C188
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x1401E448C (CmpGetValueCountForKeyNodeStack.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 */

void *__fastcall CmpSortedValueEnumStackInitialize(_WORD *a1)
{
  memset(a1, 0, 0x58uLL);
  a1[4] = -1;
  return memset(a1 + 8, 0, 0x40uLL);
}
