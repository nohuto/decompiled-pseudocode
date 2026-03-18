/*
 * XREFs of itrp_WS @ 0x1C02D5000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_WS(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // r10d
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx

  if ( (qword_1C0327C90 ^ *(_QWORD *)qword_1C0327C90 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327C90 + 424)) == *(_QWORD *)(qword_1C0327C90 + 432)
    && (v2 = qword_1C0327C78, (unsigned __int64)((qword_1C0327C78 - *(_QWORD *)qword_1C0327C90) >> 2) >= 2) )
  {
    qword_1C0327C78 -= 4LL;
    v3 = *(_DWORD *)(v2 - 4);
    qword_1C0327C78 = v2 - 8;
    v4 = *(_QWORD *)(qword_1C0327C90 + 344);
    v5 = *(int *)(v2 - 8);
    if ( (int)v5 < *(unsigned __int16 *)(v4 + 18) && (int)v5 >= 0 )
    {
      v6 = *(_QWORD *)(qword_1C0327C90 + 8);
      if ( (qword_1C0327C90 ^ v4 ^ v6 ^ MEMORY[0xFFFFF78000000330]) == *(_QWORD *)(qword_1C0327C90 + 352) )
      {
        *(_DWORD *)(v6 + 4 * v5) = v3;
        return a1;
      }
    }
    dword_1C0327CE0 = 4377;
  }
  else
  {
    dword_1C0327CE0 = 4368;
  }
  return qword_1C0327CE8;
}
