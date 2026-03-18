/*
 * XREFs of ApiSetEditionContactVisualization @ 0x1C013A314
 * Callers:
 *     ?DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z @ 0x1C011DDA8 (-DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionContactVisualization(unsigned int a1, __int64 a2, __int64 a3, unsigned int a4, int a5)
{
  __int64 v6; // rsi
  unsigned int v8; // ebx
  int v9; // edx

  v6 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      14,
      140,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  v8 = 0;
  if ( (int)IsEditionContactVisualizationSupported() >= 0 )
    v8 = EditionContactVisualization(a1, v6, 608LL, a4, a5);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v9) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v9,
      14,
      141,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  return v8;
}
