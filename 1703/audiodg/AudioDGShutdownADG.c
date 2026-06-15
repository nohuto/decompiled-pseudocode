/*
 * XREFs of AudioDGShutdownADG @ 0x1400363E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x140036454 (WPP_SF_.c)
 */

__int64 AudioDGShutdownADG()
{
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_23720d765f8d3da2cbc3c5fdd3fad56c_Traceguids);
  }
  if ( hEvent )
    SetEvent(hEvent);
  return 0LL;
}
