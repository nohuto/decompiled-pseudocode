/*
 * XREFs of PipClearDevNodeFlags @ 0x1405537C4
 * Callers:
 *     PiProcessClearDeviceProblem @ 0x14045069C (PiProcessClearDeviceProblem.c)
 *     PnpRestartDeviceNode @ 0x14045077C (PnpRestartDeviceNode.c)
 *     PiProcessNewDeviceNode @ 0x14052E48C (PiProcessNewDeviceNode.c)
 *     PipEnumerateDevice @ 0x140553034 (PipEnumerateDevice.c)
 *     PipEnumerateCompleted @ 0x140553474 (PipEnumerateCompleted.c)
 *     PnpAllocateResources @ 0x140554F4C (PnpAllocateResources.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x140557750 (PnpGetResourceRequirementsForAssignTable.c)
 *     PnpBuildCmResourceLists @ 0x14055A75C (PnpBuildCmResourceLists.c)
 *     IopReleaseResources @ 0x14055B5F8 (IopReleaseResources.c)
 *     IopRemoveLegacyDeviceNode @ 0x14055B7D0 (IopRemoveLegacyDeviceNode.c)
 *     PnpProcessRelation @ 0x14055C464 (PnpProcessRelation.c)
 *     PipClearDevNodeProblem @ 0x14055DF68 (PipClearDevNodeProblem.c)
 *     IopRemoveDevice @ 0x14055E2F8 (IopRemoveDevice.c)
 *     IopReleaseFilteredBootResources @ 0x14055ECB0 (IopReleaseFilteredBootResources.c)
 *     PiProcessReenumeration @ 0x14055EF24 (PiProcessReenumeration.c)
 *     PnpInvalidateRelationsInList @ 0x1405E42E4 (PnpInvalidateRelationsInList.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1405E9D90 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PiProcessResourceRequirementsChanged @ 0x1406D1B54 (PiProcessResourceRequirementsChanged.c)
 *     PnpReallocateResources @ 0x1406D2960 (PnpReallocateResources.c)
 *     PnpCancelStopDeviceNode @ 0x1406D4754 (PnpCancelStopDeviceNode.c)
 *     PipProcessRestartPhase1 @ 0x1406D6150 (PipProcessRestartPhase1.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x14052DAE4 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

char __fastcall PipClearDevNodeFlags(__int64 a1, int a2)
{
  int v2; // edi
  int v3; // edx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax

  v2 = *(_DWORD *)(a1 + 396);
  v3 = v2 & ~a2;
  *(_DWORD *)(a1 + 396) = v3;
  if ( ((v2 ^ v3) & 0x307000) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    if ( v5 )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(a1, v5, 11);
      v7 = *(_DWORD *)(a1 + 396) ^ v2;
      if ( (v7 & 0x4000) != 0 )
        LOBYTE(v7) = PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 28);
      if ( ((*(_DWORD *)(a1 + 396) ^ v2) & 0x2000) != 0 )
        LOBYTE(v7) = PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 27);
    }
  }
  return v7;
}
