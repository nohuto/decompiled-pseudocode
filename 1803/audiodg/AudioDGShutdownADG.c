/*
 * XREFs of AudioDGShutdownADG @ 0x140034A40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x140034B74 (WPP_SF_.c)
 */

__int64 AudioDGShutdownADG()
{
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_3fe81b27291f30f1338e1fd51985555a_Traceguids);
  }
  if ( qword_140087F98 )
    SetEvent(qword_140087F98);
  return 0LL;
}
