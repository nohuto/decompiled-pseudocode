/*
 * XREFs of wcsnlen @ 0x180096940
 * Callers:
 *     _wcslwr_s @ 0x180092640 (_wcslwr_s.c)
 *     _wcsupr_s @ 0x180092B10 (_wcsupr_s.c)
 *     RtlpQueryTimeZoneKeyNameRoutine @ 0x1800EB050 (RtlpQueryTimeZoneKeyNameRoutine.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1800EB0D0 (RtlpSetTimeZoneInformationWorker.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x1800EC800 (RtlpConvertCultureNamesToLCIDs.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800ECA20 (RtlpConvertLCIDsToCultureNames.c)
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
