/*
 * XREFs of RtlpHpSegFreeRangeCompare @ 0x1800387E4
 * Callers:
 *     RtlpHpSegContextCompact @ 0x180036078 (RtlpHpSegContextCompact.c)
 *     RtlpHpSegPageRangeShrink @ 0x1800383A4 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeAllocate @ 0x180038558 (RtlpHpSegPageRangeAllocate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpSegFreeRangeCompare(unsigned int a1, __int64 a2)
{
  if ( a1 < *(_DWORD *)(a2 + 28) )
    return 0xFFFFFFFFLL;
  else
    return a1 > *(_DWORD *)(a2 + 28);
}
