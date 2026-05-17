/*
 * XREFs of sub_18005C2AC @ 0x18005C2AC
 * Callers:
 *     sub_1800150A0 @ 0x1800150A0 (sub_1800150A0.c)
 *     sub_18005C190 @ 0x18005C190 (sub_18005C190.c)
 * Callees:
 *     sub_18009A5F0 @ 0x18009A5F0 (sub_18009A5F0.c)
 */

__int64 __fastcall sub_18005C2AC(__int64 a1, __int64 a2, int a3, char a4)
{
  int v7; // [rsp+38h] [rbp-10h]

  if ( a4 )
  {
    v7 = *(_DWORD *)(a2 - 16 + 8);
    if ( *(_DWORD *)(a1 + 124) )
    {
      v7 = *(_DWORD *)(a2 - 16 + 8) ^ *(_DWORD *)(a1 + 136);
      if ( HIBYTE(v7) != ((unsigned __int8)v7 ^ (unsigned __int8)(BYTE1(v7) ^ BYTE2(v7))) )
        sub_18009A5F0(3, a1, a2 - 16, 0, 0LL, 0LL);
    }
    return (unsigned int)(a3 - (unsigned __int16)v7);
  }
  else
  {
    return (unsigned int)(a3 - *(_DWORD *)(a2 + 40));
  }
}
