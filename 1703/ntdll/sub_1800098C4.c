/*
 * XREFs of sub_1800098C4 @ 0x1800098C4
 * Callers:
 *     sub_180009838 @ 0x180009838 (sub_180009838.c)
 *     sub_180023C90 @ 0x180023C90 (sub_180023C90.c)
 *     sub_180025780 @ 0x180025780 (sub_180025780.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall sub_1800098C4(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // r10
  signed __int64 v4; // rax
  signed __int64 v5; // rdx
  signed __int64 v7; // [rsp+8h] [rbp+8h]

  v3 = a2;
  do
  {
    v4 = *(_QWORD *)(a1 + 8 * v3 + 192);
    v5 = v4;
    v7 = v4;
    if ( (v4 & 1) == 0 )
      break;
    if ( a3 )
    {
      if ( (BYTE2(v4) & 0x1Fu) > 0x10 || WORD1(v4) > 0xFF00u )
        return v5;
      WORD1(v7) = WORD1(v4) + 33;
      goto LABEL_6;
    }
    if ( WORD1(v4) > 1u )
    {
      WORD1(v7) = WORD1(*(_QWORD *)(a1 + 8 * v3 + 192)) - 1;
LABEL_6:
      v5 = v7;
    }
  }
  while ( v4 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v3 + 192), v5, v4) );
  return v5;
}
