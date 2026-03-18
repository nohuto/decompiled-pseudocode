/*
 * XREFs of itrp_MINDEX @ 0x1C02CFBA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_MINDEX(__int64 a1)
{
  unsigned __int64 v1; // r10
  unsigned __int64 v2; // r11
  _DWORD *v3; // rdx
  unsigned __int64 v4; // r9
  int *v5; // r8
  int v6; // r10d

  v1 = *(_QWORD *)qword_1C0327C90;
  v2 = *(_QWORD *)(qword_1C0327C90 + 424);
  if ( (qword_1C0327C90 ^ v2 ^ *(_QWORD *)qword_1C0327C90 ^ MEMORY[0xFFFFF78000000330]) != *(_QWORD *)(qword_1C0327C90 + 432)
    || !((__int64)(qword_1C0327C78 - v1) >> 2)
    || (v3 = (_DWORD *)(qword_1C0327C78 - 4),
        v4 = *(int *)(qword_1C0327C78 - 4),
        v4 > (__int64)(qword_1C0327C78 - 4 - v1) >> 2) )
  {
    dword_1C0327CE0 = 4368;
    return qword_1C0327CE8;
  }
  v5 = &v3[-v4];
  if ( (unsigned __int64)v5 < v1 || (unsigned __int64)v5 >= v2 )
  {
    dword_1C0327CE0 = 4371;
    return qword_1C0327CE8;
  }
  v6 = *v5;
  if ( (int)v4 > 0 )
  {
    do
    {
      *v5 = v5[1];
      ++v5;
      LODWORD(v4) = v4 - 1;
    }
    while ( (_DWORD)v4 );
    --v3;
  }
  *v3 = v6;
  qword_1C0327C78 = (__int64)(v3 + 1);
  return a1;
}
