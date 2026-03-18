/*
 * XREFs of wcsnlen @ 0x1401605E0
 * Callers:
 *     _wcslwr_s @ 0x14015EBD0 (_wcslwr_s.c)
 *     NtSetInformationJobObject @ 0x140510C80 (NtSetInformationJobObject.c)
 *     RtlpQueryTimeZoneKeyNameRoutine @ 0x1405F0D50 (RtlpQueryTimeZoneKeyNameRoutine.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x140722FCC (RtlpSetTimeZoneInformationWorker.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x14077C3A8 (BiGetObjectReferenceFromEfiEntry.c)
 *     SiIsValidWindowsBootEntry @ 0x14077E030 (SiIsValidWindowsBootEntry.c)
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
