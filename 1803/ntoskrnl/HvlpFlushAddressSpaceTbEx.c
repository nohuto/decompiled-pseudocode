/*
 * XREFs of HvlpFlushAddressSpaceTbEx @ 0x14022E6C4
 * Callers:
 *     MiSharePages @ 0x1400326D0 (MiSharePages.c)
 * Callees:
 *     HvlpFastFlushAddressSpaceTbEx @ 0x14022E4E4 (HvlpFastFlushAddressSpaceTbEx.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x14022E874 (HvlpSlowFlushAddressSpaceTbEx.c)
 */

__int64 __fastcall HvlpFlushAddressSpaceTbEx(__int64 a1, __int64 a2, char a3)
{
  if ( (((unsigned int)HvlpFlags >> 8) & 0xF) + 5 > 0xE || (HvlEnlightenments & 0x80u) == 0 )
    return HvlpSlowFlushAddressSpaceTbEx(a1);
  else
    return HvlpFastFlushAddressSpaceTbEx(a1, a2, a3);
}
