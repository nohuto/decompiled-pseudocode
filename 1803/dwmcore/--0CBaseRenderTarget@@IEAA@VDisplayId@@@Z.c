/*
 * XREFs of ??0CBaseRenderTarget@@IEAA@VDisplayId@@@Z @ 0x1800C2924
 * Callers:
 *     ??0CHwSurfaceRenderTarget@@IEAA@VDisplayId@@@Z @ 0x180078ADC (--0CHwSurfaceRenderTarget@@IEAA@VDisplayId@@@Z.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 */

__int64 __fastcall CBaseRenderTarget::CBaseRenderTarget(__int64 a1, int a2)
{
  unsigned __int64 v3; // rax

  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 116) = a2;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  v3 = std::_Allocate<std::_Default_allocate_traits<1>>(1uLL, 0x28uLL);
  *(_QWORD *)v3 = v3;
  *(_QWORD *)(v3 + 8) = v3;
  *(_QWORD *)(v3 + 16) = v3;
  *(_WORD *)(v3 + 24) = 257;
  *(_QWORD *)(a1 + 144) = v3;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 92) = 0;
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 84) = 0;
  *(_OWORD *)(a1 + 16) = _xmm;
  *(_WORD *)(a1 + 80) = 32085;
  *(_OWORD *)(a1 + 32) = _xmm;
  *(_OWORD *)(a1 + 48) = _xmm;
  *(_OWORD *)(a1 + 64) = _xmm;
  *(_QWORD *)(a1 + 128) = a1 + 120;
  *(_QWORD *)(a1 + 120) = a1 + 120;
  return a1;
}
