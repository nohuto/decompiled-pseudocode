/*
 * XREFs of strncpy_s @ 0x180096690
 * Callers:
 *     sub_18008C198 @ 0x18008C198 (sub_18008C198.c)
 *     _splitpath_s @ 0x180095A60 (_splitpath_s.c)
 * Callees:
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 */

errno_t __cdecl strncpy_s(char *Destination, rsize_t SizeInBytes, const char *Source, rsize_t MaxCount)
{
  rsize_t v4; // r10
  errno_t v6; // ebx
  char *v7; // r11
  signed __int64 v8; // rax
  char v9; // r11
  rsize_t v10; // rbx
  signed __int64 v11; // r8
  char v12; // al

  v4 = SizeInBytes;
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
    if ( !SizeInBytes )
      return 0;
    goto LABEL_29;
  }
  if ( !SizeInBytes )
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
      v8 = Destination - Source;
      do
      {
        v9 = *Source;
        v10 = SizeInBytes;
        Source[v8] = *Source;
        ++Source;
        if ( !v9 )
          break;
        --SizeInBytes;
      }
      while ( SizeInBytes );
      SizeInBytes = v10 - 1;
      if ( !v9 )
        SizeInBytes = v10;
    }
    else
    {
      v11 = Source - Destination;
      do
      {
        v12 = v7[v11];
        *v7++ = v12;
        if ( !v12 )
          break;
        if ( !--SizeInBytes )
          break;
        --MaxCount;
      }
      while ( MaxCount );
      if ( !MaxCount )
        *v7 = 0;
    }
    if ( SizeInBytes )
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
