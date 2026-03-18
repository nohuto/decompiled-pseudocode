/*
 * XREFs of HvlFlushAddressSpaceTb @ 0x140159CD8
 * Callers:
 *     KeFlushProcessTb @ 0x140070738 (KeFlushProcessTb.c)
 *     KeFlushCurrentTbOnly @ 0x1400ADB50 (KeFlushCurrentTbOnly.c)
 *     KiFlushAddressSpaceTb @ 0x140159C68 (KiFlushAddressSpaceTb.c)
 * Callees:
 *     HvlpFastFlushAddressSpaceTb @ 0x140159D18 (HvlpFastFlushAddressSpaceTb.c)
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x14015A0BC (HvlpUseExtendedProcessorSetHypercalls.c)
 *     HvlpFastFlushAddressSpaceTbEx @ 0x14022E4E4 (HvlpFastFlushAddressSpaceTbEx.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x14022E7DC (HvlpSlowFlushAddressSpaceTb.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x14022E874 (HvlpSlowFlushAddressSpaceTbEx.c)
 */

__int64 __fastcall HvlFlushAddressSpaceTb(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9

  v3 = a1;
  if ( a2 && (unsigned __int8)HvlpUseExtendedProcessorSetHypercalls(a1, a2, a3, a1) )
  {
    if ( (((unsigned int)HvlpFlags >> 8) & 0xF) + 5 > 0xE || (HvlEnlightenments & 0x80u) == 0 )
      return HvlpSlowFlushAddressSpaceTbEx(v3);
    else
      return HvlpFastFlushAddressSpaceTbEx(v3);
  }
  else if ( (HvlEnlightenments & 0x80u) == 0 )
  {
    return HvlpSlowFlushAddressSpaceTb(v3, a2, a3);
  }
  else
  {
    return HvlpFastFlushAddressSpaceTb(v3, a2, a3);
  }
}
