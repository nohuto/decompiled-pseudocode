/*
 * XREFs of sub_18000E97C @ 0x18000E97C
 * Callers:
 *     sub_18000E614 @ 0x18000E614 (sub_18000E614.c)
 *     sub_18000E730 @ 0x18000E730 (sub_18000E730.c)
 * Callees:
 *     sub_1800A4DFC @ 0x1800A4DFC (sub_1800A4DFC.c)
 */

__int64 __fastcall sub_18000E97C(__int64 a1, __int64 a2, int a3, char a4)
{
  int v5; // r8d
  int v6; // edx
  int v9; // [rsp+38h] [rbp-20h]

  if ( a4 )
  {
    v5 = a2 - 16;
    v6 = *(_DWORD *)(a2 - 16 + 8);
    LOWORD(v9) = v6;
    if ( *(_DWORD *)(a1 + 124) )
    {
      v9 = *(_DWORD *)(a1 + 136) ^ v6;
      if ( HIBYTE(v9) != ((unsigned __int8)v9 ^ (unsigned __int8)(BYTE1(v9) ^ BYTE2(v9))) )
        sub_1800A4DFC(3, a1, v5, 0, 0LL, 0LL);
    }
    return (unsigned int)(a3 - (unsigned __int16)v9);
  }
  else
  {
    return (unsigned int)(a3 - *(_DWORD *)(a2 + 40));
  }
}
