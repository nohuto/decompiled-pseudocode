/*
 * XREFs of RtlpHpSegPageRangeSplit @ 0x140298E80
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x1402982C4 (RtlpHpSegPageRangeAllocate.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlpHpSegPageRangeSplit(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // r10d
  __int64 v5; // r11
  unsigned __int64 v6; // r9
  int v7; // r10d
  unsigned __int64 v8; // r8
  int v9; // ecx
  unsigned __int64 v10; // rdx
  int v11; // eax

  v3 = *(unsigned __int8 *)(a2 + 31);
  v5 = a3;
  if ( v3 == a3 )
    return 0LL;
  v7 = v3 - a3;
  v6 = a2 + 32LL * a3;
  v8 = v6 + 32LL * (unsigned __int8)v7;
  *(_BYTE *)(v6 + 24) |= 2u;
  *(_BYTE *)(32LL * (unsigned int)(v7 - 1) + v6 + 31) = v7 - 1;
  v9 = 0;
  *(_BYTE *)(v6 + 31) = v7;
  v10 = a2 + 32 * v5;
  if ( v6 < v8 )
  {
    do
    {
      v11 = *(unsigned __int8 *)(v10 + 25);
      v10 += 32LL;
      v9 += v11;
    }
    while ( v10 < v8 );
  }
  *(_DWORD *)v6 = -857879331;
  *(_DWORD *)(v6 + 28) ^= (*(_DWORD *)(v6 + 28) ^ (~v9 << 8)) & 0xFFFF00;
  *(_BYTE *)(32LL * (unsigned int)(v5 - 1) + a2 + 31) = v5 - 1;
  *(_BYTE *)(a2 + 31) = v5;
  *(_DWORD *)(a2 + 28) ^= (*(_DWORD *)(a2 + 28) ^ (~(~(*(_DWORD *)(a2 + 28) >> 8)
                                                   - (unsigned __int16)~(*(_DWORD *)(v6 + 28) >> 8)) << 8)) & 0xFFFF00;
  return v6;
}
