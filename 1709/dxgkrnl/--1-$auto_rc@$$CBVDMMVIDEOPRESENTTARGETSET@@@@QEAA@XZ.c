/*
 * XREFs of ??1?$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ @ 0x1C0014F0C
 * Callers:
 *     ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1C00B0AB0 (-_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_1_ @ 0x1C00F6230 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_1_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall auto_rc<DMMVIDEOPRESENTTARGETSET const>::~auto_rc<DMMVIDEOPRESENTTARGETSET const>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = v2 + 64;
    v4 = _InterlockedDecrement((volatile signed __int32 *)(v3 + 8));
    if ( v4 )
    {
      if ( v4 < 0 )
      {
        v5 = WdLogNewEntry5_WdError(v3);
        *(_QWORD *)(v5 + 24) = v4;
        WdLogEvent5_WdError(v5);
      }
    }
    else if ( v3 )
    {
      (**(void (__fastcall ***)(__int64, __int64))v3)(v3, 1LL);
    }
  }
  *a1 = 0LL;
}
