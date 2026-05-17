/*
 * XREFs of sub_18005E3F8 @ 0x18005E3F8
 * Callers:
 *     sub_18002302C @ 0x18002302C (sub_18002302C.c)
 *     sub_18005DC24 @ 0x18005DC24 (sub_18005DC24.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18005E3F8(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r9
  unsigned int v4; // edx
  unsigned int v5; // r10d
  unsigned int v6; // r8d
  unsigned int v7; // r8d
  __int64 result; // rax
  unsigned __int8 *v9; // rcx
  unsigned __int8 v10; // al

  v3 = a2 + 32LL * *(unsigned __int8 *)(a1 + 10);
  v4 = a3;
  *(_BYTE *)(v3 + 31) = -*(_BYTE *)(a1 + 10);
  *(_BYTE *)(v3 + 24) |= 2u;
  v5 = 1 << *(_BYTE *)(a1 + 9);
  if ( a3 )
  {
    v9 = (unsigned __int8 *)(v3 + 25);
    do
    {
      v10 = v5;
      if ( v4 < v5 )
        v10 = v4;
      *v9 = v10;
      v9 += 32;
      v4 -= v10;
    }
    while ( v4 );
  }
  v6 = *(_DWORD *)(v3 + 28) ^ (*(_DWORD *)(v3 + 28) ^ (~a3 << 8)) & 0xFFFF00;
  *(_DWORD *)(v3 + 28) = v6;
  v7 = HIBYTE(v6) - 1;
  result = 32LL * v7;
  *(_BYTE *)(result + v3 + 31) = v7;
  *(_DWORD *)v3 = -857879331;
  return result;
}
