/*
 * XREFs of strncpy_s @ 0x14018E880
 * Callers:
 *     _splitpath_s @ 0x14018DC50 (_splitpath_s.c)
 *     CmpGetToken @ 0x1408B1B2C (CmpGetToken.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14016CD90 (xHalTimerWatchdogStop.c)
 */

errno_t __cdecl strncpy_s(char *a1, rsize_t SizeInBytes, const char *Src, rsize_t MaxCount)
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
    if ( !a1 )
    {
LABEL_29:
      xHalTimerWatchdogStop();
      return 22;
    }
  }
  else if ( !a1 )
  {
    if ( !SizeInBytes )
      return 0;
    goto LABEL_29;
  }
  if ( !SizeInBytes )
    goto LABEL_29;
  if ( !MaxCount )
  {
    *a1 = 0;
    return 0;
  }
  if ( Src )
  {
    v7 = a1;
    if ( MaxCount == -1LL )
    {
      v8 = a1 - Src;
      do
      {
        v9 = *Src;
        v10 = SizeInBytes;
        Src[v8] = *Src;
        ++Src;
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
      v11 = Src - a1;
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
      a1[v4 - 1] = 0;
      return 80;
    }
    v6 = 34;
  }
  else
  {
    v6 = 22;
  }
  *a1 = 0;
  xHalTimerWatchdogStop();
  return v6;
}
