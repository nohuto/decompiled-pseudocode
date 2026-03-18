/*
 * XREFs of strcat_s @ 0x14018E620
 * Callers:
 *     ExpSystemErrorHandler2 @ 0x140487900 (ExpSystemErrorHandler2.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14016CD90 (xHalTimerWatchdogStop.c)
 */

errno_t __cdecl strcat_s(char *a1, rsize_t SizeInBytes, const char *Src)
{
  char *v4; // rax
  errno_t v5; // ebx
  signed __int64 v6; // rax
  char v7; // r9
  rsize_t v8; // r10
  rsize_t v9; // rax

  if ( !a1 || !SizeInBytes )
    goto LABEL_5;
  if ( !Src )
  {
    *a1 = 0;
LABEL_5:
    xHalTimerWatchdogStop();
    return 22;
  }
  v4 = a1;
  do
  {
    if ( !*v4 )
      break;
    ++v4;
    --SizeInBytes;
  }
  while ( SizeInBytes );
  if ( !SizeInBytes )
  {
    v5 = 22;
LABEL_18:
    *a1 = 0;
    xHalTimerWatchdogStop();
    return v5;
  }
  v6 = v4 - Src;
  do
  {
    v7 = *Src;
    v8 = SizeInBytes;
    Src[v6] = *Src;
    ++Src;
    if ( !v7 )
      break;
    --SizeInBytes;
  }
  while ( SizeInBytes );
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
