/*
 * XREFs of sub_1800FE774 @ 0x1800FE774
 * Callers:
 *     sub_1800FE840 @ 0x1800FE840 (sub_1800FE840.c)
 *     sub_1800FECE0 @ 0x1800FECE0 (sub_1800FECE0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800FE774(__int64 a1, __int64 a2)
{
  unsigned int v2; // r11d
  __int64 v3; // r10
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v7; // [rsp+8h] [rbp+8h]

  v2 = *(_DWORD *)(a1 + 12);
  v3 = -1LL << (*(_BYTE *)(a1 + 12) & 0x1F);
  v4 = a2 & v3;
  if ( v2 < 0x20 )
    return 0LL;
  v7 = a2 & v3;
  v5 = *(_QWORD *)(a1 + 16)
     + 8LL
     * ((37
       * (BYTE6(v7)
        + 37
        * (BYTE5(v7)
         + 37
         * (BYTE4(v7) + 37 * (BYTE3(v7) + 37 * (BYTE2(v7) + 37 * (BYTE1(v7) + 37 * ((unsigned __int8)v4 + 11623883)))))))
       + HIBYTE(v7)) & ((v2 >> 5) - 1));
  while ( 1 )
  {
    v5 = *(_QWORD *)v5;
    if ( (v5 & 1) != 0 )
      break;
    if ( v4 == (v3 & *(_QWORD *)(v5 + 8)) )
      goto LABEL_7;
  }
  v5 = 0LL;
LABEL_7:
  if ( !v5 )
    return 0LL;
  return v5;
}
