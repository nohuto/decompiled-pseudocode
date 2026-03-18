/*
 * XREFs of PiProcessQueryRemoveNoFdo @ 0x1406D53A0
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x14055CA4C (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PnpRestartDeviceNode @ 0x14045077C (PnpRestartDeviceNode.c)
 *     PipIsProblemReadonly @ 0x140450874 (PipIsProblemReadonly.c)
 *     PiGetTargetDeviceNode @ 0x14055CEC8 (PiGetTargetDeviceNode.c)
 *     PipSetDevNodeProblem @ 0x14055DCFC (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x14055DF68 (PipClearDevNodeProblem.c)
 */

__int64 __fastcall PiProcessQueryRemoveNoFdo(__int64 a1)
{
  _DWORD *TargetDeviceNode; // rax
  unsigned int v3; // edi
  __int64 v4; // rbx
  __int64 v5; // rcx

  TargetDeviceNode = (_DWORD *)PiGetTargetDeviceNode(a1);
  v3 = 0;
  v4 = (__int64)TargetDeviceNode;
  if ( ((TargetDeviceNode[75] - 770) & 0xFFFFFFEF) == 0 )
  {
    if ( (TargetDeviceNode[99] & 0x6000) != 0
      && !(unsigned int)PipIsProblemReadonly((__int64)TargetDeviceNode, TargetDeviceNode[101]) )
    {
      PipClearDevNodeProblem(v5);
    }
    if ( (*(_DWORD *)(v4 + 396) & 0x6000) != 0 )
    {
      if ( (*(_BYTE *)(a1 + 136) & 2) == 0 )
        return (unsigned int)-1073741811;
    }
    else if ( (*(_DWORD *)(a1 + 136) & 2) != 0 )
    {
      PipSetDevNodeProblem(v4, *(_DWORD *)(a1 + 16), 0);
    }
    else
    {
      PnpRestartDeviceNode(v4);
    }
  }
  return v3;
}
