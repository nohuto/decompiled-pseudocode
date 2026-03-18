/*
 * XREFs of ??0CHwDisplayRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x1801ADC4C
 * Callers:
 *     ??0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x1801ADD14 (--0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_.c)
 * Callees:
 *     ??0CHwSurfaceRenderTarget@@IEAA@VDisplayId@@@Z @ 0x18008F5A8 (--0CHwSurfaceRenderTarget@@IEAA@VDisplayId@@@Z.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::CHwDisplayRenderTarget(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7)
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
  *(_QWORD *)(v8 + 192) = &IRenderTargetDisplay::`vftable';
  *(_DWORD *)(v8 + 316) = a5;
  *(_DWORD *)(v8 + 320) = a6;
  *(_WORD *)(v8 + 208) = 0;
  *(_QWORD *)(v8 + 232) = 0LL;
  *(_DWORD *)(v8 + 312) = 3;
  *(_OWORD *)(v8 + 240) = v10;
  v12 = v9[2];
  *(_OWORD *)(v8 + 256) = v11;
  v13 = v9[3];
  *(_OWORD *)(v8 + 272) = v12;
  *(_QWORD *)&v12 = *((_QWORD *)v9 + 8);
  *(_OWORD *)(v8 + 288) = v13;
  *(_QWORD *)(v8 + 304) = v12;
  *(_QWORD *)(v8 + 328) = v8 + 336;
  *(_DWORD *)(v8 + 336) = 0;
  *(_QWORD *)(v8 + 200) = a2;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 480));
  return v8;
}
