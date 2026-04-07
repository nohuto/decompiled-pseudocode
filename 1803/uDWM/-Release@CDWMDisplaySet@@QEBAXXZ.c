/*
 * XREFs of ?Release@CDWMDisplaySet@@QEBAXXZ @ 0x1800342A0
 * Callers:
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x180025258 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x180049FF4 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV?$DynArray@PEAUIDCompositionRenderTargetPartner@@$0A@@@PEAPEBVCDWMDisplay@@PEA_N2PEAH3@Z @ 0x18004A868 (-GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV-$DynArray@PEAUIDCompositionRenderTargetPa.c)
 *     ?ReleaseDesktopRenderTarget@CDesktopManager@@AEAAXXZ @ 0x18004AF84 (-ReleaseDesktopRenderTarget@CDesktopManager@@AEAAXXZ.c)
 * Callees:
 *     ??_GCDWMDisplaySet@@QEAAPEAXI@Z @ 0x180034218 (--_GCDWMDisplaySet@@QEAAPEAXI@Z.c)
 */

void __fastcall CDWMDisplaySet::Release(CDWMDisplaySet *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this, 0xFFFFFFFF) == 1 )
  {
    if ( this )
      CDWMDisplaySet::`scalar deleting destructor'(this);
  }
}
