/*
 * XREFs of sub_180044954 @ 0x180044954
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x1800380F0 (RtlDeriveCapabilitySidsFromName.c)
 *     sub_180044814 @ 0x180044814 (sub_180044814.c)
 * Callees:
 *     sub_180044A74 @ 0x180044A74 (sub_180044A74.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall sub_180044954(__int64 a1, _OWORD *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  _OWORD *v4; // rsi
  __int64 result; // rax
  unsigned int v6; // r14d
  unsigned int v8; // ebp
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rbp

  v3 = a3;
  v4 = a2;
  result = a3 + *(_DWORD *)(a1 + 36);
  v6 = *(_DWORD *)(a1 + 36) & 0x3F;
  *(_DWORD *)(a1 + 36) = result;
  if ( (unsigned int)result < a3 )
    ++*(_DWORD *)(a1 + 32);
  if ( v6 )
  {
    v8 = v6 + a3;
    if ( v6 + a3 >= 0x40 )
    {
      memmove((void *)(v6 + a1 + 40), a2, 64 - v6);
      v4 = (_OWORD *)((char *)v4 + 64 - v6);
      v3 = v8 - 64;
      result = sub_180044A74(a1, a1 + 40);
      v6 = 0;
    }
  }
  if ( ((unsigned __int8)v4 & 7) != 0 )
  {
    if ( v3 >= 0x40 )
    {
      v9 = (unsigned __int64)v3 >> 6;
      do
      {
        *(_OWORD *)(a1 + 40) = *v4;
        *(_OWORD *)(a1 + 56) = v4[1];
        *(_OWORD *)(a1 + 72) = v4[2];
        *(_OWORD *)(a1 + 88) = v4[3];
        result = sub_180044A74(a1, a1 + 40);
        v4 += 4;
        v3 -= 64;
        --v9;
      }
      while ( v9 );
    }
  }
  else if ( v3 >= 0x40 )
  {
    v10 = (unsigned __int64)v3 >> 6;
    do
    {
      result = sub_180044A74(a1, v4);
      v4 += 4;
      v3 -= 64;
      --v10;
    }
    while ( v10 );
  }
  if ( v3 )
    return (__int64)memmove((void *)(v6 + a1 + 40), v4, v3);
  return result;
}
