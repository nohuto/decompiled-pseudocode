/*
 * XREFs of ?GetD2DContext@CHwSurfaceRenderTarget@@UEAAJPEAPEAVID2DContext@@@Z @ 0x18008F658
 * Callers:
 *     ?GetD2DContext@CHwTextureRenderTarget@@UEAAJPEAPEAVID2DContext@@@Z @ 0x18008F940 (-GetD2DContext@CHwTextureRenderTarget@@UEAAJPEAPEAVID2DContext@@@Z.c)
 * Callees:
 *     ?QueryInterface@CD3DDeviceLevel1@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180021C80 (-QueryInterface@CD3DDeviceLevel1@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetDeviceNoRef@CHwSurfaceRenderTarget@@MEBAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x18008F880 (-GetDeviceNoRef@CHwSurfaceRenderTarget@@MEBAJPEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::GetD2DContext(CHwSurfaceRenderTarget *this, struct ID2DContext **a2)
{
  __int64 (__fastcall *v3)(CHwSurfaceRenderTarget *__hidden, struct CD3DDeviceLevel1 **); // rax
  signed int DeviceNoRef; // eax
  unsigned int v5; // ebx
  signed int Interface; // eax
  CD3DDeviceLevel1 *v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(__int64 (__fastcall **)(CHwSurfaceRenderTarget *__hidden, struct CD3DDeviceLevel1 **))(*(_QWORD *)this + 216LL);
  if ( v3 == CHwSurfaceRenderTarget::GetDeviceNoRef )
    DeviceNoRef = CHwSurfaceRenderTarget::GetDeviceNoRef(this, &v8);
  else
    DeviceNoRef = v3(this, &v8);
  v5 = DeviceNoRef;
  if ( DeviceNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, DeviceNoRef, 0x4Eu);
  }
  else
  {
    Interface = CD3DDeviceLevel1::QueryInterface(v8, &GUID_74cc6ad9_1f38_4fd9_9734_84cb3e5c0b1b, (void **)a2);
    v5 = Interface;
    if ( Interface < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, Interface, 0x51u);
  }
  return v5;
}
