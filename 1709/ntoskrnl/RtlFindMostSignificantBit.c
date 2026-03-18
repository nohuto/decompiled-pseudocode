/*
 * XREFs of RtlFindMostSignificantBit @ 0x14011BEC0
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1404965C0 (MiAllocateVirtualMemory.c)
 *     NtMapViewOfSection @ 0x1404CF7E0 (NtMapViewOfSection.c)
 *     MiValidateZeroBits @ 0x1406E0DA4 (MiValidateZeroBits.c)
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
