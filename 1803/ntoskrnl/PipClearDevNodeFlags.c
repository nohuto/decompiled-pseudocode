/*
 * XREFs of PipClearDevNodeFlags @ 0x1405D37AC
 * Callers:
 *     PipClearDevNodeProblem @ 0x1405C73B4 (PipClearDevNodeProblem.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1405C87FC (PnpSurpriseRemoveLockedDeviceNode.c)
 *     IopRemoveDevice @ 0x1405C8B00 (IopRemoveDevice.c)
 *     PnpInvalidateRelationsInList @ 0x1405C95F8 (PnpInvalidateRelationsInList.c)
 *     PnpProcessRelation @ 0x1405C9EB4 (PnpProcessRelation.c)
 *     PiProcessReenumeration @ 0x1405CA710 (PiProcessReenumeration.c)
 *     PiProcessNewDeviceNode @ 0x1405D0A18 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x1405D1930 (PipEnumerateCompleted.c)
 *     PipEnumerateDevice @ 0x1405D3D70 (PipEnumerateDevice.c)
 *     PnpAllocateResources @ 0x1405DB260 (PnpAllocateResources.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x1405DB5D0 (PnpGetResourceRequirementsForAssignTable.c)
 *     PnpBuildCmResourceLists @ 0x1406159E0 (PnpBuildCmResourceLists.c)
 *     IopReleaseFilteredBootResources @ 0x14062BE68 (IopReleaseFilteredBootResources.c)
 *     IopRemoveLegacyDeviceNode @ 0x140650CC4 (IopRemoveLegacyDeviceNode.c)
 *     IopReleaseResources @ 0x140650D08 (IopReleaseResources.c)
 *     PiProcessClearDeviceProblem @ 0x140651D94 (PiProcessClearDeviceProblem.c)
 *     PnpRestartDeviceNode @ 0x140651E64 (PnpRestartDeviceNode.c)
 *     PiProcessResourceRequirementsChanged @ 0x140739660 (PiProcessResourceRequirementsChanged.c)
 *     PnpReallocateResources @ 0x14073A4F4 (PnpReallocateResources.c)
 *     PnpCancelStopDeviceNode @ 0x14073DEB8 (PnpCancelStopDeviceNode.c)
 *     PipProcessRestartPhase1 @ 0x14073FE1C (PipProcessRestartPhase1.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1405D2454 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

__int64 __fastcall PipClearDevNodeFlags(__int64 a1, int a2)
{
  unsigned int v2; // edi
  int v3; // edx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // rcx

  v2 = *(_DWORD *)(a1 + 396);
  v3 = v2 & ~a2;
  *(_DWORD *)(a1 + 396) = v3;
  if ( ((v2 ^ v3) & 0x307000) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    if ( v5 )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(a1, v5, 11);
      v6 = *(unsigned int *)(a1 + 396);
      result = v2 ^ *(_DWORD *)(a1 + 396);
      if ( (((unsigned __int16)v2 ^ *(_WORD *)(a1 + 396)) & 0x4000) != 0 )
      {
        result = PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 28);
        LODWORD(v6) = *(_DWORD *)(a1 + 396);
      }
      v8 = v2 ^ (unsigned int)v6;
      if ( (v8 & 0x2000) != 0 )
        return PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v8, *(_QWORD *)(a1 + 48), 27);
    }
  }
  return result;
}
