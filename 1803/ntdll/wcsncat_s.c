/*
 * XREFs of wcsncat_s @ 0x180096B50
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 */

errno_t __cdecl wcsncat_s(wchar_t *Destination, rsize_t SizeInWords, const wchar_t *Source, rsize_t MaxCount)
{
  wchar_t *v7; // rdx
  rsize_t v8; // rcx
  errno_t v9; // ebx
  signed __int64 v10; // rdx
  wchar_t v11; // ax
  rsize_t v12; // rbx
  char *v13; // r8
  wchar_t v14; // ax

  if ( MaxCount )
  {
    if ( !Destination )
    {
LABEL_10:
      sub_18008B020();
      return 22;
    }
  }
  else if ( !Destination )
  {
    if ( !SizeInWords )
      return 0;
    goto LABEL_10;
  }
  if ( !SizeInWords )
    goto LABEL_10;
  if ( MaxCount && !Source )
  {
    *Destination = 0;
    goto LABEL_10;
  }
  v7 = Destination;
  v8 = SizeInWords;
  do
  {
    if ( !*v7 )
      break;
    ++v7;
    --v8;
  }
  while ( v8 );
  if ( v8 )
  {
    if ( MaxCount == -1LL )
    {
      v10 = (char *)v7 - (char *)Source;
      do
      {
        v11 = *Source;
        v12 = v8;
        *(const wchar_t *)((char *)Source + v10) = *Source;
        ++Source;
        if ( !v11 )
          break;
        --v8;
      }
      while ( v8 );
      v8 = v12 - 1;
      if ( !v11 )
        v8 = v12;
    }
    else
    {
      if ( !MaxCount )
        goto LABEL_29;
      v13 = (char *)((char *)Source - (char *)v7);
      do
      {
        v14 = *(wchar_t *)((char *)v7 + (_QWORD)v13);
        *v7++ = v14;
        if ( !v14 )
          break;
        if ( !--v8 )
          break;
        --MaxCount;
      }
      while ( MaxCount );
      if ( !MaxCount )
LABEL_29:
        *v7 = 0;
    }
    if ( v8 )
      return 0;
    if ( MaxCount == -1LL )
    {
      Destination[SizeInWords - 1] = 0;
      return 80;
    }
    v9 = 34;
  }
  else
  {
    v9 = 22;
  }
  *Destination = 0;
  sub_18008B020();
  return v9;
}
