/*
 * XREFs of sub_180061D14 @ 0x180061D14
 * Callers:
 *     sub_18001A8A0 @ 0x18001A8A0 (sub_18001A8A0.c)
 *     sub_180060EC8 @ 0x180060EC8 (sub_180060EC8.c)
 *     sub_180061B10 @ 0x180061B10 (sub_180061B10.c)
 *     sub_1800FF314 @ 0x1800FF314 (sub_1800FF314.c)
 * Callees:
 *     sub_180061E1C @ 0x180061E1C (sub_180061E1C.c)
 */

__int64 __fastcall sub_180061D14(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v6; // rsi
  __int64 v7; // rdi
  int v8; // r9d
  __int64 v10; // [rsp+40h] [rbp+8h]

  v4 = 0LL;
  v6 = -1LL << (*(_BYTE *)(a1 + 12) & 0x1F);
  v7 = a3 & v6;
  v10 = a3 & v6;
  while ( 1 )
  {
    if ( v4 )
      goto LABEL_5;
    v8 = *(_DWORD *)(a1 + 12) >> 5;
    if ( !v8 )
      return 0LL;
    v4 = *(_QWORD *)(a1 + 16)
       + 8LL
       * ((37
         * (BYTE6(v10)
          + 37
          * (BYTE5(v10)
           + 37
           * (BYTE4(v10)
            + 37 * (BYTE3(v10) + 37 * (BYTE2(v10) + 37 * (BYTE1(v10) + 37 * ((unsigned __int8)v7 + 11623883)))))))
         + HIBYTE(v10)) & (unsigned int)(v8 - 1));
LABEL_5:
    while ( 1 )
    {
      v4 = *(_QWORD *)v4;
      if ( (v4 & 1) != 0 )
        break;
      if ( v7 == (v6 & *(_QWORD *)(v4 + 8)) )
        goto LABEL_7;
    }
    v4 = 0LL;
LABEL_7:
    if ( !v4 || (unsigned int)sub_180061E1C(v4, a2) )
      return v4;
  }
}
