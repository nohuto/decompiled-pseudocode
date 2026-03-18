/*
 * XREFs of ??0CHDRConversionRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x1801ADB84
 * Callers:
 *     ?Create@CHwDisplayRenderTarget@@SAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x1801AE008 (-Create@CHwDisplayRenderTarget@@SAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializatio.c)
 * Callees:
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ??0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x1801ADD14 (--0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_.c)
 */

__int64 __fastcall CHDRConversionRenderTarget::CHDRConversionRenderTarget(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6)
{
  _DWORD *v8; // rax

  CHwFullScreenRenderTarget::CHwFullScreenRenderTarget(a1, a2, a3, 1LL, a5, a6);
  *(_DWORD *)(a1 + 560) = a4;
  *(_QWORD *)(a1 + 568) = 0LL;
  *(_QWORD *)a1 = &CHDRConversionRenderTarget::`vftable'{for `CBaseRenderTarget'};
  *(_QWORD *)(a1 + 144) = &CHDRConversionRenderTarget::`vftable'{for `CMILCOMBase'};
  *(_QWORD *)(a1 + 192) = &CHDRConversionRenderTarget::`vftable';
  *(_QWORD *)(a1 + 576) = a1 + 584;
  *(_DWORD *)(a1 + 584) = 0;
  v8 = *(_DWORD **)(a1 + 576);
  *(_QWORD *)(a1 + 664) = 0LL;
  *(_BYTE *)(a1 + 960) = 0;
  *v8 = 0;
  *(_QWORD *)(a1 + 648) = 0LL;
  *(_QWORD *)(a1 + 656) = 0LL;
  memset_0((void *)(a1 + 672), 0, 0x110uLL);
  *(_QWORD *)(a1 + 944) = 0LL;
  *(_QWORD *)(a1 + 952) = 0LL;
  return a1;
}
