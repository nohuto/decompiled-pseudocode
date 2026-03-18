/*
 * XREFs of ?OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ @ 0x18014A280
 * Callers:
 *     ?ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUMILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS@@@Z @ 0x180138358 (-ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUMILCMD_MAGNIFIERRENDER.c)
 * Callees:
 *     ?FlushAllDevices@CD3DDeviceManager@@QEAAXXZ @ 0x18001B08C (-FlushAllDevices@CD3DDeviceManager@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z @ 0x18014A2E0 (-SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z.c)
 */

__int64 __fastcall MagnifierCaptureBitsResponse::OnPresentComplete(MagnifierCaptureBitsResponse *this)
{
  signed int v2; // eax
  unsigned int v3; // ebx

  CD3DDeviceManager::FlushAllDevices((CD3DDeviceManager *)&g_D3DDeviceManager);
  *(_BYTE *)(*((_QWORD *)this + 18) + 210LL) = 0;
  v2 = MagnifierCaptureBitsResponse::SendResponse(this, 0);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v2, 0x6Cu);
  return v3;
}
