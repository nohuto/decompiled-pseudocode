/*
 * XREFs of wcsncat_s @ 0x14018ECB0
 * Callers:
 *     NtLockProductActivationKeys @ 0x14063B550 (NtLockProductActivationKeys.c)
 *     PnprGetPluginDriverImagePath @ 0x140734184 (PnprGetPluginDriverImagePath.c)
 *     SddlpUuidFromString @ 0x1407977FC (SddlpUuidFromString.c)
 *     ExpConvertArcName @ 0x1407BEF08 (ExpConvertArcName.c)
 *     ExpFindArcName @ 0x1407BF834 (ExpFindArcName.c)
 *     ExpTranslateEfiPath @ 0x1407C1B1C (ExpTranslateEfiPath.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14016CD90 (xHalTimerWatchdogStop.c)
 */

errno_t __cdecl wcsncat_s(wchar_t *Dst, rsize_t SizeInWords, const wchar_t *Src, rsize_t MaxCount)
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
    if ( !Dst )
    {
LABEL_10:
      xHalTimerWatchdogStop();
      return 22;
    }
  }
  else if ( !Dst )
  {
    if ( !SizeInWords )
      return 0;
    goto LABEL_10;
  }
  if ( !SizeInWords )
    goto LABEL_10;
  if ( MaxCount && !Src )
  {
    *Dst = 0;
    goto LABEL_10;
  }
  v7 = Dst;
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
      v10 = (char *)v7 - (char *)Src;
      do
      {
        v11 = *Src;
        v12 = v8;
        *(const wchar_t *)((char *)Src + v10) = *Src;
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
      v13 = (char *)((char *)Src - (char *)v7);
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
      Dst[SizeInWords - 1] = 0;
      return 80;
    }
    v9 = 34;
  }
  else
  {
    v9 = 22;
  }
  *Dst = 0;
  xHalTimerWatchdogStop();
  return v9;
}
