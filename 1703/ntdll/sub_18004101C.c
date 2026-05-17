/*
 * XREFs of sub_18004101C @ 0x18004101C
 * Callers:
 *     sub_180040E28 @ 0x180040E28 (sub_180040E28.c)
 * Callees:
 *     sub_180044B58 @ 0x180044B58 (sub_180044B58.c)
 *     sub_180078B20 @ 0x180078B20 (sub_180078B20.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 */

__int64 __fastcall sub_18004101C(char a1, __int64 a2, _WORD *a3, __int64 a4, __int64 a5, int a6)
{
  _QWORD *v7; // rdx
  _QWORD v9[3]; // [rsp+30h] [rbp-38h] BYREF
  int v10; // [rsp+48h] [rbp-20h]

  v7 = 0LL;
  memset(v9, 0, sizeof(v9));
  v10 = 0;
  if ( !a3 || !a2 || !a4 )
    return 3221225485LL;
  switch ( *a3 )
  {
    case 1:
      WORD2(v9[0]) = a3[2];
LABEL_10:
      v7 = v9;
      break;
    case 2:
      v7 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * (__int16)a3[2]);
      break;
    case 3:
      HIWORD(v9[0]) = a3[2];
      goto LABEL_10;
  }
  if ( a1 )
    return sub_180044B58(a2, v7, a4, a5, a6);
  else
    return sub_180078B20(a2, v7, a4, a5, a6);
}
