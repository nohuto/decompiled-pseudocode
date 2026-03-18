/*
 * XREFs of CmpInitializeKcbStack @ 0x1404FC458
 * Callers:
 *     CmpSetKeySecurity @ 0x14006E950 (CmpSetKeySecurity.c)
 *     CmpQueryKeySecurity @ 0x14008BF10 (CmpQueryKeySecurity.c)
 *     CmpAssignKeySecurity @ 0x140165FEC (CmpAssignKeySecurity.c)
 *     CmQueryLayeredKey @ 0x1401DEC90 (CmQueryLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1401DF0C4 (CmQueryMultipleValueForLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x1401E0660 (CmDeleteLayeredKey.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall CmpInitializeKcbStack(_WORD *a1)
{
  __int64 result; // rax

  memset(a1, 0, 0x20uLL);
  result = 0xFFFFFFFFLL;
  a1[1] = -1;
  return result;
}
