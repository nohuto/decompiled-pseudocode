/*
 * XREFs of ApiSetEditionEdgyProcessInput @ 0x1C013A6F0
 * Callers:
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C011DE10 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionEdgyProcessInput(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int (__high *v5)(int, struct tagINPUTDEST, struct tagPOSTINPUTINFO *); // r14
  unsigned int v9; // ebx

  v5 = CBaseProcessor::_spfnNonMinUserCallback;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      156,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  v9 = 0;
  if ( (int)IsEditionEdgyProcessInputSupported() >= 0 )
    v9 = EditionEdgyProcessInput(a1, v5, a3, a4, a5);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      157,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  return v9;
}
