/*
 * XREFs of itrp_MUL @ 0x1C02D6C20
 * Callers:
 *     <none>
 * Callees:
 *     Mul26Dot6 @ 0x1C02BD3AC (Mul26Dot6.c)
 */

__int64 __fastcall itrp_MUL(__int64 a1)
{
  __int64 result; // rax

  if ( (qword_1C032CA00 ^ *(_QWORD *)qword_1C032CA00 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C032CA00 + 424)) == *(_QWORD *)(qword_1C032CA00 + 432)
    && (unsigned __int64)((qword_1C032C9E8 - *(_QWORD *)qword_1C032CA00) >> 2) >= 2 )
  {
    qword_1C032C9E8 -= 4LL;
    *(_DWORD *)(qword_1C032C9E8 - 4) = Mul26Dot6(*(_DWORD *)(qword_1C032C9E8 - 4), *(_DWORD *)qword_1C032C9E8);
    return a1;
  }
  else
  {
    result = qword_1C032CA58;
    dword_1C032CA50 = 4368;
  }
  return result;
}
