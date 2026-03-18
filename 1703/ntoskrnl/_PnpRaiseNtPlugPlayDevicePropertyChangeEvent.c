/*
 * XREFs of _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1404DE7F4
 * Callers:
 *     PipSetDevNodeState @ 0x1400810C0 (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x140131B50 (PipRestoreDevNodeState.c)
 *     PnpRemoveLockedDeviceNode @ 0x14013220C (PnpRemoveLockedDeviceNode.c)
 *     PipClearDevNodeProblem @ 0x14045D5E8 (PipClearDevNodeProblem.c)
 *     PipProcessStartPhase3 @ 0x1404A7014 (PipProcessStartPhase3.c)
 *     PipClearDevNodeFlags @ 0x1404A770C (PipClearDevNodeFlags.c)
 *     PipClearDevNodeUserFlags @ 0x1404A7AF4 (PipClearDevNodeUserFlags.c)
 *     PiProcessNewDeviceNode @ 0x1404DC8A4 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x1404DFDF8 (PipEnumerateCompleted.c)
 *     PipCallDriverAddDevice @ 0x1404E1D64 (PipCallDriverAddDevice.c)
 *     PipSetDevNodeFlags @ 0x1404E2E9C (PipSetDevNodeFlags.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x14056FB58 (PnpUnlinkDeviceRemovalRelations.c)
 *     PipSetDevNodeProblem @ 0x140570490 (PipSetDevNodeProblem.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x1405C2994 (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     IopIncDisableableDepends @ 0x1405CB9FC (IopIncDisableableDepends.c)
 *     PipSetDevNodeUserFlags @ 0x1405CC2B8 (PipSetDevNodeUserFlags.c)
 *     IopDecDisableableDepends @ 0x1405D5EC8 (IopDecDisableableDepends.c)
 *     PipNotifyDependenciesChanged @ 0x140693390 (PipNotifyDependenciesChanged.c)
 *     PiInitializeDevice @ 0x1406A8758 (PiInitializeDevice.c)
 * Callees:
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1404DE868 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _CmMapPropertyKeyToRegProp @ 0x1404DF610 (_CmMapPropertyKeyToRegProp.c)
 *     _CmRaisePropertyChangeEvent @ 0x1405C220C (_CmRaisePropertyChangeEvent.c)
 */

__int64 __fastcall PnpRaiseNtPlugPlayDevicePropertyChangeEvent(__int64 a1, int a2, int a3)
{
  int v3; // edi
  __int64 result; // rax
  __int64 v6; // rsi
  int v7; // eax

  v3 = PiPnpRtlCtx;
  result = (unsigned int)(a3 - 1);
  if ( (unsigned int)result <= 0x1D )
  {
    v6 = qword_14028D490[a3];
    v7 = CmMapPropertyKeyToRegProp(a1, v6);
    if ( v7 )
      return CmRaisePropertyChangeEvent(v3, a2, 1, 0, v7);
    else
      return PnpObjectRaisePropertyChangeEvent(v3, a2, 1, 0, 0LL, v6);
  }
  return result;
}
