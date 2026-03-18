/*
 * XREFs of itrp_SDS @ 0x1C02D2440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_SDS(__int64 a1)
{
  __int64 result; // rax

  if ( (qword_1C0327C90 ^ *(_QWORD *)qword_1C0327C90 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327C90 + 424)) == *(_QWORD *)(qword_1C0327C90 + 432)
    && (qword_1C0327C78 - *(_QWORD *)qword_1C0327C90) >> 2 )
  {
    qword_1C0327C78 -= 4LL;
    *(_WORD *)(qword_1C0327C90 + 150) = *(_WORD *)qword_1C0327C78;
    return a1;
  }
  else
  {
    result = qword_1C0327CE8;
    dword_1C0327CE0 = 4368;
  }
  return result;
}
