/*
 * XREFs of ?ResetRenderTarget@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N3@Z @ 0x1800D79E8
 * Callers:
 *     ?CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ @ 0x180044DAC (-CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?ResetRenderTarget@CDesktopRenderTarget@@AEAAJPEAVCHwndRenderTarget@@@Z @ 0x1800D780C (-ResetRenderTarget@CDesktopRenderTarget@@AEAAJPEAVCHwndRenderTarget@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x1800C2374 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x1800D7A60 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
 */

__int64 CHwndRenderTarget::ResetRenderTarget(__int64 a1, __int64 a2, __int128 *a3, int a4, char a5, char a6, ...)
{
  __int128 v9; // xmm0
  __int64 result; // rax

  *(_QWORD *)(a1 + 192) = a2;
  CHwndRenderTarget::ReleaseResourcesForDisplayChange((CHwndRenderTarget *)(a1 + 64));
  ReleaseInterface<CDisplay>((__int64 *)(a1 + 168));
  v9 = *a3;
  *(_BYTE *)(a1 + 160) = a5;
  *(_DWORD *)(a1 + 428) = a4;
  *(_BYTE *)(a1 + 854) = a6;
  result = 0LL;
  *(_DWORD *)(a1 + 448) = a4 & 0xFFFEFFFF;
  *(_OWORD *)(a1 + 452) = v9;
  return result;
}
