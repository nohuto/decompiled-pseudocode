/*
 * XREFs of ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C00499D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qLqss @ 0x1C000544C (WPP_RECORDER_SF_qLqss.c)
 *     AMLIIsNamedChildPresent @ 0x1C00058A0 (AMLIIsNamedChildPresent.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0006240 (ACPIDeviceCompleteGenericPhase.c)
 *     ACPIGet @ 0x1C0006FE0 (ACPIGet.c)
 *     ACPIDockFindCorrespondingDock @ 0x1C0042104 (ACPIDockFindCorrespondingDock.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5WarmEjectSubPhase2(__int64 a1)
{
  __int64 v1; // rdi
  int v3; // ebx
  __int64 CorrespondingDock; // rax
  __int64 v5; // rdx
  const char *v6; // rax
  const char *v7; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 40);
  v3 = 0;
  *(_DWORD *)(a1 + 212) = 0;
  if ( !AMLIIsNamedChildPresent(*(__int64 **)(v1 + 712), 1262699615) )
    goto LABEL_8;
  CorrespondingDock = ACPIDockFindCorrespondingDock(v1);
  if ( !CorrespondingDock || *(_DWORD *)(CorrespondingDock + 200) != 2 )
    goto LABEL_8;
  *(_DWORD *)(CorrespondingDock + 200) = 1;
  KdDisableDebugger();
  v3 = ACPIGet((__int64 *)v1, 1262699615, 546308096, 0LL, 4, (__int64)ACPIDeviceCompleteGenericPhase, a1, 0LL, 0LL);
  KdEnableDebugger();
  v5 = *(_QWORD *)(v1 + 8);
  v6 = (const char *)&unk_1C0067B08;
  v7 = (const char *)&unk_1C0067B08;
  if ( (v5 & 0x200000000000LL) != 0 )
  {
    v6 = *(const char **)(v1 + 560);
    if ( (v5 & 0x400000000000LL) != 0 )
      v7 = *(const char **)(v1 + 568);
  }
  WPP_RECORDER_SF_qLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    0xAu,
    0x58u,
    (__int64)&WPP_865309cb09b9397d2632e54924735df7_Traceguids,
    a1,
    v3,
    v1,
    v6,
    v7);
  result = 259LL;
  if ( v3 != 259 )
  {
LABEL_8:
    ACPIDeviceCompleteGenericPhase(0LL, v3, 0LL, a1);
    return 0LL;
  }
  return result;
}
