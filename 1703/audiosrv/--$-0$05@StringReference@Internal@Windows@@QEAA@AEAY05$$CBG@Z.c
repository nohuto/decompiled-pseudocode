/*
 * XREFs of ??$?0$05@StringReference@Internal@Windows@@QEAA@AEAY05$$CBG@Z @ 0x1800D38EC
 * Callers:
 *     ?PerformLicenseCheckInternal@AtmosCheck@@AEAAJPEA_N00@Z @ 0x180026290 (-PerformLicenseCheckInternal@AtmosCheck@@AEAAJPEA_N00@Z.c)
 * Callees:
 *     <none>
 */

HSTRING *__fastcall Windows::Internal::StringReference::StringReference(HSTRING *string, PCWSTR sourceString)
{
  if ( WindowsCreateStringReference(sourceString, 5u, (HSTRING_HEADER *)(string + 1), string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  return string;
}
