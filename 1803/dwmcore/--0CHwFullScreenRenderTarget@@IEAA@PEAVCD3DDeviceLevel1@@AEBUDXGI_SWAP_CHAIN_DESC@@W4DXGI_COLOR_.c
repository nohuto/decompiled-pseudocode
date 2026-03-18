/*
 * XREFs of ??0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x18007C9C4
 * Callers:
 *     ?Create@CHwDisplayRenderTarget@@SAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x1800C80C8 (-Create@CHwDisplayRenderTarget@@SAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializatio.c)
 *     ??0CHDRConversionRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x1801E714C (--0CHDRConversionRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR.c)
 *     ??0CHwStereoFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x1801E7214 (--0CHwStereoFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_.c)
 * Callees:
 *     ??0CHwDisplayRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x180047248 (--0CHwDisplayRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_ALPHA_MOD.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::CHwFullScreenRenderTarget(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int64 a4,
        int a5,
        unsigned int a6)
{
  __int64 result; // rax

  CHwDisplayRenderTarget::CHwDisplayRenderTarget(a1, a2, a3, a4, a4, a5, a6);
  *(_QWORD *)a1 = &CHwFullScreenRenderTarget::`vftable'{for `CBaseRenderTarget'};
  *(_QWORD *)(a1 + 160) = &CHwFullScreenRenderTarget::`vftable'{for `CMILCOMBase'};
  *(_QWORD *)(a1 + 216) = &CHwFullScreenRenderTarget::`vftable';
  *(_BYTE *)(a1 + 416) = 0;
  *(_QWORD *)(a1 + 424) = a1 + 432;
  *(_DWORD *)(a1 + 432) = 0;
  *(_QWORD *)(a1 + 496) = a1 + 504;
  *(_DWORD *)(a1 + 504) = 0;
  result = a1;
  *(_QWORD *)(a1 + 568) = 0LL;
  *(_BYTE *)(a1 + 576) = 0;
  *(_QWORD *)(a1 + 584) = 0LL;
  *(_QWORD *)(a1 + 592) = 0LL;
  return result;
}
