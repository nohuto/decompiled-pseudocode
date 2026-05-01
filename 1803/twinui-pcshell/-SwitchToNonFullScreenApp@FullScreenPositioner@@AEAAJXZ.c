/*
 * XREFs of ?SwitchToNonFullScreenApp@FullScreenPositioner@@AEAAJXZ @ 0x1800204AC
 * Callers:
 *     ?ActiveZBandChangedForMonitor@FullScreenPositioner@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x1800204D0 (-ActiveZBandChangedForMonitor@FullScreenPositioner@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_.c)
 *     ?HideFullScreenView@FullScreenPositioner@@UEAAJXZ @ 0x18014D9D0 (-HideFullScreenView@FullScreenPositioner@@UEAAJXZ.c)
 * Callees:
 *     ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@@Z @ 0x18014DA94 (-PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@@Z.c)
 *     ?SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18014E010 (-SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall FullScreenPositioner::SwitchToNonFullScreenApp(FullScreenPositioner *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 23);
  if ( v1 )
  {
    FullScreenPositioner::PositionView(this, v1, 2LL);
    FullScreenPositioner::SetVisibleView(this, 0LL);
  }
  return 0LL;
}
