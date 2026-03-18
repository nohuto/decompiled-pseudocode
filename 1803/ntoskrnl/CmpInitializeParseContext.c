/*
 * XREFs of CmpInitializeParseContext @ 0x140584CB8
 * Callers:
 *     CmInitSystem1 @ 0x1408B04E0 (CmInitSystem1.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 */

void *__fastcall CmpInitializeParseContext(_QWORD *a1)
{
  memset(a1, 0, 0x128uLL);
  a1[19] = a1 + 18;
  a1[18] = a1 + 18;
  return memset(a1 + 27, 0, 0x50uLL);
}
