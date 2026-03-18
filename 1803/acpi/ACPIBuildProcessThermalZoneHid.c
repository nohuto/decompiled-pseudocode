/*
 * XREFs of ACPIBuildProcessThermalZoneHid @ 0x1C00108E0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteCommon @ 0x1C0009C00 (ACPIBuildCompleteCommon.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 */

__int64 __fastcall ACPIBuildProcessThermalZoneHid(__int64 a1)
{
  __int64 v1; // rax
  void *v3; // rdx
  char v4; // r10
  void *v5; // r8
  __int64 v6; // rcx
  signed __int32 v7; // edx
  __int64 v9; // [rsp+38h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 40);
  _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x200000000000uLL);
  *(_DWORD *)(a1 + 32) = 0;
  v3 = &unk_1C005B1F0;
  v4 = 0;
  v5 = &unk_1C005B1F0;
  if ( v1 )
  {
    v6 = *(_QWORD *)(v1 + 8);
    v4 = v1;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v3 = *(void **)(v1 + 560);
      if ( (v6 & 0x400000000000LL) != 0 )
        v5 = *(void **)(v1 + 568);
    }
  }
  v9 = (__int64)v3;
  LOBYTE(v3) = 4;
  WPP_RECORDER_SF_Dqss(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)v3,
    6,
    81,
    (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
    0,
    v4,
    v9,
    (__int64)v5);
  v7 = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 32) = 2;
  ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), v7);
  return 0LL;
}
