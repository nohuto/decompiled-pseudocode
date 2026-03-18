/*
 * XREFs of RtlpHpSegSegmentInitialize @ 0x140299178
 * Callers:
 *     RtlpHpSegContextReserve @ 0x140297C58 (RtlpHpSegContextReserve.c)
 *     RtlpHpSegPageRangeAllocate @ 0x1402982C4 (RtlpHpSegPageRangeAllocate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpSegSegmentInitialize(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r9
  unsigned int v4; // edx
  unsigned int v5; // r10d
  unsigned __int8 *v6; // rcx
  unsigned __int8 v7; // al
  unsigned int v8; // r8d
  unsigned int v9; // r8d
  __int64 result; // rax

  v3 = a2 + 32LL * *(unsigned __int8 *)(a1 + 10);
  v4 = a3;
  *(_BYTE *)(v3 + 31) = -*(_BYTE *)(a1 + 10);
  *(_BYTE *)(v3 + 24) |= 2u;
  v5 = 1 << *(_BYTE *)(a1 + 9);
  if ( a3 )
  {
    v6 = (unsigned __int8 *)(v3 + 25);
    do
    {
      v7 = v5;
      if ( v4 < v5 )
        v7 = v4;
      *v6 = v7;
      v6 += 32;
      v4 -= v7;
    }
    while ( v4 );
  }
  v8 = *(_DWORD *)(v3 + 28) ^ (*(_DWORD *)(v3 + 28) ^ (~a3 << 8)) & 0xFFFF00;
  *(_DWORD *)(v3 + 28) = v8;
  v9 = HIBYTE(v8) - 1;
  result = 32LL * v9;
  *(_BYTE *)(result + v3 + 31) = v9;
  *(_DWORD *)v3 = -857879331;
  return result;
}
