/*
 * XREFs of strncat_s @ 0x180096580
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 */

errno_t __cdecl strncat_s(char *Destination, rsize_t SizeInBytes, const char *Source, rsize_t MaxCount)
{
  char *v7; // rdx
  rsize_t v8; // rcx
  errno_t v9; // ebx
  __int64 v10; // rdx
  char v11; // al
  rsize_t v12; // rbx
  const char *v13; // r8
  char v14; // al

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
    if ( !SizeInBytes )
      return 0;
    goto LABEL_10;
  }
  if ( !SizeInBytes )
    goto LABEL_10;
  if ( MaxCount && !Source )
  {
    *Destination = 0;
    goto LABEL_10;
  }
  v7 = Destination;
  v8 = SizeInBytes;
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
      v10 = v7 - Source;
      do
      {
        v11 = *Source;
        v12 = v8;
        Source[v10] = *Source;
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
      v13 = (const char *)(Source - v7);
      do
      {
        v14 = v7[(_QWORD)v13];
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
      Destination[SizeInBytes - 1] = 0;
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
