/*
 * XREFs of ?GetD2DContext@CHwDisplayRenderTarget@@UEAAJPEAPEAVID2DContext@@@Z @ 0x1800462E0
 * Callers:
 *     ?GetD2DContext@CHwDisplayRenderTarget@@WNI@EAAJPEAPEAVID2DContext@@@Z @ 0x1800DE2B0 (-GetD2DContext@CHwDisplayRenderTarget@@WNI@EAAJPEAPEAVID2DContext@@@Z.c)
 * Callees:
 *     ?GetDeviceNoRef@CHwDisplayRenderTarget@@MEBAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x180046520 (-GetDeviceNoRef@CHwDisplayRenderTarget@@MEBAJPEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddRef@CD3DDeviceLevel1@@UEAAKXZ @ 0x1800765D0 (-AddRef@CD3DDeviceLevel1@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::GetD2DContext(CHwDisplayRenderTarget *this, struct ID2DContext **a2)
{
  __int64 (__fastcall *v3)(CHwDisplayRenderTarget *__hidden, struct CD3DDeviceLevel1 **); // rax
  int DeviceNoRef; // eax
  int v5; // ebx
  CD3DDeviceLevel1 *v6; // rcx
  void (*v7)(void); // rax
  struct CD3DDeviceLevel1 *v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(__int64 (__fastcall **)(CHwDisplayRenderTarget *__hidden, struct CD3DDeviceLevel1 **))(*(_QWORD *)this + 256LL);
  if ( v3 == CHwDisplayRenderTarget::GetDeviceNoRef )
    DeviceNoRef = CHwDisplayRenderTarget::GetDeviceNoRef(this, &v9);
  else
    DeviceNoRef = v3(this, &v9);
  v5 = DeviceNoRef;
  if ( DeviceNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DeviceNoRef, 0x4Eu);
  }
  else
  {
    v5 = -2147024809;
    if ( a2 )
    {
      v5 = 0;
      v6 = v9;
      *a2 = v9;
      v7 = *(void (**)(void))(*(_QWORD *)v6 + 8LL);
      if ( (char *)v7 == (char *)CD3DDeviceLevel1::AddRef )
        CD3DDeviceLevel1::AddRef(v6);
      else
        v7();
    }
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x51u);
  }
  return (unsigned int)v5;
}
