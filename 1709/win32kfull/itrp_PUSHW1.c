/*
 * XREFs of itrp_PUSHW1 @ 0x1C02D1150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_PUSHW1(unsigned __int8 *a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(qword_1C0327C90 + 424);
  if ( (qword_1C0327C90 ^ v1 ^ *(_QWORD *)qword_1C0327C90 ^ MEMORY[0xFFFFF78000000330]) == *(_QWORD *)(qword_1C0327C90 + 432)
    && (v1 - qword_1C0327C78) >> 2 )
  {
    if ( (unsigned __int64)a1 >= qword_1C0327CF0 && (unsigned __int64)(a1 + 2) <= qword_1C0327CE8 && a1 + 2 >= a1 )
    {
      *(_DWORD *)qword_1C0327C78 = (__int16)((*a1 << 8) + a1[1]);
      result = (__int64)(a1 + 2);
      qword_1C0327C78 += 4LL;
      return result;
    }
    dword_1C0327CE0 = 4381;
  }
  else
  {
    dword_1C0327CE0 = 4369;
  }
  return qword_1C0327CE8;
}
