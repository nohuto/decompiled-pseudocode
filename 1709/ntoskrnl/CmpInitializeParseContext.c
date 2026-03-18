/*
 * XREFs of CmpInitializeParseContext @ 0x14059F544
 * Callers:
 *     CmInitSystem1 @ 0x14083BF10 (CmInitSystem1.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 */

void *__fastcall CmpInitializeParseContext(_QWORD *a1)
{
  memset(a1, 0, 0xF0uLL);
  a1[19] = a1 + 18;
  a1[18] = a1 + 18;
  return memset(a1 + 20, 0, 0x50uLL);
}
