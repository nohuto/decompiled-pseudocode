/*
 * XREFs of ??0CHDRConversionRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x1801E714C
 * Callers:
 *     ?Create@CHwDisplayRenderTarget@@SAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x1800C80C8 (-Create@CHwDisplayRenderTarget@@SAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializatio.c)
 * Callees:
 *     ??0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x18007C9C4 (--0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 */

__int64 __fastcall CHDRConversionRenderTarget::CHDRConversionRenderTarget(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        int a4,
        int a5,
        unsigned int a6)
{
  _DWORD *v8; // rax

  CHwFullScreenRenderTarget::CHwFullScreenRenderTarget(a1, a2, a3, 1LL, a5, a6);
  *(_DWORD *)(a1 + 600) = a4;
  *(_QWORD *)(a1 + 608) = 0LL;
  *(_QWORD *)a1 = &CHDRConversionRenderTarget::`vftable'{for `CBaseRenderTarget'};
  *(_QWORD *)(a1 + 160) = &CHDRConversionRenderTarget::`vftable'{for `CMILCOMBase'};
  *(_QWORD *)(a1 + 216) = &CHDRConversionRenderTarget::`vftable';
  *(_QWORD *)(a1 + 616) = a1 + 624;
  *(_DWORD *)(a1 + 624) = 0;
  v8 = *(_DWORD **)(a1 + 616);
  *(_QWORD *)(a1 + 704) = 0LL;
  *(_BYTE *)(a1 + 1000) = 0;
  *v8 = 0;
  *(_QWORD *)(a1 + 688) = 0LL;
  *(_QWORD *)(a1 + 696) = 0LL;
  memset_0((void *)(a1 + 712), 0, 0x110uLL);
  *(_QWORD *)(a1 + 984) = 0LL;
  *(_QWORD *)(a1 + 992) = 0LL;
  return a1;
}
