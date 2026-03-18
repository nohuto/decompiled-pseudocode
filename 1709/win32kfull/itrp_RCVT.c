/*
 * XREFs of itrp_RCVT @ 0x1C02D15E0
 * Callers:
 *     <none>
 * Callees:
 *     InvokeGetCVTEntry @ 0x1C02C92E0 (InvokeGetCVTEntry.c)
 */

__int64 __fastcall itrp_RCVT(__int64 a1)
{
  __int64 v2; // rax
  int v3; // edx
  __int64 result; // rax

  if ( (qword_1C0327C90 ^ *(_QWORD *)qword_1C0327C90 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327C90 + 424)) == *(_QWORD *)(qword_1C0327C90 + 432)
    && (qword_1C0327C78 - *(_QWORD *)qword_1C0327C90) >> 2 )
  {
    qword_1C0327C78 -= 4LL;
    v2 = *(unsigned __int16 *)(qword_1C0327C90 + 360);
    v3 = *(_DWORD *)qword_1C0327C78;
    if ( (*(_DWORD *)qword_1C0327C78 < (int)v2 || v3 <= 255)
      && v3 >= 0
      && (qword_1C0327C90 ^ MEMORY[0xFFFFF78000000330] ^ v2 ^ *(_QWORD *)(qword_1C0327C90 + 16)) == *(_QWORD *)(qword_1C0327C90 + 368) )
    {
      *(_DWORD *)qword_1C0327C78 = InvokeGetCVTEntry(dword_1C0327CCC, v3);
      result = a1;
      qword_1C0327C78 += 4LL;
      return result;
    }
    dword_1C0327CE0 = 4379;
  }
  else
  {
    dword_1C0327CE0 = 4368;
  }
  return qword_1C0327CE8;
}
