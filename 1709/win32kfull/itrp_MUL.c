/*
 * XREFs of itrp_MUL @ 0x1C02D09C0
 * Callers:
 *     <none>
 * Callees:
 *     Mul26Dot6 @ 0x1C02B71AC (Mul26Dot6.c)
 */

__int64 __fastcall itrp_MUL(__int64 a1)
{
  __int64 result; // rax

  if ( (qword_1C0327C90 ^ *(_QWORD *)qword_1C0327C90 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327C90 + 424)) == *(_QWORD *)(qword_1C0327C90 + 432)
    && (unsigned __int64)((qword_1C0327C78 - *(_QWORD *)qword_1C0327C90) >> 2) >= 2 )
  {
    qword_1C0327C78 -= 4LL;
    *(_DWORD *)(qword_1C0327C78 - 4) = Mul26Dot6(*(_DWORD *)(qword_1C0327C78 - 4), *(_DWORD *)qword_1C0327C78);
    return a1;
  }
  else
  {
    result = qword_1C0327CE8;
    dword_1C0327CE0 = 4368;
  }
  return result;
}
