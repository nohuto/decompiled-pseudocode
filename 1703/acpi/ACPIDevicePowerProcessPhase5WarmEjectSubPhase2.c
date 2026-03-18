/*
 * XREFs of ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C004A5F0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0002C00 (ACPIGet.c)
 *     AMLIIsNamedChildPresent @ 0x1C000A900 (AMLIIsNamedChildPresent.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C000BD60 (ACPIDeviceCompleteGenericPhase.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C000DCF4 (WPP_RECORDER_SF_qLqss.c)
 *     ACPIDockFindCorrespondingDock @ 0x1C0042598 (ACPIDockFindCorrespondingDock.c)
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
  v6 = byte_1C0066CD0;
  v7 = byte_1C0066CD0;
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
    0x57u,
    (__int64)&WPP_32a24c5e9860357aa59cb74721ebb774_Traceguids,
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
