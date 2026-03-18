/*
 * XREFs of wcsncpy_s @ 0x140170640
 * Callers:
 *     _wsplitpath_s @ 0x14016FA80 (_wsplitpath_s.c)
 *     LocalGetAclForString @ 0x14057F594 (LocalGetAclForString.c)
 *     LocalGetStringForControl @ 0x1406FBA24 (LocalGetStringForControl.c)
 *     GetOperatorIndexByName @ 0x1406FD724 (GetOperatorIndexByName.c)
 *     ExpFindArcName @ 0x1407193A4 (ExpFindArcName.c)
 *     ExpParseSignatureName @ 0x140719F30 (ExpParseSignatureName.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14014A440 (xHalTimerWatchdogStop.c)
 */

errno_t __cdecl wcsncpy_s(wchar_t *Dst, rsize_t SizeInWords, const wchar_t *Src, rsize_t MaxCount)
{
  errno_t v5; // ebx
  wchar_t *v6; // r11
  rsize_t v7; // r10
  signed __int64 v8; // r11
  wchar_t v9; // ax
  signed __int64 v10; // r8
  wchar_t v11; // ax

  if ( MaxCount )
  {
    if ( !Dst )
    {
LABEL_27:
      xHalTimerWatchdogStop();
      return 22;
    }
  }
  else if ( !Dst )
  {
    if ( !SizeInWords )
      return 0;
    goto LABEL_27;
  }
  if ( !SizeInWords )
    goto LABEL_27;
  if ( !MaxCount )
  {
    *Dst = 0;
    return 0;
  }
  if ( Src )
  {
    v6 = Dst;
    v7 = SizeInWords;
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
        --v7;
      }
      while ( v7 );
    }
    else
    {
      v10 = (char *)Src - (char *)Dst;
      do
      {
        v11 = *(wchar_t *)((char *)v6 + v10);
        *v6++ = v11;
        if ( !v11 )
          break;
        if ( !--v7 )
          break;
        --MaxCount;
      }
      while ( MaxCount );
      if ( !MaxCount )
        *v6 = 0;
    }
    if ( v7 )
      return 0;
    if ( MaxCount == -1LL )
    {
      Dst[SizeInWords - 1] = 0;
      return 80;
    }
    v5 = 34;
  }
  else
  {
    v5 = 22;
  }
  *Dst = 0;
  xHalTimerWatchdogStop();
  return v5;
}
