/*
 * XREFs of wcsncpy_s @ 0x180096C80
 * Callers:
 *     _wsplitpath_s @ 0x180095F60 (_wsplitpath_s.c)
 * Callees:
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 */

errno_t __cdecl wcsncpy_s(wchar_t *Destination, rsize_t SizeInWords, const wchar_t *Source, rsize_t MaxCount)
{
  rsize_t v4; // r10
  errno_t v6; // ebx
  wchar_t *v7; // r11
  signed __int64 v8; // rax
  wchar_t v9; // r11
  rsize_t v10; // rbx
  signed __int64 v11; // r8
  wchar_t v12; // ax

  v4 = SizeInWords;
  if ( MaxCount )
  {
    if ( !Destination )
    {
LABEL_29:
      sub_18008B020();
      return 22;
    }
  }
  else if ( !Destination )
  {
    if ( !SizeInWords )
      return 0;
    goto LABEL_29;
  }
  if ( !SizeInWords )
    goto LABEL_29;
  if ( !MaxCount )
  {
    *Destination = 0;
    return 0;
  }
  if ( Source )
  {
    v7 = Destination;
    if ( MaxCount == -1LL )
    {
      v8 = (char *)Destination - (char *)Source;
      do
      {
        v9 = *Source;
        v10 = SizeInWords;
        *(const wchar_t *)((char *)Source + v8) = *Source;
        ++Source;
        if ( !v9 )
          break;
        --SizeInWords;
      }
      while ( SizeInWords );
      SizeInWords = v10 - 1;
      if ( !v9 )
        SizeInWords = v10;
    }
    else
    {
      v11 = (char *)Source - (char *)Destination;
      do
      {
        v12 = *(wchar_t *)((char *)v7 + v11);
        *v7++ = v12;
        if ( !v12 )
          break;
        if ( !--SizeInWords )
          break;
        --MaxCount;
      }
      while ( MaxCount );
      if ( !MaxCount )
        *v7 = 0;
    }
    if ( SizeInWords )
      return 0;
    if ( MaxCount == -1LL )
    {
      Destination[v4 - 1] = 0;
      return 80;
    }
    v6 = 34;
  }
  else
  {
    v6 = 22;
  }
  *Destination = 0;
  sub_18008B020();
  return v6;
}
