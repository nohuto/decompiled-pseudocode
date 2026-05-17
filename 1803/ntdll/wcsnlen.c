/*
 * XREFs of wcsnlen @ 0x180090E20
 * Callers:
 *     _wcslwr_s @ 0x18008CB90 (_wcslwr_s.c)
 *     _wcsupr_s @ 0x18008D060 (_wcsupr_s.c)
 *     sub_1800E74B0 @ 0x1800E74B0 (sub_1800E74B0.c)
 *     sub_1800E7530 @ 0x1800E7530 (sub_1800E7530.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x1800E8C70 (RtlpConvertCultureNamesToLCIDs.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800E8E80 (RtlpConvertLCIDsToCultureNames.c)
 * Callees:
 *     <none>
 */

size_t __cdecl wcsnlen(const wchar_t *Source, size_t MaxCount)
{
  size_t result; // rax

  for ( result = 0LL; result < MaxCount; ++Source )
  {
    if ( !*Source )
      break;
    ++result;
  }
  return result;
}
