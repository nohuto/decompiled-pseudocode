/*
 * XREFs of wcscpy_s @ 0x180096AB0
 * Callers:
 *     RtlConvertSidToUnicodeString @ 0x180036C30 (RtlConvertSidToUnicodeString.c)
 *     sub_1800C8094 @ 0x1800C8094 (sub_1800C8094.c)
 * Callees:
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 */

errno_t __cdecl wcscpy_s(wchar_t *Destination, rsize_t SizeInWords, const wchar_t *Source)
{
  errno_t v3; // ebx
  signed __int64 v4; // rax
  wchar_t v5; // r9
  rsize_t v6; // r10
  rsize_t v7; // rax

  if ( Destination && SizeInWords )
  {
    if ( !Source )
    {
      v3 = 22;
LABEL_12:
      *Destination = 0;
      sub_18008B020();
      return v3;
    }
    v4 = (char *)Destination - (char *)Source;
    do
    {
      v5 = *Source;
      v6 = SizeInWords;
      *(const wchar_t *)((char *)Source + v4) = *Source;
      ++Source;
      if ( !v5 )
        break;
      --SizeInWords;
    }
    while ( SizeInWords );
    v7 = v6 - 1;
    if ( !v5 )
      v7 = v6;
    if ( !v7 )
    {
      v3 = 34;
      goto LABEL_12;
    }
    return 0;
  }
  else
  {
    sub_18008B020();
    return 22;
  }
}
