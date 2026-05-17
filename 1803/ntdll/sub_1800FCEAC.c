/*
 * XREFs of sub_1800FCEAC @ 0x1800FCEAC
 * Callers:
 *     sub_1800FCFB0 @ 0x1800FCFB0 (sub_1800FCFB0.c)
 *     sub_1800FD510 @ 0x1800FD510 (sub_1800FD510.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800FCEAC(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // r11
  __int64 v4; // r9
  __int64 v5; // r10
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rdx
  __int64 v14; // rdx

  v2 = *(_DWORD *)(a1 + 20) >> 5;
  v3 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
  v4 = 0LL;
  v5 = a2 & v3;
  v6 = (a2 & (unsigned __int64)v3) >> 56;
  v7 = (a2 & (unsigned __int64)v3) >> 48;
  v8 = (a2 & (unsigned __int64)v3) >> 40;
  v9 = (a2 & (unsigned __int64)v3) >> 32;
  v10 = a2 & v3;
  v11 = v10 >> 24;
  v12 = v10 >> 16;
  v13 = v10 >> 8;
  if ( v2 )
  {
    v14 = *(_QWORD *)(a1 + 24)
        + 8LL
        * (((_DWORD)v6
          + 37
          * ((unsigned __int8)v7
           + 37
           * ((unsigned __int8)v8
            + 37
            * ((unsigned __int8)v9
             + 37
             * ((unsigned __int8)v11
              + 37 * ((unsigned __int8)v12 + 37 * ((unsigned __int8)v13 + 37 * ((unsigned __int8)v5 + 11623883)))))))) & (unsigned int)(v2 - 1));
    while ( 1 )
    {
      v14 = *(_QWORD *)v14;
      if ( (v14 & 1) != 0 )
        break;
      if ( v5 == (v3 & *(_QWORD *)(v14 + 8)) )
        return v14;
    }
  }
  return v4;
}
