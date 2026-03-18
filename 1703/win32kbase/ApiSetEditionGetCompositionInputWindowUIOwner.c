/*
 * XREFs of ApiSetEditionGetCompositionInputWindowUIOwner @ 0x1C013AC30
 * Callers:
 *     ?GetCompositionWindowUIOwner@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x1C0118298 (-GetCompositionWindowUIOwner@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z @ 0x1C01251AC (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionGetCompositionInputWindowUIOwner(__int64 a1)
{
  __int64 CompositionInputWindowUIOwner; // rbx

  CompositionInputWindowUIOwner = 0LL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      24,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  if ( (int)IsEditionGetCompositionInputWindowUIOwnerSupported() >= 0 )
    CompositionInputWindowUIOwner = EditionGetCompositionInputWindowUIOwner(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      25,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  return CompositionInputWindowUIOwner;
}
