/*
 * XREFs of _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1405D2454
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x140144EC4 (PnpRemoveLockedDeviceNode.c)
 *     PipRestoreDevNodeState @ 0x140145284 (PipRestoreDevNodeState.c)
 *     PipSetDevNodeState @ 0x140146914 (PipSetDevNodeState.c)
 *     PipClearDevNodeProblem @ 0x1405C73B4 (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x1405C7484 (PipSetDevNodeProblem.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1405C9074 (PnpUnlinkDeviceRemovalRelations.c)
 *     PipProcessStartPhase3 @ 0x1405CACE8 (PipProcessStartPhase3.c)
 *     PipCallDriverAddDevice @ 0x1405CE418 (PipCallDriverAddDevice.c)
 *     PiProcessNewDeviceNode @ 0x1405D0A18 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x1405D1930 (PipEnumerateCompleted.c)
 *     PipSetDevNodeFlags @ 0x1405D1BFC (PipSetDevNodeFlags.c)
 *     PipClearDevNodeFlags @ 0x1405D37AC (PipClearDevNodeFlags.c)
 *     PipClearDevNodeUserFlags @ 0x1405D48DC (PipClearDevNodeUserFlags.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x140603978 (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     PipSetDevNodeUserFlags @ 0x14060509C (PipSetDevNodeUserFlags.c)
 *     IopIncDisableableDepends @ 0x14064A550 (IopIncDisableableDepends.c)
 *     IopDecDisableableDepends @ 0x140655A70 (IopDecDisableableDepends.c)
 *     PipNotifyDependenciesChanged @ 0x140723E28 (PipNotifyDependenciesChanged.c)
 *     PiInitializeDevice @ 0x14073B304 (PiInitializeDevice.c)
 * Callees:
 *     _CmRaisePropertyChangeEvent @ 0x1405CF920 (_CmRaisePropertyChangeEvent.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1405D24C8 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _CmMapPropertyKeyToRegProp @ 0x1405D3294 (_CmMapPropertyKeyToRegProp.c)
 */

__int64 __fastcall PnpRaiseNtPlugPlayDevicePropertyChangeEvent(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v6; // rsi
  int v7; // eax

  v3 = *(_QWORD *)&PiPnpRtlCtx;
  result = (unsigned int)(a3 - 1);
  if ( (unsigned int)result <= 0x1D )
  {
    v6 = qword_1402F2DC0[a3];
    v7 = CmMapPropertyKeyToRegProp(a1, v6);
    if ( v7 )
      return (__int64)CmRaisePropertyChangeEvent(v3, a2, 1u, 0LL, v7);
    else
      return PnpObjectRaisePropertyChangeEvent(v3, a2, 1, 0, 0LL, v6);
  }
  return result;
}
