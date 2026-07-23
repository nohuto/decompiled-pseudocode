/*
 * XREFs of RtlNumberOfClearBits @ 0x18008FEB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBits @ 0x18008FED0 (RtlNumberOfSetBits.c)
 */

ULONG __cdecl RtlNumberOfClearBits(PRTL_BITMAP BitMapHeader)
{
  return BitMapHeader->SizeOfBitMap - RtlNumberOfSetBits(BitMapHeader);
}
