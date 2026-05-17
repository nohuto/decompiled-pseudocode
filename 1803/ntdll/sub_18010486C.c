/*
 * XREFs of sub_18010486C @ 0x18010486C
 * Callers:
 *     sub_18005F118 @ 0x18005F118 (sub_18005F118.c)
 * Callees:
 *     sub_1800113A0 @ 0x1800113A0 (sub_1800113A0.c)
 */

unsigned __int64 __fastcall sub_18010486C(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        __int16 a7)
{
  _QWORD *v7; // r9
  unsigned __int64 v8; // rbx
  _QWORD *v9; // rbx

  v7 = (_QWORD *)(a2 + a3);
  if ( (a6 & 0x10000000) != 0 )
  {
    *v7 = 0xABABABABABABABABuLL;
    v7[1] = 0xABABABABABABABABuLL;
  }
  v8 = 0LL;
  if ( (a6 & 0x20000F08) != 0 )
  {
    v9 = v7 + 2;
    if ( (a6 & 0x10000000) == 0 )
      v9 = (_QWORD *)(a2 + a3);
    v8 = ((unsigned __int64)v9 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
    *(_QWORD *)v8 = 0LL;
    *(_QWORD *)(v8 + 8) = 0LL;
    *(_BYTE *)(v8 + 2) &= 0xFu;
    *(_BYTE *)(v8 + 2) |= 16 * (BYTE1(a6) & 0xFE);
    *(_BYTE *)(v8 + 3) = a5 >> 4;
    *(_WORD *)v8 = a7;
    sub_1800113A0(a1, a2, a6);
  }
  return v8;
}
