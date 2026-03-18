/*
 * XREFs of strncat_s @ 0x14018E770
 * Callers:
 *     <none>
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14016CD90 (xHalTimerWatchdogStop.c)
 */

errno_t __cdecl strncat_s(char *a1, rsize_t SizeInBytes, const char *Src, rsize_t MaxCount)
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
    if ( !a1 )
    {
LABEL_10:
      xHalTimerWatchdogStop();
      return 22;
    }
  }
  else if ( !a1 )
  {
    if ( !SizeInBytes )
      return 0;
    goto LABEL_10;
  }
  if ( !SizeInBytes )
    goto LABEL_10;
  if ( MaxCount && !Src )
  {
    *a1 = 0;
    goto LABEL_10;
  }
  v7 = a1;
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
      v10 = v7 - Src;
      do
      {
        v11 = *Src;
        v12 = v8;
        Src[v10] = *Src;
        ++Src;
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
      v13 = (const char *)(Src - v7);
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
      a1[SizeInBytes - 1] = 0;
      return 80;
    }
    v9 = 34;
  }
  else
  {
    v9 = 22;
  }
  *a1 = 0;
  xHalTimerWatchdogStop();
  return v9;
}
