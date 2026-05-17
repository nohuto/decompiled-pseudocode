/*
 * XREFs of wcscat_s @ 0x1800969F0
 * Callers:
 *     RtlConvertSidToUnicodeString @ 0x180036C30 (RtlConvertSidToUnicodeString.c)
 *     sub_180041510 @ 0x180041510 (sub_180041510.c)
 * Callees:
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 */

errno_t __cdecl wcscat_s(wchar_t *Destination, rsize_t SizeInWords, const wchar_t *Source)
{
  wchar_t *v4; // rax
  errno_t v5; // ebx
  signed __int64 v6; // rax
  wchar_t v7; // r9
  rsize_t v8; // r10
  rsize_t v9; // rax

  if ( !Destination || !SizeInWords )
    goto LABEL_5;
  if ( !Source )
  {
    *Destination = 0;
LABEL_5:
    sub_18008B020();
    return 22;
  }
  v4 = Destination;
  do
  {
    if ( !*v4 )
      break;
    ++v4;
    --SizeInWords;
  }
  while ( SizeInWords );
  if ( !SizeInWords )
  {
    v5 = 22;
LABEL_18:
    *Destination = 0;
    sub_18008B020();
    return v5;
  }
  v6 = (char *)v4 - (char *)Source;
  do
  {
    v7 = *Source;
    v8 = SizeInWords;
    *(const wchar_t *)((char *)Source + v6) = *Source;
    ++Source;
    if ( !v7 )
      break;
    --SizeInWords;
  }
  while ( SizeInWords );
  v9 = v8 - 1;
  if ( !v7 )
    v9 = v8;
  if ( !v9 )
  {
    v5 = 34;
    goto LABEL_18;
  }
  return 0;
}
