/*
 * XREFs of HvlFlushAddressSpaceTb @ 0x14014110C
 * Callers:
 *     KeFlushProcessTb @ 0x1400B8188 (KeFlushProcessTb.c)
 *     KiFlushAddressSpaceTb @ 0x1401410A4 (KiFlushAddressSpaceTb.c)
 * Callees:
 *     HvlpFastFlushAddressSpaceTb @ 0x140141134 (HvlpFastFlushAddressSpaceTb.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x1401F0DA0 (HvlpSlowFlushAddressSpaceTb.c)
 */

__int64 HvlFlushAddressSpaceTb()
{
  if ( (HvlEnlightenments & 0x80u) == 0 )
    return HvlpSlowFlushAddressSpaceTb();
  else
    return HvlpFastFlushAddressSpaceTb();
}
