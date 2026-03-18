/*
 * XREFs of ApiSetEditionEdgyProcessInput @ 0x1C01399C8
 * Callers:
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C011CC50 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionEdgyProcessInput(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int (__high *v5)(int, struct tagINPUTDEST, struct tagPOSTINPUTINFO *); // r14
  unsigned int v9; // ebx

  v5 = CBaseProcessor::_spfnNonMinUserCallback;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0xA8u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  v9 = 0;
  if ( (int)IsEditionEdgyProcessInputSupported() >= 0 )
    v9 = EditionEdgyProcessInput(a1, v5, a3, a4, a5);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0xA9u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  return v9;
}
