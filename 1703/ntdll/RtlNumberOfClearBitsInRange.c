/*
 * XREFs of RtlNumberOfClearBitsInRange @ 0x1800EAA10
 * Callers:
 *     sub_180109E60 @ 0x180109E60 (sub_180109E60.c)
 * Callees:
 *     RtlNumberOfSetBitsInRange @ 0x1800EAA40 (RtlNumberOfSetBitsInRange.c)
 */

ULONG __cdecl RtlNumberOfClearBitsInRange(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG Length)
{
  ULONG v4; // eax

  v4 = RtlNumberOfSetBitsInRange(BitMapHeader, StartingIndex, Length);
  if ( v4 == -1 )
    return -1;
  else
    return Length - v4;
}
