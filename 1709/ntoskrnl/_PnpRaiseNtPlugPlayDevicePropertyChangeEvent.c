/*
 * XREFs of _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x14052DAE4
 * Callers:
 *     PipSetDevNodeState @ 0x1400E0004 (PipSetDevNodeState.c)
 *     PnpRemoveLockedDeviceNode @ 0x1400FEF24 (PnpRemoveLockedDeviceNode.c)
 *     PipRestoreDevNodeState @ 0x140158A08 (PipRestoreDevNodeState.c)
 *     PipCallDriverAddDevice @ 0x14051DC78 (PipCallDriverAddDevice.c)
 *     PiProcessNewDeviceNode @ 0x14052E48C (PiProcessNewDeviceNode.c)
 *     PipProcessStartPhase3 @ 0x140552400 (PipProcessStartPhase3.c)
 *     PipClearDevNodeUserFlags @ 0x140552DC0 (PipClearDevNodeUserFlags.c)
 *     PipEnumerateCompleted @ 0x140553474 (PipEnumerateCompleted.c)
 *     PipSetDevNodeFlags @ 0x140553748 (PipSetDevNodeFlags.c)
 *     PipClearDevNodeFlags @ 0x1405537C4 (PipClearDevNodeFlags.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x14055CF88 (PnpUnlinkDeviceRemovalRelations.c)
 *     PipSetDevNodeProblem @ 0x14055DCFC (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x14055DF68 (PipClearDevNodeProblem.c)
 *     PipSetDevNodeUserFlags @ 0x14055E900 (PipSetDevNodeUserFlags.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x14055F1C4 (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     IopIncDisableableDepends @ 0x1405DEE68 (IopIncDisableableDepends.c)
 *     IopDecDisableableDepends @ 0x1405F2404 (IopDecDisableableDepends.c)
 *     PipNotifyDependenciesChanged @ 0x1406BF034 (PipNotifyDependenciesChanged.c)
 *     PiInitializeDevice @ 0x1406D3418 (PiInitializeDevice.c)
 * Callees:
 *     _PnpObjectRaisePropertyChangeEvent @ 0x14052DA0C (_PnpObjectRaisePropertyChangeEvent.c)
 *     _CmMapPropertyKeyToRegProp @ 0x14052DB58 (_CmMapPropertyKeyToRegProp.c)
 *     _CmRaisePropertyChangeEvent @ 0x140551F84 (_CmRaisePropertyChangeEvent.c)
 */

char __fastcall PnpRaiseNtPlugPlayDevicePropertyChangeEvent(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  char result; // al
  __int64 v6; // rsi
  int v7; // eax

  v3 = *(_QWORD *)&PiPnpRtlCtx;
  result = a3 - 1;
  if ( (unsigned int)(a3 - 1) <= 0x1D )
  {
    v6 = qword_1402BA6F0[a3];
    v7 = CmMapPropertyKeyToRegProp(a1, v6);
    if ( v7 )
      return CmRaisePropertyChangeEvent(v3, a2, 1, 0, v7);
    else
      return PnpObjectRaisePropertyChangeEvent(v3, a2, 1LL, 0LL, 0LL, v6);
  }
  return result;
}
