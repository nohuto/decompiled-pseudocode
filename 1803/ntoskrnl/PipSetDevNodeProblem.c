/*
 * XREFs of PipSetDevNodeProblem @ 0x1405C7484
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x140144EC4 (PnpRemoveLockedDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1405C87FC (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpProcessAssignResources @ 0x1405CCC58 (PnpProcessAssignResources.c)
 *     PnpQueryID @ 0x1405CD96C (PnpQueryID.c)
 *     PipProcessDevNodeTree @ 0x1405CDC7C (PipProcessDevNodeTree.c)
 *     PipCallDriverAddDevice @ 0x1405CE418 (PipCallDriverAddDevice.c)
 *     PiProcessNewDeviceNode @ 0x1405D0A18 (PiProcessNewDeviceNode.c)
 *     PipProcessEnumeratedChildDevice @ 0x1405D1B3C (PipProcessEnumeratedChildDevice.c)
 *     PiDevCfgProcessDevice @ 0x1405D6D84 (PiDevCfgProcessDevice.c)
 *     IopInitializeDeviceInstanceKey @ 0x1405D9834 (IopInitializeDeviceInstanceKey.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1405F72F4 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IoReportDetectedDevice @ 0x1406482A0 (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x140653954 (PnpDriverLoadingFailed.c)
 *     PnpDisableDevice @ 0x140727528 (PnpDisableDevice.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x140731A50 (PiProfileUpdateDeviceTreeCallback.c)
 *     PiProcessSetDeviceProblem @ 0x1407397B8 (PiProcessSetDeviceProblem.c)
 *     PiInitializeDevice @ 0x14073B304 (PiInitializeDevice.c)
 *     PiProcessQueryRemoveNoFdo @ 0x14073ED10 (PiProcessQueryRemoveNoFdo.c)
 * Callees:
 *     SeAuditingWithTokenForSubcategory @ 0x1404ECCC0 (SeAuditingWithTokenForSubcategory.c)
 *     PiPnpRtlBeginOperation @ 0x1405097B4 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140509BA8 (PiPnpRtlEndOperation.c)
 *     PipSetDevNodeFlags @ 0x1405D1BFC (PipSetDevNodeFlags.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1405D2454 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PnpTraceSetDevNodeProblem @ 0x140605104 (PnpTraceSetDevNodeProblem.c)
 *     PiAuditDeviceEnableDisableAction @ 0x14073C114 (PiAuditDeviceEnableDisableAction.c)
 */

void __fastcall PipSetDevNodeProblem(__int64 a1, int a2, int a3)
{
  int v3; // edi
  unsigned int v5; // esi
  int v7; // r14d
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // r8d
  int v11; // eax
  __int64 v12; // rdi
  PVOID P; // [rsp+50h] [rbp+8h] BYREF

  P = 0LL;
  v3 = a3;
  v5 = *(_DWORD *)(a1 + 404);
  v7 = *(_DWORD *)(a1 + 408);
  if ( (*(_DWORD *)(a1 + 396) & 0x2000) == 0 || v7 != a3 || v5 != a2 )
  {
    PiPnpRtlBeginOperation((__int64 **)&P);
    PipSetDevNodeFlags(a1, 0x2000LL);
    v9 = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 404) = a2;
    *(_DWORD *)(a1 + 408) = v3;
    if ( v9 )
    {
      if ( a2 != v5 )
      {
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v8, v9, 12LL);
        v3 = *(_DWORD *)(a1 + 408);
      }
      if ( v3 != v7 )
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v8, *(_QWORD *)(a1 + 48), 13LL);
      v10 = *(_DWORD *)(a1 + 404);
      v11 = 24;
      if ( v10 == 24 && *(_DWORD *)(a1 + 300) == 788 )
      {
        v12 = a1 + 40;
      }
      else
      {
        v12 = a1 + 40;
        PnpTraceSetDevNodeProblem(a1 + 40, a1 + 56, v10, *(_DWORD *)(a1 + 408), v5, v7);
        v11 = *(_DWORD *)(a1 + 404);
      }
      if ( v11 == 22 && SeAuditingWithTokenForSubcategory(137, 0LL) )
        PiAuditDeviceEnableDisableAction(v12, v5, *(unsigned int *)(a1 + 404));
    }
    if ( P )
      PiPnpRtlEndOperation((PVOID **)P);
  }
}
