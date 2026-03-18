/*
 * XREFs of PipClearDevNodeProblem @ 0x1405C73B4
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x140144EC4 (PnpRemoveLockedDeviceNode.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1405C79A8 (PnpProcessQueryRemoveAndEject.c)
 *     PnpProcessAssignResourcesWorker @ 0x1405CCE38 (PnpProcessAssignResourcesWorker.c)
 *     PipCallDriverAddDevice @ 0x1405CE418 (PipCallDriverAddDevice.c)
 *     PiProcessNewDeviceNode @ 0x1405D0A18 (PiProcessNewDeviceNode.c)
 *     PiDevCfgProcessDevice @ 0x1405D6D84 (PiDevCfgProcessDevice.c)
 *     IopInitializeDeviceInstanceKey @ 0x1405D9834 (IopInitializeDeviceInstanceKey.c)
 *     IoReportDetectedDevice @ 0x1406482A0 (IoReportDetectedDevice.c)
 *     PiProcessClearDeviceProblem @ 0x140651D94 (PiProcessClearDeviceProblem.c)
 *     PipAttemptDependentStart @ 0x140723984 (PipAttemptDependentStart.c)
 *     PnpDisableDevice @ 0x140727528 (PnpDisableDevice.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x140731A50 (PiProfileUpdateDeviceTreeCallback.c)
 *     PiProcessResourceRequirementsChanged @ 0x140739660 (PiProcessResourceRequirementsChanged.c)
 *     PiProcessQueryRemoveNoFdo @ 0x14073ED10 (PiProcessQueryRemoveNoFdo.c)
 *     PiRestartRemovalRelations @ 0x14073EDBC (PiRestartRemovalRelations.c)
 * Callees:
 *     SeAuditingWithTokenForSubcategory @ 0x1404ECCC0 (SeAuditingWithTokenForSubcategory.c)
 *     PiPnpRtlBeginOperation @ 0x1405097B4 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140509BA8 (PiPnpRtlEndOperation.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1405D2454 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PipClearDevNodeFlags @ 0x1405D37AC (PipClearDevNodeFlags.c)
 *     PnpTraceClearDevNodeProblem @ 0x1406055C8 (PnpTraceClearDevNodeProblem.c)
 *     PiAuditDeviceEnableDisableAction @ 0x14073C114 (PiAuditDeviceEnableDisableAction.c)
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
    PipClearDevNodeFlags(a1, 0x2000LL);
    v5 = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 404) = 0;
    *(_DWORD *)(a1 + 408) = 0;
    if ( v5 )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v4, v5, 12LL);
      if ( *(_DWORD *)(a1 + 408) != v3 )
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 13LL);
      PnpTraceClearDevNodeProblem(a1 + 40, a1 + 56, v2, v3);
      if ( v2 == 22 && SeAuditingWithTokenForSubcategory(137, 0LL) )
        PiAuditDeviceEnableDisableAction(a1 + 40, 22LL, *(unsigned int *)(a1 + 404));
    }
    if ( P )
      PiPnpRtlEndOperation((PVOID **)P);
  }
}
