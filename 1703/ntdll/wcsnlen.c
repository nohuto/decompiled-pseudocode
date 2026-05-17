/*
 * XREFs of wcsnlen @ 0x18009BBD0
 * Callers:
 *     _wcslwr_s @ 0x180097740 (_wcslwr_s.c)
 *     _wcsupr_s @ 0x180097C10 (_wcsupr_s.c)
 *     sub_1800EB640 @ 0x1800EB640 (sub_1800EB640.c)
 *     sub_1800EB6C0 @ 0x1800EB6C0 (sub_1800EB6C0.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x1800ECBD0 (RtlpConvertCultureNamesToLCIDs.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800ECDF0 (RtlpConvertLCIDsToCultureNames.c)
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
