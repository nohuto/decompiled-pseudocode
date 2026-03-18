/*
 * XREFs of ??0CHwSurfaceRenderTarget@@IEAA@VDisplayId@@@Z @ 0x1800499E8
 * Callers:
 *     ??0CHwDisplayRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x18003AF70 (--0CHwDisplayRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_ALPHA_MOD.c)
 *     ??0CHwTextureRenderTarget@@IEAA@VDisplayId@@@Z @ 0x1800498D8 (--0CHwTextureRenderTarget@@IEAA@VDisplayId@@@Z.c)
 * Callees:
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18009ADE8 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::CHwSurfaceRenderTarget(__int64 a1, int a2)
{
  float v3; // xmm2_4
  __int64 v4; // rcx
  float v5; // xmm1_4
  __int64 v6; // r9

  *(_QWORD *)(a1 + 8) = 0LL;
  v3 = g_DesktopDpiY;
  *(_QWORD *)a1 = &CBaseRenderTarget::`vftable';
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 116) = a2;
  *(_QWORD *)(a1 + 92) = 0LL;
  *(_DWORD *)(a1 + 88) = 0;
  v4 = a1 + 16;
  *(_OWORD *)v4 = _xmm;
  *(_WORD *)(v4 + 64) = 32085;
  *(_OWORD *)(v4 + 16) = _xmm;
  *(_OWORD *)(v4 + 32) = _xmm;
  *(_OWORD *)(v4 + 48) = _xmm;
  *(_QWORD *)(a1 + 128) = &CMILCOMBase::`vftable';
  v5 = g_DesktopDpiX;
  *(_DWORD *)(a1 + 136) = 0;
  *(_BYTE *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 168) = 0LL;
  CMILMatrix::Scale((CMILMatrix *)v4, v5, v3, 1.0);
  return v6;
}
