/*
 * XREFs of wcscpy_s @ 0x1800A16D0
 * Callers:
 *     RtlConvertSidToUnicodeString @ 0x180044360 (RtlConvertSidToUnicodeString.c)
 *     RtlLockBootStatusData @ 0x180089980 (RtlLockBootStatusData.c)
 *     sub_1800D39E4 @ 0x1800D39E4 (sub_1800D39E4.c)
 *     RtlCreateBootStatusDataFile @ 0x1800EB2F0 (RtlCreateBootStatusDataFile.c)
 * Callees:
 *     sub_180095DE0 @ 0x180095DE0 (sub_180095DE0.c)
 */

errno_t __cdecl wcscpy_s(wchar_t *Destination, rsize_t SizeInWords, const wchar_t *Source)
{
  errno_t v4; // ebx
  signed __int64 v5; // rcx
  wchar_t v6; // ax

  if ( Destination && SizeInWords )
  {
    if ( !Source )
    {
      v4 = 22;
LABEL_10:
      *Destination = 0;
      sub_180095DE0();
      return v4;
    }
    v5 = (char *)Destination - (char *)Source;
    do
    {
      v6 = *Source;
      *(const wchar_t *)((char *)Source + v5) = *Source;
      ++Source;
      if ( !v6 )
        break;
      --SizeInWords;
    }
    while ( SizeInWords );
    if ( !SizeInWords )
    {
      v4 = 34;
      goto LABEL_10;
    }
    return 0;
  }
  else
  {
    sub_180095DE0();
    return 22;
  }
}
