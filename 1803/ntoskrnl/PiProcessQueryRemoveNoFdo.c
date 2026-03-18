/*
 * XREFs of PiProcessQueryRemoveNoFdo @ 0x14073ED10
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1405C79A8 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PipClearDevNodeProblem @ 0x1405C73B4 (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x1405C7484 (PipSetDevNodeProblem.c)
 *     PiGetTargetDeviceNode @ 0x1405C7E50 (PiGetTargetDeviceNode.c)
 *     PnpRestartDeviceNode @ 0x140651E64 (PnpRestartDeviceNode.c)
 *     PipIsProblemReadonly @ 0x140651F48 (PipIsProblemReadonly.c)
 */

__int64 __fastcall PiProcessQueryRemoveNoFdo(__int64 a1)
{
  _DWORD *TargetDeviceNode; // rdi
  unsigned int v3; // ebx
  int v4; // r9d
  __int64 v5; // rcx
  int v6; // eax

  TargetDeviceNode = (_DWORD *)PiGetTargetDeviceNode(a1);
  v3 = 0;
  if ( ((TargetDeviceNode[75] - 770) & 0xFFFFFFEF) == 0 )
  {
    v4 = TargetDeviceNode[99];
    if ( (v4 & 0x6000) != 0 && !(unsigned int)PipIsProblemReadonly((__int64)TargetDeviceNode, TargetDeviceNode[101]) )
    {
      PipClearDevNodeProblem(v5);
      v4 = TargetDeviceNode[99];
    }
    v6 = *(_DWORD *)(a1 + 144) & 2;
    if ( (v4 & 0x6000) != 0 )
    {
      if ( !v6 )
        return (unsigned int)-1073741811;
    }
    else if ( v6 )
    {
      PipSetDevNodeProblem((__int64)TargetDeviceNode, *(_DWORD *)(a1 + 16), 0);
    }
    else
    {
      PnpRestartDeviceNode((__int64)TargetDeviceNode);
    }
  }
  return v3;
}
