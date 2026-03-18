/*
 * XREFs of PipClearDevNodeProblem @ 0x14055DF68
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1400FEF24 (PnpRemoveLockedDeviceNode.c)
 *     PiProcessClearDeviceProblem @ 0x14045069C (PiProcessClearDeviceProblem.c)
 *     PipCallDriverAddDevice @ 0x14051DC78 (PipCallDriverAddDevice.c)
 *     PiProcessNewDeviceNode @ 0x14052E48C (PiProcessNewDeviceNode.c)
 *     PnpProcessAssignResourcesWorker @ 0x140553F78 (PnpProcessAssignResourcesWorker.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14055CA4C (PnpProcessQueryRemoveAndEject.c)
 *     PiRestartRemovalRelations @ 0x14055CEE8 (PiRestartRemovalRelations.c)
 *     PiDevCfgProcessDevice @ 0x1405A0E30 (PiDevCfgProcessDevice.c)
 *     IopInitializeDeviceInstanceKey @ 0x1405BA584 (IopInitializeDeviceInstanceKey.c)
 *     IoReportDetectedDevice @ 0x1405DF730 (IoReportDetectedDevice.c)
 *     PnpDisableDevice @ 0x1405F10CC (PnpDisableDevice.c)
 *     PipAttemptDependentStart @ 0x1406BE920 (PipAttemptDependentStart.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x1406CA410 (PiProfileUpdateDeviceTreeCallback.c)
 *     PiProcessResourceRequirementsChanged @ 0x1406D1B54 (PiProcessResourceRequirementsChanged.c)
 *     PiProcessQueryRemoveNoFdo @ 0x1406D53A0 (PiProcessQueryRemoveNoFdo.c)
 * Callees:
 *     PiPnpRtlBeginOperation @ 0x140526B30 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140528D6C (PiPnpRtlEndOperation.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x14052DAE4 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14053A2B0 (SeAuditingWithTokenForSubcategory.c)
 *     PipClearDevNodeFlags @ 0x1405537C4 (PipClearDevNodeFlags.c)
 *     PnpTraceClearDevNodeProblem @ 0x14055E030 (PnpTraceClearDevNodeProblem.c)
 *     PiAuditDeviceEnableDisableAction @ 0x1406D3CD0 (PiAuditDeviceEnableDisableAction.c)
 */

void __fastcall PipClearDevNodeProblem(__int64 a1)
{
  unsigned int v2; // edi
  unsigned int v3; // ebp
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  P = 0LL;
  v2 = *(_DWORD *)(a1 + 404);
  v3 = *(_DWORD *)(a1 + 408);
  if ( (*(_DWORD *)(a1 + 396) & 0x2000) != 0 || v2 )
  {
    PiPnpRtlBeginOperation((__int64 **)&P);
    PipClearDevNodeFlags(a1, 0x2000);
    v5 = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 404) = 0;
    *(_DWORD *)(a1 + 408) = 0;
    if ( v5 )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v4, v5, 12);
      if ( *(_DWORD *)(a1 + 408) != v3 )
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 13);
      PnpTraceClearDevNodeProblem(a1 + 40, a1 + 56, v2, v3);
      if ( v2 == 22 && SeAuditingWithTokenForSubcategory(137, 0LL) )
        PiAuditDeviceEnableDisableAction(a1 + 40, 22LL, *(unsigned int *)(a1 + 404));
    }
    if ( P )
      PiPnpRtlEndOperation((PVOID **)P);
  }
}
