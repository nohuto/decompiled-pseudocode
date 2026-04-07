/*
 * XREFs of ?Release@CDWMDisplaySet@@QEBAXXZ @ 0x180032E30
 * Callers:
 *     ?GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV?$DynArray@PEAUIDCompositionRenderTargetPartner@@$0A@@@PEAPEBVCDWMDisplay@@PEA_NPEAH3@Z @ 0x180017828 (-GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV-$DynArray@PEAUIDCompositionRenderTargetPa.c)
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x180017D30 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 *     ?ReleaseRenderTarget@CDesktopManager@@AEAAJXZ @ 0x18006EC5C (-ReleaseRenderTarget@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ??_GCDWMDisplaySet@@QEAAPEAXI@Z @ 0x180032DB0 (--_GCDWMDisplaySet@@QEAAPEAXI@Z.c)
 */

void __fastcall CDWMDisplaySet::Release(CDWMDisplaySet *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this, 0xFFFFFFFF) == 1 )
  {
    if ( this )
      CDWMDisplaySet::`scalar deleting destructor'(this);
  }
}
