/*
 * XREFs of wcsncpy_s @ 0x14018EDE0
 * Callers:
 *     _wsplitpath_s @ 0x14018E150 (_wsplitpath_s.c)
 *     LocalGetAclForString @ 0x140601100 (LocalGetAclForString.c)
 *     LocalGetStringForControl @ 0x140796CB0 (LocalGetStringForControl.c)
 *     GetOperatorIndexByName @ 0x140798974 (GetOperatorIndexByName.c)
 *     EtwSetPerformanceTraceInformation @ 0x1407A9CB0 (EtwSetPerformanceTraceInformation.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x1407ABBD8 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     ExpFindArcName @ 0x1407BF834 (ExpFindArcName.c)
 *     ExpParseSignatureName @ 0x1407C06C0 (ExpParseSignatureName.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14016CD90 (xHalTimerWatchdogStop.c)
 */

errno_t __cdecl wcsncpy_s(wchar_t *Dst, rsize_t SizeInWords, const wchar_t *Src, rsize_t MaxCount)
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
    if ( !Dst )
    {
LABEL_29:
      xHalTimerWatchdogStop();
      return 22;
    }
  }
  else if ( !Dst )
  {
    if ( !SizeInWords )
      return 0;
    goto LABEL_29;
  }
  if ( !SizeInWords )
    goto LABEL_29;
  if ( !MaxCount )
  {
    *Dst = 0;
    return 0;
  }
  if ( Src )
  {
    v7 = Dst;
    if ( MaxCount == -1LL )
    {
      v8 = (char *)Dst - (char *)Src;
      do
      {
        v9 = *Src;
        v10 = SizeInWords;
        *(const wchar_t *)((char *)Src + v8) = *Src;
        ++Src;
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
      v11 = (char *)Src - (char *)Dst;
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
      Dst[v4 - 1] = 0;
      return 80;
    }
    v6 = 34;
  }
  else
  {
    v6 = 22;
  }
  *Dst = 0;
  xHalTimerWatchdogStop();
  return v6;
}
