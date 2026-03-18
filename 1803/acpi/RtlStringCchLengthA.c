/*
 * XREFs of RtlStringCchLengthA @ 0x1C0003684
 * Callers:
 *     ConvertMethodNameToUnicode @ 0x1C00035A8 (ConvertMethodNameToUnicode.c)
 *     AcpiDiagTraceDeviceReset @ 0x1C0007314 (AcpiDiagTraceDeviceReset.c)
 *     ACPIEcInitOpRegionHandler @ 0x1C0021D28 (ACPIEcInitOpRegionHandler.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchLengthA(STRSAFE_PCNZCH psz, size_t cchMax, size_t *pcchLength)
{
  size_t i; // r9
  NTSTATUS result; // eax

  if ( psz && cchMax <= 0x7FFFFFFF )
  {
    for ( i = cchMax; i; --i )
    {
      if ( !*psz )
        break;
      ++psz;
    }
    result = i == 0 ? 0xC000000D : 0;
    if ( pcchLength )
    {
      if ( i )
        *pcchLength = cchMax - i;
      else
        *pcchLength = 0LL;
    }
  }
  else
  {
    result = -1073741811;
  }
  if ( result < 0 )
  {
    if ( pcchLength )
      *pcchLength = 0LL;
  }
  return result;
}
