/*
 * XREFs of ?CreateSwapChainForComposition@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC1@@PEAPEAUIDXGISwapChain1@@@Z @ 0x1801DFA14
 * Callers:
 *     ?Init@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@IIAEBUPixelFormatInfo@@@Z @ 0x1801E47A8 (-Init@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@IIAEBUPixelFormatInfo@@@Z.c)
 * Callees:
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x18001F0FC (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180075194 (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x180076548 (-ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CreateSwapChainForComposition(
        CD3DDeviceLevel1 *this,
        const struct DXGI_SWAP_CHAIN_DESC1 *a2,
        struct IDXGISwapChain1 **a3)
{
  struct CDXGIEnumeration *v3; // rdi
  int v6; // ebx
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ebx
  struct CDXGIEnumeration *v12; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0LL;
  *a3 = 0LL;
  v6 = *((_DWORD *)this + 222);
  v12 = 0LL;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x6E4u);
  }
  else
  {
    v8 = CDisplayManager::EnsureDXGIEnumeration(&g_DisplayManager, &v12);
    v6 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x6E6u);
      v3 = v12;
    }
    else
    {
      v3 = v12;
      v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct DXGI_SWAP_CHAIN_DESC1 *, _QWORD, struct IDXGISwapChain1 **))(**((_QWORD **)v12 + 2) + 192LL))(
             *((_QWORD *)v12 + 2),
             *((_QWORD *)this + 81),
             a2,
             0LL,
             a3);
      v6 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x6EBu);
    }
  }
  if ( v3 )
    (*(void (__fastcall **)(struct CDXGIEnumeration *))(*(_QWORD *)v3 + 8LL))(v3);
  v10 = CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext((__int64)this, v6, 2);
  CD3DDeviceLevel1::ProcessDeviceLost(this);
  return v10;
}
