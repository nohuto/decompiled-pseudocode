/*
 * XREFs of wcsncat_s @ 0x140164D30
 * Callers:
 *     NtLockProductActivationKeys @ 0x1405CD0B0 (NtLockProductActivationKeys.c)
 *     PnprGetPluginDriverImagePath @ 0x1406CC7E4 (PnprGetPluginDriverImagePath.c)
 *     SddlpUuidFromString @ 0x140733F54 (SddlpUuidFromString.c)
 *     ExpConvertArcName @ 0x140758274 (ExpConvertArcName.c)
 *     ExpFindArcName @ 0x140758BA4 (ExpFindArcName.c)
 *     ExpTranslateEfiPath @ 0x14075ABF0 (ExpTranslateEfiPath.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140131CB0 (xHalTimerWatchdogStop.c)
 */

errno_t __cdecl wcsncat_s(wchar_t *Dst, rsize_t SizeInWords, const wchar_t *Src, rsize_t MaxCount)
{
  rsize_t v4; // r11
  wchar_t *v5; // r10
  errno_t v7; // ebx
  signed __int64 v8; // rcx
  wchar_t v9; // ax
  signed __int64 v10; // r8
  wchar_t v11; // ax

  v4 = SizeInWords;
  v5 = Dst;
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
  do
  {
    if ( !*Dst )
      break;
    ++Dst;
    --SizeInWords;
  }
  while ( SizeInWords );
  if ( SizeInWords )
  {
    if ( MaxCount == -1LL )
    {
      v8 = (char *)Dst - (char *)Src;
      do
      {
        v9 = *Src;
        *(const wchar_t *)((char *)Src + v8) = *Src;
        ++Src;
        if ( !v9 )
          break;
        --SizeInWords;
      }
      while ( SizeInWords );
    }
    else
    {
      if ( !MaxCount )
        goto LABEL_26;
      v10 = (char *)Src - (char *)Dst;
      do
      {
        v11 = *(wchar_t *)((char *)Dst + v10);
        *Dst++ = v11;
        if ( !v11 )
          break;
        if ( !--SizeInWords )
          break;
        --MaxCount;
      }
      while ( MaxCount );
      if ( !MaxCount )
LABEL_26:
        *Dst = 0;
    }
    if ( SizeInWords )
      return 0;
    if ( MaxCount == -1LL )
    {
      v5[v4 - 1] = 0;
      return 80;
    }
    v7 = 34;
  }
  else
  {
    v7 = 22;
  }
  *v5 = 0;
  xHalTimerWatchdogStop();
  return v7;
}
