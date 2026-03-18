/*
 * XREFs of ??0CHwStereoFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x1801ADD98
 * Callers:
 *     ?Create@CHwDisplayRenderTarget@@SAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x1801AE008 (-Create@CHwDisplayRenderTarget@@SAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializatio.c)
 * Callees:
 *     ??0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x1801ADD14 (--0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_.c)
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::CHwStereoFullScreenRenderTarget(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6)
{
  CHwFullScreenRenderTarget::CHwFullScreenRenderTarget(a1, a2, a3, a4, a5, a6);
  *(_QWORD *)a1 = &CHwStereoFullScreenRenderTarget::`vftable'{for `CBaseRenderTarget'};
  *(_QWORD *)(a1 + 144) = &CHwStereoFullScreenRenderTarget::`vftable'{for `CMILCOMBase'};
  *(_QWORD *)(a1 + 192) = &CHwStereoFullScreenRenderTarget::`vftable'{for `CHwFullScreenRenderTarget'};
  *(_QWORD *)(a1 + 560) = &CHwStereoFullScreenRenderTarget::`vftable'{for `IRenderTargetStereo'};
  *(_DWORD *)(a1 + 568) = 0;
  *(_QWORD *)(a1 + 576) = 0LL;
  *(_QWORD *)(a1 + 584) = 0LL;
  *(_WORD *)(a1 + 592) = 0;
  return a1;
}
