/*
 * XREFs of HvlFlushAddressSpaceTb @ 0x1401EB808
 * Callers:
 *     KeFlushProcessTb @ 0x140063154 (KeFlushProcessTb.c)
 *     KiFlushAddressSpaceTb @ 0x1402010D0 (KiFlushAddressSpaceTb.c)
 * Callees:
 *     <none>
 */

__int64 HvlFlushAddressSpaceTb()
{
  if ( (HvlEnlightenments & 0x80u) != 0 )
    return HvlpFastFlushAddressSpaceTb();
  else
    return HvlpSlowFlushAddressSpaceTb();
}
