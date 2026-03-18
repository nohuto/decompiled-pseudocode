/*
 * XREFs of ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C001ECE0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0001D30 (ACPIGet.c)
 *     ACPIDockFindCorrespondingDock @ 0x1C0008104 (ACPIDockFindCorrespondingDock.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C0015708 (WPP_RECORDER_SF_qLqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0019CA0 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIIsNamedChildPresent @ 0x1C0043DAC (AMLIIsNamedChildPresent.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5WarmEjectSubPhase2(__int64 a1)
{
  _QWORD *v1; // rdi
  int v3; // ebx
  __int64 CorrespondingDock; // rax
  __int64 v5; // rdx
  const char *v6; // rax
  const char *v7; // rcx
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 40);
  v3 = 0;
  *(_DWORD *)(a1 + 212) = 0;
  if ( !(unsigned __int8)AMLIIsNamedChildPresent(v1[89], 1262699615LL) )
    goto LABEL_8;
  CorrespondingDock = ACPIDockFindCorrespondingDock((__int64)v1);
  if ( !CorrespondingDock || *(_DWORD *)(CorrespondingDock + 200) != 2 )
    goto LABEL_8;
  *(_DWORD *)(CorrespondingDock + 200) = 1;
  KdDisableDebugger();
  v3 = ACPIGet((__int64)v1, 0x4B43445Fu, 546308096, 0LL, 4, (__int64)ACPIDeviceCompleteGenericPhase, a1, 0LL, 0LL);
  KdEnableDebugger();
  v5 = v1[1];
  v6 = (const char *)&unk_1C005B1F0;
  v7 = (const char *)&unk_1C005B1F0;
  if ( (v5 & 0x200000000000LL) != 0 )
  {
    v6 = (const char *)v1[70];
    if ( (v5 & 0x400000000000LL) != 0 )
      v7 = (const char *)v1[71];
  }
  WPP_RECORDER_SF_qLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    0xAu,
    0x58u,
    (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
    a1,
    v3,
    (char)v1,
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
