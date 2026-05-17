/*
 * XREFs of sub_180008B20 @ 0x180008B20
 * Callers:
 *     sub_180006F80 @ 0x180006F80 (sub_180006F80.c)
 *     sub_18000894C @ 0x18000894C (sub_18000894C.c)
 *     sub_18002C840 @ 0x18002C840 (sub_18002C840.c)
 *     sub_180100870 @ 0x180100870 (sub_180100870.c)
 * Callees:
 *     sub_180008C28 @ 0x180008C28 (sub_180008C28.c)
 */

__int64 __fastcall sub_180008B20(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v9; // [rsp+40h] [rbp+8h]

  v4 = 0LL;
  v6 = -1LL << (*(_BYTE *)(a1 + 12) & 0x1F);
  v7 = a3 & v6;
  v9 = a3 & v6;
  while ( 1 )
  {
    if ( v4 )
      goto LABEL_5;
    if ( *(_DWORD *)(a1 + 12) < 0x20u )
      return 0LL;
    v4 = *(_QWORD *)(a1 + 16)
       + 8LL
       * ((37
         * (BYTE6(v9)
          + 37
          * (BYTE5(v9)
           + 37
           * (BYTE4(v9) + 37 * (BYTE3(v9) + 37 * (BYTE2(v9) + 37 * (BYTE1(v9) + 37 * ((unsigned __int8)v7 + 11623883)))))))
         + HIBYTE(v9)) & (unsigned int)((*(_DWORD *)(a1 + 12) >> 5) - 1));
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
    if ( !v4 || (unsigned int)sub_180008C28(v4, a2) )
      return v4;
  }
}
