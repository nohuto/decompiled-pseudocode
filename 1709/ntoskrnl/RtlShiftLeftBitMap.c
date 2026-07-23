/*
 * XREFs of RtlShiftLeftBitMap @ 0x140253790
 * Callers:
 *     <none>
 * Callees:
 *     RtlClearBits @ 0x140080ED0 (RtlClearBits.c)
 *     memset @ 0x140192F40 (memset.c)
 *     RtlExtractBitMap @ 0x140251E10 (RtlExtractBitMap.c)
 */

void __fastcall RtlShiftLeftBitMap(PRTL_BITMAP BitMapHeader, ULONG NumberToClear)
{
  unsigned int SizeOfBitMap; // r9d
  int v3; // eax

  if ( NumberToClear )
  {
    SizeOfBitMap = BitMapHeader->SizeOfBitMap;
    v3 = 0;
    if ( NumberToClear < BitMapHeader->SizeOfBitMap )
    {
      RtlExtractBitMap(BitMapHeader, BitMapHeader, NumberToClear, SizeOfBitMap - NumberToClear);
      RtlClearBits(BitMapHeader, BitMapHeader->SizeOfBitMap - NumberToClear, NumberToClear);
    }
    else
    {
      LOBYTE(v3) = (SizeOfBitMap & 0x1F) != 0;
      memset(BitMapHeader->Buffer, 0, 4 * ((SizeOfBitMap >> 5) + v3));
    }
  }
}
