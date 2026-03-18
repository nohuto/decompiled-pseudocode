/*
 * XREFs of ?IsPrimaryMonitor@CHwndRenderTarget@@UEBA_NXZ @ 0x180017400
 * Callers:
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180014230 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x180014D80 (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ?HasPrimary@CDesktopRenderTarget@@UEAA_NXZ @ 0x1800162B0 (-HasPrimary@CDesktopRenderTarget@@UEAA_NXZ.c)
 *     ?GetVBlankEvent@CHwndRenderTarget@@UEAAJPEAPEAX@Z @ 0x180018320 (-GetVBlankEvent@CHwndRenderTarget@@UEAAJPEAPEAX@Z.c)
 *     ?SetSyncRefreshCountWaitTarget@CHwndRenderTarget@@UEAAJI@Z @ 0x1800183E0 (-SetSyncRefreshCountWaitTarget@CHwndRenderTarget@@UEAAJI@Z.c)
 *     ?SetSyncRefreshCountWaitTargetInternal@CHwndRenderTarget@@IEBAJI_N@Z @ 0x180018490 (-SetSyncRefreshCountWaitTargetInternal@CHwndRenderTarget@@IEBAJI_N@Z.c)
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180019700 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?GetPrimaryRenderTargetNoRef@CRenderTargetManager@@AEBAPEAVCRenderTarget@@XZ @ 0x18001B1B4 (-GetPrimaryRenderTargetNoRef@CRenderTargetManager@@AEBAPEAVCRenderTarget@@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CHwndRenderTarget::IsPrimaryMonitor(CHwndRenderTarget *this)
{
  __int64 v2; // rax
  bool result; // al

  result = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)this + 200LL))(this)
    && !(*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)this + 192LL))(this) )
  {
    v2 = *((_QWORD *)this + 14);
    if ( *(_BYTE *)(v2 + 304) )
    {
      if ( *(_BYTE *)(v2 + 305) )
        return 1;
    }
  }
  return result;
}
