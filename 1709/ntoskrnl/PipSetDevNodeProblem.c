/*
 * XREFs of PipSetDevNodeProblem @ 0x14055DCFC
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1400FEF24 (PnpRemoveLockedDeviceNode.c)
 *     PnpQueryID @ 0x14051A1B0 (PnpQueryID.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x14051A720 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PipCallDriverAddDevice @ 0x14051DC78 (PipCallDriverAddDevice.c)
 *     PipProcessDevNodeTree @ 0x140527614 (PipProcessDevNodeTree.c)
 *     PiProcessNewDeviceNode @ 0x14052E48C (PiProcessNewDeviceNode.c)
 *     PipProcessEnumeratedChildDevice @ 0x140553688 (PipProcessEnumeratedChildDevice.c)
 *     PnpProcessAssignResources @ 0x140553D98 (PnpProcessAssignResources.c)
 *     PiDevCfgProcessDevice @ 0x1405A0E30 (PiDevCfgProcessDevice.c)
 *     IopInitializeDeviceInstanceKey @ 0x1405BA584 (IopInitializeDeviceInstanceKey.c)
 *     PnpDriverLoadingFailed @ 0x1405C8154 (PnpDriverLoadingFailed.c)
 *     IoReportDetectedDevice @ 0x1405DF730 (IoReportDetectedDevice.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1405E9D90 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpDisableDevice @ 0x1405F10CC (PnpDisableDevice.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x1406CA410 (PiProfileUpdateDeviceTreeCallback.c)
 *     PiProcessSetDeviceProblem @ 0x1406D1CAC (PiProcessSetDeviceProblem.c)
 *     PiInitializeDevice @ 0x1406D3418 (PiInitializeDevice.c)
 *     PiProcessQueryRemoveNoFdo @ 0x1406D53A0 (PiProcessQueryRemoveNoFdo.c)
 * Callees:
 *     PiPnpRtlBeginOperation @ 0x140526B30 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140528D6C (PiPnpRtlEndOperation.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x14052DAE4 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14053A2B0 (SeAuditingWithTokenForSubcategory.c)
 *     PipSetDevNodeFlags @ 0x140553748 (PipSetDevNodeFlags.c)
 *     PnpTraceSetDevNodeProblem @ 0x14055DE0C (PnpTraceSetDevNodeProblem.c)
 *     PiAuditDeviceEnableDisableAction @ 0x1406D3CD0 (PiAuditDeviceEnableDisableAction.c)
 */

void __fastcall PipSetDevNodeProblem(__int64 a1, int a2, int a3)
{
  unsigned int v5; // edi
  int v7; // ebp
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // r8d
  PVOID P; // [rsp+50h] [rbp+8h] BYREF

  P = 0LL;
  v5 = *(_DWORD *)(a1 + 404);
  v7 = *(_DWORD *)(a1 + 408);
  if ( (*(_DWORD *)(a1 + 396) & 0x2000) == 0 || v5 != a2 || v7 != a3 )
  {
    PiPnpRtlBeginOperation((__int64 **)&P);
    PipSetDevNodeFlags(a1, 0x2000);
    v9 = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 404) = a2;
    *(_DWORD *)(a1 + 408) = a3;
    if ( v9 )
    {
      if ( a2 != v5 )
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v8, v9, 12);
      if ( *(_DWORD *)(a1 + 408) != v7 )
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v8, *(_QWORD *)(a1 + 48), 13);
      v10 = *(_DWORD *)(a1 + 404);
      if ( v10 != 24 || *(_DWORD *)(a1 + 300) != 788 )
        PnpTraceSetDevNodeProblem(a1 + 40, a1 + 56, v10, *(_DWORD *)(a1 + 408), v5, v7);
      if ( *(_DWORD *)(a1 + 404) == 22 && SeAuditingWithTokenForSubcategory(137, 0LL) )
        PiAuditDeviceEnableDisableAction(a1 + 40, v5, *(unsigned int *)(a1 + 404));
    }
    if ( P )
      PiPnpRtlEndOperation((PVOID **)P);
  }
}
