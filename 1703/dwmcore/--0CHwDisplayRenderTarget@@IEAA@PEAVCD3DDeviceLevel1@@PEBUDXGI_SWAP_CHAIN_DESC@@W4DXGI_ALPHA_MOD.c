/*
 * XREFs of ??0CHwDisplayRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x18003AF70
 * Callers:
 *     ??0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x180070A60 (--0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_.c)
 * Callees:
 *     ??0CHwSurfaceRenderTarget@@IEAA@VDisplayId@@@Z @ 0x1800499E8 (--0CHwSurfaceRenderTarget@@IEAA@VDisplayId@@@Z.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::CHwDisplayRenderTarget(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        unsigned int a7)
{
  __int64 v8; // r11
  __int128 *v9; // r10
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1

  CHwSurfaceRenderTarget::CHwSurfaceRenderTarget(a1, a7);
  v10 = *v9;
  v11 = v9[1];
  *(_QWORD *)(v8 + 176) = &IRenderTargetDisplay::`vftable';
  *(_DWORD *)(v8 + 300) = a5;
  *(_WORD *)(v8 + 192) = 0;
  *(_QWORD *)(v8 + 216) = 0LL;
  *(_DWORD *)(v8 + 296) = 3;
  *(_DWORD *)(v8 + 304) = a6;
  *(_QWORD *)(v8 + 312) = 0LL;
  *(_QWORD *)(v8 + 184) = a2;
  *(_OWORD *)(v8 + 224) = v10;
  v12 = v9[2];
  *(_OWORD *)(v8 + 240) = v11;
  v13 = v9[3];
  *(_OWORD *)(v8 + 256) = v12;
  *(_QWORD *)&v12 = *((_QWORD *)v9 + 8);
  *(_OWORD *)(v8 + 272) = v13;
  *(_QWORD *)(v8 + 288) = v12;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 496));
  return v8;
}
