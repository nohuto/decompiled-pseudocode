/*
 * XREFs of CmpInitializeKcbStack @ 0x1404A5B64
 * Callers:
 *     CmpQueryKeySecurity @ 0x140007C08 (CmpQueryKeySecurity.c)
 *     CmpSetKeySecurity @ 0x1400633D0 (CmpSetKeySecurity.c)
 *     CmpAssignKeySecurity @ 0x140184F70 (CmpAssignKeySecurity.c)
 *     CmQueryLayeredKey @ 0x1402219B8 (CmQueryLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x140222964 (CmDeleteLayeredKey.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall CmpInitializeKcbStack(_WORD *a1)
{
  __int64 result; // rax

  memset(a1, 0, 0x20uLL);
  result = 0xFFFFFFFFLL;
  a1[1] = -1;
  return result;
}
