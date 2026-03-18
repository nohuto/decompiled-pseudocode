/*
 * XREFs of ?GetD2DContext@CHwSurfaceRenderTarget@@UEAAJPEAPEAVID2DContext@@@Z @ 0x180078D10
 * Callers:
 *     ?GetD2DContext@CHwTextureRenderTarget@@UEAAJPEAPEAVID2DContext@@@Z @ 0x180078170 (-GetD2DContext@CHwTextureRenderTarget@@UEAAJPEAPEAVID2DContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?QueryInterface@CD3DDeviceLevel1@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800768D0 (-QueryInterface@CD3DDeviceLevel1@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetDeviceNoRef@CHwSurfaceRenderTarget@@MEBAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x180078A70 (-GetDeviceNoRef@CHwSurfaceRenderTarget@@MEBAJPEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::GetD2DContext(CHwSurfaceRenderTarget *this, struct ID2DContext **a2)
{
  __int64 (__fastcall *v3)(CHwSurfaceRenderTarget *, struct CD3DDeviceLevel1 **); // rax
  int DeviceNoRef; // eax
  unsigned int v5; // ebx
  int Interface; // eax
  CD3DDeviceLevel1 *v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(__int64 (__fastcall **)(CHwSurfaceRenderTarget *, struct CD3DDeviceLevel1 **))(*(_QWORD *)this + 256LL);
  if ( v3 == CHwSurfaceRenderTarget::GetDeviceNoRef )
    DeviceNoRef = CHwSurfaceRenderTarget::GetDeviceNoRef(this, &v8);
  else
    DeviceNoRef = v3(this, &v8);
  v5 = DeviceNoRef;
  if ( DeviceNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DeviceNoRef, 0x4Eu);
  }
  else
  {
    Interface = CD3DDeviceLevel1::QueryInterface(v8, &GUID_74cc6ad9_1f38_4fd9_9734_84cb3e5c0b1b, (void **)a2);
    v5 = Interface;
    if ( Interface < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Interface, 0x51u);
  }
  return v5;
}
