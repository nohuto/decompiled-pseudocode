/*
 * XREFs of ACPIBuildDiscoverDeviceCompletion @ 0x1C000AD40
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteCommon @ 0x1C0009C00 (ACPIBuildCompleteCommon.c)
 *     WPP_RECORDER_SF_sqqDqss @ 0x1C0013598 (WPP_RECORDER_SF_sqqDqss.c)
 */

void __fastcall ACPIBuildDiscoverDeviceCompletion(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v6; // r8
  void *v7; // rax
  void *v8; // rdx
  signed __int32 v9; // edx

  v4 = *(_QWORD *)(a1 + 40);
  if ( a2 >= 0 && a3 )
  {
    *(_QWORD *)(v4 + 896) = a3;
    _InterlockedOr64((volatile signed __int64 *)(v4 + 952), 0x4000000uLL);
    v6 = *(_QWORD *)(v4 + 8);
    v7 = &unk_1C005B1F0;
    v8 = &unk_1C005B1F0;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v7 = *(void **)(v4 + 560);
      if ( (v6 & 0x400000000000LL) != 0 )
        v8 = *(void **)(v4 + 568);
    }
    WPP_RECORDER_SF_sqqDqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v8,
      v6,
      90,
      (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
      (__int64)"ACPIBuildDiscoverDeviceCompletion",
      v4,
      *(_QWORD *)(v4 + 896),
      a2,
      v4,
      (__int64)v7,
      (__int64)v8);
  }
  v9 = *(_DWORD *)(a1 + 32);
  if ( a2 < 0 )
    *(_DWORD *)(a1 + 48) = a2;
  *(_DWORD *)(a1 + 32) = 2;
  ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), v9);
}
