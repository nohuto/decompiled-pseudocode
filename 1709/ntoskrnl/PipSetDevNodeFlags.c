/*
 * XREFs of PipSetDevNodeFlags @ 0x140553748
 * Callers:
 *     PnpQueryID @ 0x14051A1B0 (PnpQueryID.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x14051A720 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PipCallDriverAddDevice @ 0x14051DC78 (PipCallDriverAddDevice.c)
 *     PiProcessNewDeviceNode @ 0x14052E48C (PiProcessNewDeviceNode.c)
 *     PipProcessStartPhase3 @ 0x140552400 (PipProcessStartPhase3.c)
 *     PipEnumerateCompleted @ 0x140553474 (PipEnumerateCompleted.c)
 *     PipProcessEnumeratedChildDevice @ 0x140553688 (PipProcessEnumeratedChildDevice.c)
 *     PnpProcessAssignResources @ 0x140553D98 (PnpProcessAssignResources.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x140554D44 (PiMarkDeviceTreeForReenumeration.c)
 *     PnpAllocateResources @ 0x140554F4C (PnpAllocateResources.c)
 *     PiQueryAndAllocateBootResources @ 0x140557908 (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x1405581F8 (PiQueryResourceRequirements.c)
 *     PnpBuildCmResourceLists @ 0x14055A75C (PnpBuildCmResourceLists.c)
 *     IopLegacyResourceAllocation @ 0x14055B6A0 (IopLegacyResourceAllocation.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14055CA4C (PnpProcessQueryRemoveAndEject.c)
 *     PipSetDevNodeProblem @ 0x14055DCFC (PipSetDevNodeProblem.c)
 *     IopReleaseDeviceResources @ 0x14055E154 (IopReleaseDeviceResources.c)
 *     IopInitializeDeviceInstanceKey @ 0x1405BA584 (IopInitializeDeviceInstanceKey.c)
 *     IopAllocateBootResourcesInternal @ 0x1405D1F00 (IopAllocateBootResourcesInternal.c)
 *     IoReportDetectedDevice @ 0x1405DF730 (IoReportDetectedDevice.c)
 *     PiMarkDeviceTreeForReenumerationWorker @ 0x1405E0A80 (PiMarkDeviceTreeForReenumerationWorker.c)
 *     PiProcessResourceRequirementsChanged @ 0x1406D1B54 (PiProcessResourceRequirementsChanged.c)
 *     PiProcessSetDeviceProblem @ 0x1406D1CAC (PiProcessSetDeviceProblem.c)
 *     PnpReallocateResources @ 0x1406D2960 (PnpReallocateResources.c)
 *     PiInitializeDevice @ 0x1406D3418 (PiInitializeDevice.c)
 *     PnpQueryRebalanceWorker @ 0x1406D49DC (PnpQueryRebalanceWorker.c)
 *     PnpQueryStopDeviceNode @ 0x1406D4B78 (PnpQueryStopDeviceNode.c)
 *     IopInitializePlugPlayServices @ 0x14083F81C (IopInitializePlugPlayServices.c)
 *     IopAllocateLegacyBootResources @ 0x140849DA0 (IopAllocateLegacyBootResources.c)
 *     PnpMarkHalDeviceNode @ 0x1408559A4 (PnpMarkHalDeviceNode.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x14052DAE4 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

char __fastcall PipSetDevNodeFlags(__int64 a1, int a2)
{
  int v2; // edi
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = *(_DWORD *)(a1 + 396);
  *(_DWORD *)(a1 + 396) = a2 | v2;
  v4 = v2 ^ (a2 | v2);
  if ( (v4 & 0x307000) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    if ( v5 )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(a1, v5, 11);
      v4 = *(_DWORD *)(a1 + 396) ^ v2;
      if ( (v4 & 0x4000) != 0 )
        LOBYTE(v4) = PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 28);
      if ( ((*(_DWORD *)(a1 + 396) ^ v2) & 0x2000) != 0 )
        LOBYTE(v4) = PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 27);
    }
  }
  return v4;
}
