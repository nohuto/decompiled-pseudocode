/*
 * XREFs of ?IsPrimaryMonitor@CHwndRenderTarget@@UEBA_NXZ @ 0x18006BEE0
 * Callers:
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800676A0 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x1800687D0 (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 *     ?HasPrimary@CDesktopRenderTarget@@UEAA_NXZ @ 0x180069ED0 (-HasPrimary@CDesktopRenderTarget@@UEAA_NXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CHwndRenderTarget::IsPrimaryMonitor(CHwndRenderTarget *this)
{
  return *(_WORD *)(*((_QWORD *)this + 14) + 294LL) != 0;
}
