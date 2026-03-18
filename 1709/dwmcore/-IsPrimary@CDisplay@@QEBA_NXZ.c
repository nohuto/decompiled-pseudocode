/*
 * XREFs of ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x180077F40
 * Callers:
 *     ?GetDisplayInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800111DC (-GetDisplayInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?AddRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z @ 0x180016908 (-AddRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?IsPrimary@CHwFullScreenRenderTarget@@UEBA_NXZ @ 0x18002EC20 (-IsPrimary@CHwFullScreenRenderTarget@@UEBA_NXZ.c)
 *     ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x180076FCC (-LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z.c)
 *     ?ShouldTripleBuffer@CDisplay@@QEBA_NXZ @ 0x180077D44 (-ShouldTripleBuffer@CDisplay@@QEBA_NXZ.c)
 *     ?ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ @ 0x1800989B0 (-ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ.c)
 *     ?FindPrimary@CDesktopRenderTarget@@AEAAJXZ @ 0x180133A74 (-FindPrimary@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDisplay::IsPrimary(CDisplay *this)
{
  bool result; // al

  result = 0;
  if ( *((_BYTE *)this + 304) )
    return *((_BYTE *)this + 305) != 0;
  return result;
}
