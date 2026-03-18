/*
 * XREFs of itrp_EVEN @ 0x1C02CB090
 * Callers:
 *     <none>
 * Callees:
 *     itrp_RoundToGrid @ 0x1C02D1D58 (itrp_RoundToGrid.c)
 */

__int64 itrp_EVEN()
{
  int v0; // eax
  __int64 v1; // r9
  __int64 v2; // r11
  __int64 result; // rax

  if ( (qword_1C0327C90 ^ *(_QWORD *)qword_1C0327C90 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327C90 + 424)) == *(_QWORD *)(qword_1C0327C90 + 432)
    && (qword_1C0327C78 - *(_QWORD *)qword_1C0327C90) >> 2 )
  {
    v0 = itrp_RoundToGrid(*(unsigned int *)(qword_1C0327C78 - 4), 0LL);
    *(_DWORD *)(v1 - 4) = ((unsigned __int8)(v0 >> 6) - 1) & 1;
    return v2;
  }
  else
  {
    result = qword_1C0327CE8;
    dword_1C0327CE0 = 4368;
  }
  return result;
}
