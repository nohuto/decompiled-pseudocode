/*
 * XREFs of ?PresentSwapChain@CD3DDeviceLevel1@@QEAAJPEAUIDXGISwapChain1@@IIAEBUDXGI_PRESENT_PARAMETERS@@@Z @ 0x1801E0E20
 * Callers:
 *     ?Present@CHwCompSwapChainTarget@@UEAAJ_N@Z @ 0x1801E4A10 (-Present@CHwCompSwapChainTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180075194 (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x180076548 (-ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::PresentSwapChain(
        CD3DDeviceLevel1 *this,
        struct IDXGISwapChain1 *a2,
        __int64 a3,
        __int64 a4,
        const struct DXGI_PRESENT_PARAMETERS *a5)
{
  int v5; // ebx
  int v7; // eax
  unsigned int v8; // ebx

  v5 = *((_DWORD *)this + 222);
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xC6Bu);
  }
  else
  {
    v7 = ((__int64 (__fastcall *)(struct IDXGISwapChain1 *, __int64, __int64, const struct DXGI_PRESENT_PARAMETERS *))a2->lpVtbl->Present1)(
           a2,
           1LL,
           8LL,
           a5);
    v5 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xC6Fu);
  }
  v8 = CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext((__int64)this, v5, 1);
  CD3DDeviceLevel1::ProcessDeviceLost(this);
  return v8;
}
