/*
 * XREFs of itrp_JMPR @ 0x1C02CE3B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_JMPR(__int64 a1)
{
  unsigned __int64 v1; // rcx

  if ( (qword_1C0327C90 ^ *(_QWORD *)qword_1C0327C90 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327C90 + 424)) != *(_QWORD *)(qword_1C0327C90 + 432)
    || !((qword_1C0327C78 - *(_QWORD *)qword_1C0327C90) >> 2) )
  {
    dword_1C0327CE0 = 4368;
    return qword_1C0327CE8;
  }
  qword_1C0327C78 -= 4LL;
  v1 = *(_DWORD *)qword_1C0327C78 - 1 + a1;
  if ( !--dword_1C0327CF8 )
  {
    dword_1C0327CE0 = 4359;
    return qword_1C0327CE8;
  }
  if ( v1 < qword_1C0327CF0 )
  {
    dword_1C0327CE0 = 4363;
    return qword_1C0327CE8;
  }
  if ( v1 > qword_1C0327CE8 )
    return qword_1C0327CE8;
  return v1;
}
