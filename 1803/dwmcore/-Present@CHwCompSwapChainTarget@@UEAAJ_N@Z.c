/*
 * XREFs of ?Present@CHwCompSwapChainTarget@@UEAAJ_N@Z @ 0x1801E4A10
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?PresentSwapChain@CD3DDeviceLevel1@@QEAAJPEAUIDXGISwapChain1@@IIAEBUDXGI_PRESENT_PARAMETERS@@@Z @ 0x1801E0E20 (-PresentSwapChain@CD3DDeviceLevel1@@QEAAJPEAUIDXGISwapChain1@@IIAEBUDXGI_PRESENT_PARAMETERS@@@Z.c)
 */

__int64 __fastcall CHwCompSwapChainTarget::Present(struct IDXGISwapChain1 **this)
{
  int v2; // eax
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v5; // ebx
  int v6; // eax
  DXGI_PRESENT_PARAMETERS v8; // [rsp+30h] [rbp-28h] BYREF
  CD3DDeviceLevel1 *v9; // [rsp+60h] [rbp+8h] BYREF

  memset_0(&v8, 0, sizeof(v8));
  v2 = ((__int64 (__fastcall *)(struct IDXGISwapChain1 **, CD3DDeviceLevel1 **))(*this)[32].lpVtbl)(this, &v9);
  v5 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x96u);
  }
  else
  {
    v6 = CD3DDeviceLevel1::PresentSwapChain(v9, this[28], v3, v4, &v8);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x9Bu);
  }
  return v5;
}
