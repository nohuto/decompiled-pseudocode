/*
 * XREFs of itrp_RS @ 0x1C02D19D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_RS(__int64 a1)
{
  int *v2; // rdx
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // r10
  __int16 v6; // ax

  if ( (qword_1C0327C90 ^ *(_QWORD *)qword_1C0327C90 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327C90 + 424)) != *(_QWORD *)(qword_1C0327C90 + 432)
    || !((qword_1C0327C78 - *(_QWORD *)qword_1C0327C90) >> 2) )
  {
    dword_1C0327CE0 = 4368;
    return qword_1C0327CE8;
  }
  v2 = (int *)(qword_1C0327C78 - 4);
  qword_1C0327C78 = (__int64)v2;
  v3 = *(_QWORD *)(qword_1C0327C90 + 344);
  v4 = *v2;
  if ( (int)v4 >= *(unsigned __int16 *)(v3 + 18)
    || (int)v4 < 0
    || (v5 = *(_QWORD *)(qword_1C0327C90 + 8),
        (qword_1C0327C90 ^ v3 ^ v5 ^ MEMORY[0xFFFFF78000000330]) != *(_QWORD *)(qword_1C0327C90 + 352)) )
  {
    dword_1C0327CE0 = 4377;
    return qword_1C0327CE8;
  }
  if ( (_DWORD)v4 == 8
    && (*(_BYTE *)(qword_1C0327C90 + 452) & 1) != 0
    && (*(_BYTE *)(qword_1C0327C90 + 120) & 4) == 0
    && (v6 = *(_WORD *)(qword_1C0327C90 + 454), (v6 & 0x400) != 0) )
  {
    *(_WORD *)(qword_1C0327C90 + 454) = v6 | 8;
    *(_DWORD *)qword_1C0327C78 = 0;
  }
  else
  {
    *v2 = *(_DWORD *)(v5 + 4 * v4);
  }
  qword_1C0327C78 += 4LL;
  return a1;
}
