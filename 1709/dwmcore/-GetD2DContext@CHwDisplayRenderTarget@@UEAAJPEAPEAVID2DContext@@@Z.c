/*
 * XREFs of ?GetD2DContext@CHwDisplayRenderTarget@@UEAAJPEAPEAVID2DContext@@@Z @ 0x18002B750
 * Callers:
 *     ?GetD2DContext@CHwDisplayRenderTarget@@WMA@EAAJPEAPEAVID2DContext@@@Z @ 0x1800C6C30 (-GetD2DContext@CHwDisplayRenderTarget@@WMA@EAAJPEAPEAVID2DContext@@@Z.c)
 * Callees:
 *     ?AddRef@CD3DDeviceLevel1@@UEAAKXZ @ 0x18001FEA0 (-AddRef@CD3DDeviceLevel1@@UEAAKXZ.c)
 *     ?GetDeviceNoRef@CHwDisplayRenderTarget@@MEBAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x18002BC20 (-GetDeviceNoRef@CHwDisplayRenderTarget@@MEBAJPEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::GetD2DContext(CHwDisplayRenderTarget *this, struct ID2DContext **a2)
{
  __int64 (__fastcall *v3)(CHwDisplayRenderTarget *__hidden, struct CD3DDeviceLevel1 **); // rax
  int DeviceNoRef; // eax
  __int64 v5; // r8
  unsigned int v6; // ebx
  int v7; // r9d
  CD3DDeviceLevel1 *v8; // rcx
  __int64 (__fastcall *v9)(CD3DDeviceLevel1 *); // rax
  CD3DDeviceLevel1 *v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(__int64 (__fastcall **)(CHwDisplayRenderTarget *__hidden, struct CD3DDeviceLevel1 **))(*(_QWORD *)this + 216LL);
  if ( v3 == CHwDisplayRenderTarget::GetDeviceNoRef )
    DeviceNoRef = CHwDisplayRenderTarget::GetDeviceNoRef(this, &v11);
  else
    DeviceNoRef = v3(this, &v11);
  v6 = DeviceNoRef;
  if ( DeviceNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DeviceNoRef, 0x4Eu);
    return v6;
  }
  v7 = -2147024809;
  if ( a2 )
  {
    v8 = v11;
    *a2 = v11;
    v9 = *(__int64 (__fastcall **)(CD3DDeviceLevel1 *))(*(_QWORD *)v8 + 8LL);
    if ( v9 == CD3DDeviceLevel1::AddRef )
    {
      CD3DDeviceLevel1::AddRef(v8);
      return 0;
    }
    ((void (__fastcall *)(CD3DDeviceLevel1 *, __int64 (__fastcall *)(CD3DDeviceLevel1 *), __int64, __int64))v9)(
      v8,
      CD3DDeviceLevel1::AddRef,
      v5,
      2147942487LL);
    v7 = 0;
  }
  v6 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x51u);
  return v6;
}
