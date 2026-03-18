/*
 * XREFs of itrp_RFV @ 0x1C02D1720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_RFV(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(qword_1C0327C90 + 424);
  if ( (qword_1C0327C90 ^ v1 ^ *(_QWORD *)qword_1C0327C90 ^ MEMORY[0xFFFFF78000000330]) == *(_QWORD *)(qword_1C0327C90 + 432)
    && (unsigned __int64)((v1 - qword_1C0327C78) >> 2) >= 2 )
  {
    *(_DWORD *)qword_1C0327C78 = (__int16)dword_1C0327C6C;
    qword_1C0327C78 += 4LL;
    *(_DWORD *)qword_1C0327C78 = SHIWORD(dword_1C0327C6C);
    result = a1;
    qword_1C0327C78 += 4LL;
  }
  else
  {
    result = qword_1C0327CE8;
    dword_1C0327CE0 = 4369;
  }
  return result;
}
