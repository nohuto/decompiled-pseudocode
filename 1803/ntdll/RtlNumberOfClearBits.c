/*
 * XREFs of RtlNumberOfClearBits @ 0x180089070
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBits @ 0x180089090 (RtlNumberOfSetBits.c)
 */

ULONG __cdecl RtlNumberOfClearBits(PRTL_BITMAP BitMapHeader)
{
  return BitMapHeader->SizeOfBitMap - RtlNumberOfSetBits(BitMapHeader);
}
