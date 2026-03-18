/*
 * XREFs of RtlFindMostSignificantBit @ 0x14007D560
 * Callers:
 *     NtMapViewOfSection @ 0x1404C9130 (NtMapViewOfSection.c)
 *     MiAllocateVirtualMemory @ 0x14051BE20 (MiAllocateVirtualMemory.c)
 *     MiValidateZeroBits @ 0x1406B4D9C (MiValidateZeroBits.c)
 * Callees:
 *     <none>
 */

CCHAR __stdcall RtlFindMostSignificantBit(ULONGLONG Set)
{
  bool v1; // zf
  __int64 v2; // rdx
  CCHAR result; // al

  v1 = !_BitScanReverse64((unsigned __int64 *)&v2, Set);
  result = -1;
  if ( !v1 )
    return v2;
  return result;
}
