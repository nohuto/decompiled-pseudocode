/*
 * XREFs of ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x1800B80F0
 * Callers:
 *     ?GetDisplayInfo@CIndependentRefreshRateScheduler@@AEAAXXZ @ 0x1800658F0 (-GetDisplayInfo@CIndependentRefreshRateScheduler@@AEAAXXZ.c)
 *     ?AddRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z @ 0x18006A648 (-AddRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18006E340 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?IsPrimary@CHwFullScreenRenderTarget@@UEBA_NXZ @ 0x180070090 (-IsPrimary@CHwFullScreenRenderTarget@@UEBA_NXZ.c)
 *     ?Init@CHwFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180070AE0 (-Init@CHwFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilR.c)
 *     _lambda_ca566115aef6b39caf1743d59f95867e_::operator() @ 0x1800B51E4 (_lambda_ca566115aef6b39caf1743d59f95867e_--operator().c)
 *     ?ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ @ 0x1800B7628 (-ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ.c)
 *     ?ShouldTripleBuffer@CDisplay@@QEBA_NXZ @ 0x1800B79F0 (-ShouldTripleBuffer@CDisplay@@QEBA_NXZ.c)
 *     ?WaitForVBlank@CHwndRenderTarget@@UEAAJPEAX@Z @ 0x1800CD8A0 (-WaitForVBlank@CHwndRenderTarget@@UEAAJPEAX@Z.c)
 *     ?FindPrimary@CDesktopRenderTarget@@AEAAJXZ @ 0x180147318 (-FindPrimary@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CDisplay::IsPrimary(CDisplay *this)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( *((_BYTE *)this + 294) )
    return *((_BYTE *)this + 295) != 0;
  return result;
}
