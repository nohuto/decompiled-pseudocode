/*
 * XREFs of RtlFindMostSignificantBit @ 0x1400BA600
 * Callers:
 *     MiValidateZeroBits @ 0x140593D78 (MiValidateZeroBits.c)
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
