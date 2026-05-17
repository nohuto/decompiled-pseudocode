/*
 * XREFs of sub_18010537C @ 0x18010537C
 * Callers:
 *     sub_180104F5C @ 0x180104F5C (sub_180104F5C.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall sub_18010537C(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // r9
  __int16 v4; // cx
  __int16 result; // ax
  __int16 v6; // cx

  v3 = (unsigned __int16)qword_18015A448 ^ *(unsigned __int16 *)(a1 + 40) ^ (unsigned __int64)(unsigned __int16)((unsigned int)a1 >> 12);
  *(_BYTE *)(v3 + a2 - 1) = 0;
  v4 = *(_WORD *)(v3 + a2 - 2);
  if ( a3 == 1 )
  {
    result = 0x8000;
    v6 = v4 | 0x8000;
  }
  else
  {
    result = (a3 ^ v4) & 0x3FFF;
    v6 = result ^ v4;
  }
  *(_WORD *)(v3 + a2 - 2) = v6;
  return result;
}
