/*
 * XREFs of PipSetDevNodeFlags @ 0x1405D1BFC
 * Callers:
 *     PipSetDevNodeProblem @ 0x1405C7484 (PipSetDevNodeProblem.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1405C79A8 (PnpProcessQueryRemoveAndEject.c)
 *     IopReleaseDeviceResources @ 0x1405C8A58 (IopReleaseDeviceResources.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x1405CA6C0 (PiMarkDeviceTreeForReenumeration.c)
 *     PipProcessStartPhase3 @ 0x1405CACE8 (PipProcessStartPhase3.c)
 *     PnpProcessAssignResources @ 0x1405CCC58 (PnpProcessAssignResources.c)
 *     PnpQueryID @ 0x1405CD96C (PnpQueryID.c)
 *     PipCallDriverAddDevice @ 0x1405CE418 (PipCallDriverAddDevice.c)
 *     PiProcessNewDeviceNode @ 0x1405D0A18 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x1405D1930 (PipEnumerateCompleted.c)
 *     PipProcessEnumeratedChildDevice @ 0x1405D1B3C (PipProcessEnumeratedChildDevice.c)
 *     IopInitializeDeviceInstanceKey @ 0x1405D9834 (IopInitializeDeviceInstanceKey.c)
 *     PnpAllocateResources @ 0x1405DB260 (PnpAllocateResources.c)
 *     PiQueryAndAllocateBootResources @ 0x1405DB788 (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x1405DC08C (PiQueryResourceRequirements.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1405F72F4 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PiMarkDeviceTreeForReenumerationWorker @ 0x140604AE0 (PiMarkDeviceTreeForReenumerationWorker.c)
 *     PnpBuildCmResourceLists @ 0x1406159E0 (PnpBuildCmResourceLists.c)
 *     IopAllocateBootResourcesInternal @ 0x140616020 (IopAllocateBootResourcesInternal.c)
 *     IoReportDetectedDevice @ 0x1406482A0 (IoReportDetectedDevice.c)
 *     IopLegacyResourceAllocation @ 0x140650B94 (IopLegacyResourceAllocation.c)
 *     PiProcessResourceRequirementsChanged @ 0x140739660 (PiProcessResourceRequirementsChanged.c)
 *     PiProcessSetDeviceProblem @ 0x1407397B8 (PiProcessSetDeviceProblem.c)
 *     PnpReallocateResources @ 0x14073A4F4 (PnpReallocateResources.c)
 *     PiInitializeDevice @ 0x14073B304 (PiInitializeDevice.c)
 *     PnpQueryRebalanceWorker @ 0x14073E140 (PnpQueryRebalanceWorker.c)
 *     PnpQueryStopDeviceNode @ 0x14073E2DC (PnpQueryStopDeviceNode.c)
 *     IopInitializePlugPlayServices @ 0x1408A3B0C (IopInitializePlugPlayServices.c)
 *     IopAllocateLegacyBootResources @ 0x1408BF88C (IopAllocateLegacyBootResources.c)
 *     PnpMarkHalDeviceNode @ 0x1408C7B78 (PnpMarkHalDeviceNode.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1405D2454 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

__int64 __fastcall PipSetDevNodeFlags(__int64 a1, int a2)
{
  unsigned int v2; // edi
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v2 = *(_DWORD *)(a1 + 396);
  *(_DWORD *)(a1 + 396) = a2 | v2;
  result = v2 ^ (a2 | v2);
  if ( (result & 0x307000) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    if ( v5 )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(a1, v5, 11LL);
      v6 = *(unsigned int *)(a1 + 396);
      result = v2 ^ *(_DWORD *)(a1 + 396);
      if ( (((unsigned __int16)v2 ^ *(_WORD *)(a1 + 396)) & 0x4000) != 0 )
      {
        result = PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 28LL);
        LODWORD(v6) = *(_DWORD *)(a1 + 396);
      }
      v7 = v2 ^ (unsigned int)v6;
      if ( (v7 & 0x2000) != 0 )
        return PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v7, *(_QWORD *)(a1 + 48), 27LL);
    }
  }
  return result;
}
