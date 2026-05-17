/*
 * XREFs of RtlpHpSegPageRangeSplit @ 0x1800389E4
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x180038558 (RtlpHpSegPageRangeAllocate.c)
 * Callees:
 *     RtlpHpSegPageRangeCountCommittedPages @ 0x1800377F8 (RtlpHpSegPageRangeCountCommittedPages.c)
 */

_DWORD *__fastcall RtlpHpSegPageRangeSplit(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // r9d
  int v5; // r9d
  unsigned __int64 v6; // r10
  __int64 v7; // rcx
  int v8; // eax
  _DWORD *v9; // r10
  int v10; // r11d

  v3 = *(unsigned __int8 *)(a2 + 31);
  if ( v3 == a3 )
    return 0LL;
  v5 = v3 - a3;
  v6 = a2 + 32LL * a3;
  v7 = 32LL * (unsigned int)(v5 - 1);
  *(_BYTE *)(v6 + 24) |= 2u;
  *(_BYTE *)(v7 + v6 + 31) = v5 - 1;
  *(_BYTE *)(v6 + 31) = v5;
  v8 = RtlpHpSegPageRangeCountCommittedPages(v7, v6, (unsigned __int8)v5);
  *v9 = -857879331;
  v9[7] ^= (v9[7] ^ (~v8 << 8)) & 0xFFFF00;
  *(_BYTE *)(32LL * (unsigned int)(v10 - 1) + a2 + 31) = v10 - 1;
  *(_BYTE *)(a2 + 31) = v10;
  *(_DWORD *)(a2 + 28) ^= (*(_DWORD *)(a2 + 28) ^ (~(~(*(_DWORD *)(a2 + 28) >> 8) - (unsigned __int16)~(v9[7] >> 8)) << 8)) & 0xFFFF00;
  return v9;
}
