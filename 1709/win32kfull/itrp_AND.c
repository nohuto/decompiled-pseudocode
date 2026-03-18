/*
 * XREFs of itrp_AND @ 0x1C02CA0B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_AND(__int64 a1)
{
  _DWORD *v2; // rcx
  BOOL v3; // eax
  __int64 result; // rax

  if ( (qword_1C0327C90 ^ *(_QWORD *)qword_1C0327C90 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327C90 + 424)) == *(_QWORD *)(qword_1C0327C90 + 432)
    && (unsigned __int64)((qword_1C0327C78 - *(_QWORD *)qword_1C0327C90) >> 2) >= 2 )
  {
    v2 = (_DWORD *)(qword_1C0327C78 - 4);
    v3 = 0;
    qword_1C0327C78 = (__int64)v2;
    if ( *(v2 - 1) )
      v3 = *v2 != 0;
    *(v2 - 1) = v3;
    return a1;
  }
  else
  {
    result = qword_1C0327CE8;
    dword_1C0327CE0 = 4368;
  }
  return result;
}
