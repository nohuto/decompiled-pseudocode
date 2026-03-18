/*
 * XREFs of ?ResetRenderTarget@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N3@Z @ 0x18013699C
 * Callers:
 *     ?CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ @ 0x180016AA4 (-CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?ResetRenderTarget@CDesktopRenderTarget@@AEAAJPEAVCHwndRenderTarget@@@Z @ 0x1801348A4 (-ResetRenderTarget@CDesktopRenderTarget@@AEAAJPEAVCHwndRenderTarget@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x1800B7818 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x1801362D0 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
 */

__int64 CHwndRenderTarget::ResetRenderTarget(__int64 a1, __int64 a2, __int128 *a3, int a4, char a5, char a6, ...)
{
  __int128 v9; // xmm0
  __int64 result; // rax

  *(_QWORD *)(a1 + 136) = a2;
  CHwndRenderTarget::ReleaseResourcesForDisplayChange((CHwndRenderTarget *)(a1 + 64));
  ReleaseInterface<CDisplay>((__int64 *)(a1 + 112));
  v9 = *a3;
  *(_BYTE *)(a1 + 800) = a5;
  *(_DWORD *)(a1 + 372) = a4;
  *(_BYTE *)(a1 + 809) = a6;
  result = 0LL;
  *(_DWORD *)(a1 + 392) = a4 & 0xFFFEFFFF;
  *(_OWORD *)(a1 + 396) = v9;
  return result;
}
