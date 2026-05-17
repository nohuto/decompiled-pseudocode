/*
 * XREFs of RtlpHpSegSegmentInitialize @ 0x180003AAC
 * Callers:
 *     RtlpHpSegContextReserve @ 0x1800040FC (RtlpHpSegContextReserve.c)
 *     RtlpHpSegPageRangeAllocate @ 0x180038558 (RtlpHpSegPageRangeAllocate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpSegSegmentInitialize(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r9
  unsigned int v4; // edx
  unsigned int v5; // r10d
  __int64 result; // rax
  unsigned __int8 *v7; // rcx
  unsigned __int8 v8; // al

  v3 = a2 + 32LL * *(unsigned __int8 *)(a1 + 10);
  v4 = a3;
  *(_BYTE *)(v3 + 31) = -*(_BYTE *)(a1 + 10);
  *(_BYTE *)(v3 + 24) |= 2u;
  v5 = 1 << *(_BYTE *)(a1 + 9);
  if ( a3 )
  {
    v7 = (unsigned __int8 *)(v3 + 25);
    do
    {
      v8 = v5;
      if ( v4 < v5 )
        v8 = v4;
      *v7 = v8;
      v7 += 32;
      v4 -= v8;
    }
    while ( v4 );
  }
  *(_DWORD *)(v3 + 28) &= 0xFF0000FF;
  *(_DWORD *)(v3 + 28) |= (unsigned __int16)~(_WORD)a3 << 8;
  result = 32LL * ((unsigned int)*(unsigned __int8 *)(v3 + 31) - 1);
  *(_BYTE *)(result + v3 + 31) = *(_BYTE *)(v3 + 31) - 1;
  *(_DWORD *)v3 = -857879331;
  return result;
}
