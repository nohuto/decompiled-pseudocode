/*
 * XREFs of ??0CHwSurfaceRenderTarget@@IEAA@VDisplayId@@@Z @ 0x18008F5A8
 * Callers:
 *     ??0CHwTextureRenderTarget@@IEAA@VDisplayId@@@Z @ 0x1800901A0 (--0CHwTextureRenderTarget@@IEAA@VDisplayId@@@Z.c)
 *     ??0CHwDisplayRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@IVDisplayId@@@Z @ 0x1801ADC4C (--0CHwDisplayRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_ALPHA_MOD.c)
 * Callees:
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18005AFD8 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::CHwSurfaceRenderTarget(__int64 a1, int a2)
{
  float v3; // xmm2_4
  _QWORD *v4; // rax
  __int64 v5; // rcx
  float v6; // xmm1_4
  __int64 v7; // r9

  *(_QWORD *)(a1 + 8) = 0LL;
  v3 = g_DesktopDpiY;
  v4 = (_QWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 116) = a2;
  *(_QWORD *)(a1 + 92) = 0LL;
  *(_DWORD *)(a1 + 88) = 0;
  v5 = a1 + 16;
  *(_OWORD *)v5 = _xmm;
  *(_WORD *)(v5 + 64) = 32085;
  *(_OWORD *)(v5 + 16) = _xmm;
  *(_OWORD *)(v5 + 32) = _xmm;
  *(_OWORD *)(v5 + 48) = _xmm;
  v4[1] = v4;
  v6 = g_DesktopDpiX;
  *v4 = v4;
  *(_QWORD *)(a1 + 144) = &CMILCOMBase::`vftable';
  *(_DWORD *)(a1 + 152) = 0;
  *(_DWORD *)(a1 + 180) = 1065353216;
  *(_BYTE *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 184) = 0LL;
  CMILMatrix::Scale((CMILMatrix *)v5, v6, v3, 1.0);
  return v7;
}
