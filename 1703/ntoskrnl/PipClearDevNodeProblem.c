/*
 * XREFs of PipClearDevNodeProblem @ 0x14045D5E8
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x14013220C (PnpRemoveLockedDeviceNode.c)
 *     PiProcessNewDeviceNode @ 0x1404DC8A4 (PiProcessNewDeviceNode.c)
 *     PipCallDriverAddDevice @ 0x1404E1D64 (PipCallDriverAddDevice.c)
 *     IopInitializeDeviceInstanceKey @ 0x140559998 (IopInitializeDeviceInstanceKey.c)
 *     PnpProcessAssignResourcesWorker @ 0x140559F38 (PnpProcessAssignResourcesWorker.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14056E6B4 (PnpProcessQueryRemoveAndEject.c)
 *     PiDevCfgProcessDevice @ 0x14059040C (PiDevCfgProcessDevice.c)
 *     PnpDisableDevice @ 0x14059AF18 (PnpDisableDevice.c)
 *     PiEventRestartRemovalRelations @ 0x14059B460 (PiEventRestartRemovalRelations.c)
 *     IoReportDetectedDevice @ 0x1405AFEA0 (IoReportDetectedDevice.c)
 *     PipAttemptDependentStart @ 0x140692C70 (PipAttemptDependentStart.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x14069FAF0 (PiProfileUpdateDeviceTreeCallback.c)
 *     PiProcessClearDeviceProblem @ 0x1406A6AB4 (PiProcessClearDeviceProblem.c)
 *     PiProcessResourceRequirementsChanged @ 0x1406A6C40 (PiProcessResourceRequirementsChanged.c)
 *     PiEventQueryRemoveNoFdo @ 0x1406AA2D0 (PiEventQueryRemoveNoFdo.c)
 * Callees:
 *     PiPnpRtlBeginOperation @ 0x14048823C (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140488F04 (PiPnpRtlEndOperation.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14049DB70 (SeAuditingWithTokenForSubcategory.c)
 *     PipClearDevNodeFlags @ 0x1404A770C (PipClearDevNodeFlags.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1404DE7F4 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PnpTraceClearDevNodeProblem @ 0x14059A810 (PnpTraceClearDevNodeProblem.c)
 *     PiAuditDeviceEnableDisableAction @ 0x1406A9134 (PiAuditDeviceEnableDisableAction.c)
 */

_UNKNOWN **__fastcall PipClearDevNodeProblem(__int64 a1)
{
  _UNKNOWN **result; // rax
  unsigned int v3; // edi
  unsigned int v4; // ebp
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  result = &retaddr;
  P = 0LL;
  v3 = *(_DWORD *)(a1 + 404);
  v4 = *(_DWORD *)(a1 + 408);
  if ( (*(_DWORD *)(a1 + 396) & 0x2000) != 0 || v3 )
  {
    PiPnpRtlBeginOperation(&P);
    result = (_UNKNOWN **)PipClearDevNodeFlags(a1, 0x2000LL);
    v6 = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 404) = 0;
    *(_DWORD *)(a1 + 408) = 0;
    if ( v6 )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v5, v6, 12LL);
      if ( *(_DWORD *)(a1 + 408) != v4 )
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v7, *(_QWORD *)(a1 + 48), 13LL);
      result = (_UNKNOWN **)PnpTraceClearDevNodeProblem(a1 + 40, a1 + 56, v3, v4);
      if ( v3 == 22 )
      {
        result = (_UNKNOWN **)SeAuditingWithTokenForSubcategory(137LL, 0LL);
        if ( (_BYTE)result )
          result = (_UNKNOWN **)PiAuditDeviceEnableDisableAction(a1 + 40, 22LL, *(unsigned int *)(a1 + 404));
      }
    }
    if ( P )
      return (_UNKNOWN **)PiPnpRtlEndOperation(P);
  }
  return result;
}
