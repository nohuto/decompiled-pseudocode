/*
 * XREFs of RtlNumberOfClearBits @ 0x18008E5D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBits @ 0x18008E5F0 (RtlNumberOfSetBits.c)
 */

ULONG __cdecl RtlNumberOfClearBits(PRTL_BITMAP BitMapHeader)
{
  return BitMapHeader->SizeOfBitMap - RtlNumberOfSetBits(BitMapHeader);
}
