/*
 * XREFs of EditionEndDeferWinEventNotify @ 0x1C00FC900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 EditionEndDeferWinEventNotify()
{
  __int64 result; // rax

  result = gdwDeferWinEvent;
  if ( --gdwDeferWinEvent == 1 )
  {
    if ( gpPendingNotifies )
      return xxxFlushDeferredWindowEvents();
  }
  return result;
}
