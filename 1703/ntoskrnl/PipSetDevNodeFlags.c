/*
 * XREFs of PipSetDevNodeFlags @ 0x1404E2E9C
 * Callers:
 *     PiMarkDeviceTreeForReenumeration @ 0x140460174 (PiMarkDeviceTreeForReenumeration.c)
 *     PipProcessStartPhase3 @ 0x1404A7014 (PipProcessStartPhase3.c)
 *     PiQueryResourceRequirements @ 0x1404DA4E0 (PiQueryResourceRequirements.c)
 *     PiProcessNewDeviceNode @ 0x1404DC8A4 (PiProcessNewDeviceNode.c)
 *     PnpQueryID @ 0x1404DDC40 (PnpQueryID.c)
 *     PipEnumerateCompleted @ 0x1404DFDF8 (PipEnumerateCompleted.c)
 *     PipProcessEnumeratedChildDevice @ 0x1404E0008 (PipProcessEnumeratedChildDevice.c)
 *     PipCallDriverAddDevice @ 0x1404E1D64 (PipCallDriverAddDevice.c)
 *     IopInitializeDeviceInstanceKey @ 0x140559998 (IopInitializeDeviceInstanceKey.c)
 *     PnpProcessAssignResources @ 0x140559D58 (PnpProcessAssignResources.c)
 *     PnpAllocateResources @ 0x14055A118 (PnpAllocateResources.c)
 *     PiQueryAndAllocateBootResources @ 0x14055B814 (PiQueryAndAllocateBootResources.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14056E6B4 (PnpProcessQueryRemoveAndEject.c)
 *     PipSetDevNodeProblem @ 0x140570490 (PipSetDevNodeProblem.c)
 *     IopReleaseDeviceResources @ 0x1405705A0 (IopReleaseDeviceResources.c)
 *     PiMarkDeviceTreeForReenumerationWorker @ 0x140583320 (PiMarkDeviceTreeForReenumerationWorker.c)
 *     IopLegacyResourceAllocation @ 0x1405966EC (IopLegacyResourceAllocation.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1405AD458 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IoReportDetectedDevice @ 0x1405AFEA0 (IoReportDetectedDevice.c)
 *     PnpBuildCmResourceLists @ 0x1405B0DE4 (PnpBuildCmResourceLists.c)
 *     IopAllocateBootResourcesInternal @ 0x1405B1160 (IopAllocateBootResourcesInternal.c)
 *     PiProcessResourceRequirementsChanged @ 0x1406A6C40 (PiProcessResourceRequirementsChanged.c)
 *     PiProcessSetDeviceProblem @ 0x1406A6D98 (PiProcessSetDeviceProblem.c)
 *     PnpReallocateResources @ 0x1406A7CA0 (PnpReallocateResources.c)
 *     PiInitializeDevice @ 0x1406A8758 (PiInitializeDevice.c)
 *     PnpQueryRebalanceWorker @ 0x1406A9AF8 (PnpQueryRebalanceWorker.c)
 *     PnpQueryStopDeviceNode @ 0x1406A9C98 (PnpQueryStopDeviceNode.c)
 *     IopInitializePlugPlayServices @ 0x1407FAEC0 (IopInitializePlugPlayServices.c)
 *     IopAllocateLegacyBootResources @ 0x140819E18 (IopAllocateLegacyBootResources.c)
 *     PnpMarkHalDeviceNode @ 0x140824460 (PnpMarkHalDeviceNode.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1404DE7F4 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

__int64 __fastcall PipSetDevNodeFlags(__int64 a1, int a2)
{
  unsigned int v2; // edi
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = *(_DWORD *)(a1 + 396);
  *(_DWORD *)(a1 + 396) = a2 | v2;
  result = v2 ^ (a2 | v2);
  if ( (result & 0x307000) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    if ( v5 )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(a1, v5, 11);
      result = *(_DWORD *)(a1 + 396) ^ v2;
      if ( ((*(_WORD *)(a1 + 396) ^ (unsigned __int16)v2) & 0x4000) != 0 )
        result = PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 28);
      if ( ((*(_DWORD *)(a1 + 396) ^ v2) & 0x2000) != 0 )
        return PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 27);
    }
  }
  return result;
}
