/*
 * XREFs of RtlpHpSegLockAcquire @ 0x14029829C
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x1402982C4 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x140298508 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegPageRangeShrink @ 0x140298D34 (RtlpHpSegPageRangeShrink.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x1400AC764 (RtlpHpAcquireLockExclusive.c)
 */

KIRQL __fastcall RtlpHpSegLockAcquire(__int64 a1, char a2)
{
  KIRQL result; // al

  result = -1;
  if ( (a2 & 1) == 0 )
    return RtlpHpAcquireLockExclusive((volatile LONG *)(a1 + 24), *(_DWORD *)(a1 + 96) & 1);
  return result;
}
