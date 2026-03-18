/*
 * XREFs of CmpSetRespectIoPriorityThread @ 0x14007FF48
 * Callers:
 *     CmpDoFileWrite @ 0x1404D76CC (CmpDoFileWrite.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpSetRespectIoPriorityThread(__int64 a1, char a2)
{
  bool result; // al

  result = (*(_DWORD *)(a1 + 1740) & 0x80) != 0;
  *(_DWORD *)(a1 + 1740) ^= ((unsigned __int8)*(_DWORD *)(a1 + 1740) ^ (unsigned __int8)(a2 << 7)) & 0x80;
  return result;
}
