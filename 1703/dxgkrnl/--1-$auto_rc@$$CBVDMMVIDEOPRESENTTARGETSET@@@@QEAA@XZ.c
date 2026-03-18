/*
 * XREFs of ??1?$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ @ 0x1C0013F74
 * Callers:
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_1_ @ 0x1C00A2E80 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_1_.c)
 *     ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1C00E9A70 (-_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

unsigned __int64 __fastcall auto_rc<DMMVIDEOPRESENTTARGETSET const>::~auto_rc<DMMVIDEOPRESENTTARGETSET const>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v3; // rcx
  unsigned __int64 result; // rax

  v3 = *a1;
  if ( v3 )
    result = ReferenceCounted::Release((ReferenceCounted *)(v3 + 64), a2);
  *a1 = 0LL;
  return result;
}
