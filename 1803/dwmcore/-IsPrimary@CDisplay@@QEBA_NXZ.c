/*
 * XREFs of ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x1800B7590
 * Callers:
 *     ?ShouldTripleBuffer@CDisplay@@QEBA_NXZ @ 0x18001BC64 (-ShouldTripleBuffer@CDisplay@@QEBA_NXZ.c)
 *     ?AddHwndRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z @ 0x180044C0C (-AddHwndRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?GetDisplayInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18005A414 (-GetDisplayInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?IsPrimaryMonitor@CHwndRenderTarget@@QEBA_NXZ @ 0x180062F10 (-IsPrimaryMonitor@CHwndRenderTarget@@QEBA_NXZ.c)
 *     ?IsPrimary@CHwFullScreenRenderTarget@@UEBA_NXZ @ 0x18007BA90 (-IsPrimary@CHwFullScreenRenderTarget@@UEBA_NXZ.c)
 *     ?ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ @ 0x1800B69C4 (-ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ.c)
 *     ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x1800C6EC0 (-LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDisplay::IsPrimary(CDisplay *this)
{
  bool result; // al

  result = 0;
  if ( *((_BYTE *)this + 324) )
    return *((_BYTE *)this + 325) != 0;
  return result;
}
