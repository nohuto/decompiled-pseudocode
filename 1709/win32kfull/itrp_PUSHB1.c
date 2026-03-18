/*
 * XREFs of itrp_PUSHB1 @ 0x1C02D10A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall itrp_PUSHB1(unsigned __int8 *a1)
{
  __int64 v1; // r8
  unsigned __int64 result; // rax

  v1 = *(_QWORD *)(qword_1C0327C90 + 424);
  if ( (qword_1C0327C90 ^ v1 ^ *(_QWORD *)qword_1C0327C90 ^ MEMORY[0xFFFFF78000000330]) == *(_QWORD *)(qword_1C0327C90 + 432)
    && (v1 - qword_1C0327C78) >> 2 )
  {
    if ( (unsigned __int64)a1 >= qword_1C0327CF0 )
    {
      result = (unsigned __int64)(a1 + 1);
      if ( (unsigned __int64)(a1 + 1) <= qword_1C0327CE8 && result >= (unsigned __int64)a1 )
      {
        *(_DWORD *)qword_1C0327C78 = *a1;
        qword_1C0327C78 += 4LL;
        return result;
      }
    }
    dword_1C0327CE0 = 4381;
  }
  else
  {
    dword_1C0327CE0 = 4369;
  }
  return qword_1C0327CE8;
}
