/*
 * XREFs of ?GetD2DContext@CHwDisplayRenderTarget@@UEAAJPEAPEAVID2DContext@@@Z @ 0x180039C90
 * Callers:
 *     ?GetD2DContext@CHwDisplayRenderTarget@@WLA@EAAJPEAPEAVID2DContext@@@Z @ 0x1800D6420 (-GetD2DContext@CHwDisplayRenderTarget@@WLA@EAAJPEAPEAVID2DContext@@@Z.c)
 * Callees:
 *     ?GetDeviceNoRef@CHwDisplayRenderTarget@@MEBAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x18003A080 (-GetDeviceNoRef@CHwDisplayRenderTarget@@MEBAJPEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddRef@CD3DDeviceLevel1@@UEAAKXZ @ 0x180078E90 (-AddRef@CD3DDeviceLevel1@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::GetD2DContext(CHwDisplayRenderTarget *this, struct ID2DContext **a2)
{
  __int64 (__fastcall *v3)(CHwDisplayRenderTarget *__hidden, struct CD3DDeviceLevel1 **); // rax
  int DeviceNoRef; // eax
  unsigned int v5; // edi
  int v6; // ebx
  CD3DDeviceLevel1 *v7; // rcx
  unsigned int (__fastcall *v8)(CD3DDeviceLevel1 *__hidden); // rax
  struct CD3DDeviceLevel1 *v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(__int64 (__fastcall **)(CHwDisplayRenderTarget *__hidden, struct CD3DDeviceLevel1 **))(*(_QWORD *)this + 208LL);
  if ( v3 == CHwDisplayRenderTarget::GetDeviceNoRef )
    DeviceNoRef = CHwDisplayRenderTarget::GetDeviceNoRef(this, &v10);
  else
    DeviceNoRef = v3(this, &v10);
  v5 = DeviceNoRef;
  if ( DeviceNoRef < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, DeviceNoRef, 0x87u);
    return v5;
  }
  v6 = -2147024809;
  if ( a2 )
  {
    v7 = v10;
    *a2 = v10;
    v6 = 0;
    v8 = *(unsigned int (__fastcall **)(CD3DDeviceLevel1 *__hidden))(*(_QWORD *)v7 + 8LL);
    if ( v8 == CD3DDeviceLevel1::AddRef )
    {
      CD3DDeviceLevel1::AddRef(v7);
      return 0;
    }
    ((void (*)(void))v8)();
  }
  v5 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x8Au);
  return v5;
}
