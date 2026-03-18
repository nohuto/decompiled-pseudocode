/*
 * XREFs of ?ResetRenderTarget@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N33@Z @ 0x1800CD7E8
 * Callers:
 *     ?CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ @ 0x18006A7E4 (-CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?ResetRenderTarget@CDesktopRenderTarget@@AEAAJPEAVCHwndRenderTarget@@@Z @ 0x1800CD73C (-ResetRenderTarget@CDesktopRenderTarget@@AEAAJPEAVCHwndRenderTarget@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x1800C75BC (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x1800CD870 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
 */

__int64 __fastcall CHwndRenderTarget::ResetRenderTarget(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        int a4,
        char a5,
        char a6,
        char a7)
{
  __int128 v10; // xmm0
  __int64 result; // rax

  *(_QWORD *)(a1 + 136) = a2;
  CHwndRenderTarget::ReleaseResourcesForDisplayChange((CHwndRenderTarget *)(a1 + 64));
  ReleaseInterface<CDisplay>((__int64 *)(a1 + 112));
  v10 = *a3;
  *(_BYTE *)(a1 + 784) = a6;
  *(_BYTE *)(a1 + 797) = a7;
  *(_DWORD *)(a1 + 372) = a4;
  *(_BYTE *)(a1 + 786) = a5;
  result = 0LL;
  *(_DWORD *)(a1 + 392) = a4 & 0xFFFEFFFF;
  *(_OWORD *)(a1 + 396) = v10;
  return result;
}
