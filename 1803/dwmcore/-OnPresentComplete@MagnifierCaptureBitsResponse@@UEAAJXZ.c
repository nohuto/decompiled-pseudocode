/*
 * XREFs of ?OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ @ 0x1801730B0
 * Callers:
 *     ?ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUMILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS@@@Z @ 0x18015A828 (-ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUMILCMD_MAGNIFIERRENDER.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FlushAllDevices@CD3DDeviceManager@@QEAAXXZ @ 0x180088CA0 (-FlushAllDevices@CD3DDeviceManager@@QEAAXXZ.c)
 *     ?SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z @ 0x180173110 (-SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z.c)
 */

__int64 __fastcall MagnifierCaptureBitsResponse::OnPresentComplete(MagnifierCaptureBitsResponse *this)
{
  int v2; // eax
  unsigned int v3; // ebx

  CD3DDeviceManager::FlushAllDevices((CD3DDeviceManager *)&g_D3DDeviceManager);
  *(_BYTE *)(*((_QWORD *)this + 18) + 266LL) = 0;
  v2 = MagnifierCaptureBitsResponse::SendResponse(this, 0);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x6Cu);
  return v3;
}
