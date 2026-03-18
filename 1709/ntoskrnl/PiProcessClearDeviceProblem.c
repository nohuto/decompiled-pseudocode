/*
 * XREFs of PiProcessClearDeviceProblem @ 0x14045069C
 * Callers:
 *     PnpDeviceActionWorker @ 0x1400FF730 (PnpDeviceActionWorker.c)
 * Callees:
 *     PnpRestartDeviceNode @ 0x14045077C (PnpRestartDeviceNode.c)
 *     PipIsProblemReadonly @ 0x140450874 (PipIsProblemReadonly.c)
 *     PiPnpRtlBeginOperation @ 0x140526B30 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140528D6C (PiPnpRtlEndOperation.c)
 *     PipClearDevNodeFlags @ 0x1405537C4 (PipClearDevNodeFlags.c)
 *     PipClearDevNodeProblem @ 0x14055DF68 (PipClearDevNodeProblem.c)
 */

__int64 __fastcall PiProcessClearDeviceProblem(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  _DWORD *v3; // rdi
  int v4; // edx
  int v5; // r10d
  int v6; // r9d
  bool v8; // zf
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0;
  P = 0LL;
  v3 = *(_DWORD **)(*(_QWORD *)(v1 + 312) + 40LL);
  v4 = v3[75];
  if ( ((v4 - 769) & 0xFFFFFFEE) == 0 && v4 != 785 )
  {
    v5 = v3[99];
    if ( (v5 & 0x6000) == 0 )
      return v2;
    v6 = *(_DWORD *)(a1 + 24);
    if ( v6 == 1 && (unsigned int)PipIsProblemReadonly(v3, (unsigned int)v3[101]) )
      return (unsigned int)-1073741584;
    if ( v6 == 3 )
    {
      if ( (v5 & 0x2000) == 0 )
        return (unsigned int)-1073741808;
      v8 = v3[101] == 47;
    }
    else
    {
      if ( v6 != 25 )
      {
LABEL_8:
        PiPnpRtlBeginOperation(&P);
        PipClearDevNodeFlags(v3, 0x4000LL);
        PipClearDevNodeProblem(v3);
        if ( v3[75] != 769 )
          PnpRestartDeviceNode(v3);
        if ( P )
          PiPnpRtlEndOperation(P);
        return v2;
      }
      if ( (v5 & 0x2000) == 0 )
        return (unsigned int)-1073741808;
      v8 = v3[101] == 55;
    }
    if ( v8 )
      goto LABEL_8;
    return (unsigned int)-1073741808;
  }
  if ( (unsigned int)(v4 - 787) <= 1 )
    return (unsigned int)-1073741738;
  return v2;
}
