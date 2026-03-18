/*
 * XREFs of wcsnlen @ 0x14016BD00
 * Callers:
 *     _wcslwr_s @ 0x14016A190 (_wcslwr_s.c)
 *     NtSetInformationJobObject @ 0x14055E0D0 (NtSetInformationJobObject.c)
 *     RtlpQueryTimeZoneKeyNameRoutine @ 0x1405D4960 (RtlpQueryTimeZoneKeyNameRoutine.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1406EB080 (RtlpSetTimeZoneInformationWorker.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x140737D3C (BiGetObjectReferenceFromEfiEntry.c)
 * Callees:
 *     <none>
 */

size_t __cdecl wcsnlen(const wchar_t *Src, size_t MaxCount)
{
  size_t result; // rax

  for ( result = 0LL; result < MaxCount; ++Src )
  {
    if ( !*Src )
      break;
    ++result;
  }
  return result;
}
