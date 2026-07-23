/*
 * XREFs of RtlShiftLeftBitMap @ 0x140288E00
 * Callers:
 *     <none>
 * Callees:
 *     RtlClearBits @ 0x140072BD0 (RtlClearBits.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlExtractBitMap @ 0x1402879C0 (RtlExtractBitMap.c)
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
