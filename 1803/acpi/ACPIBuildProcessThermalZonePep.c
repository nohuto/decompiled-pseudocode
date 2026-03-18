/*
 * XREFs of ACPIBuildProcessThermalZonePep @ 0x1C00109A0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteMustSucceed @ 0x1C0009C70 (ACPIBuildCompleteMustSucceed.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C0033984 (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 */

__int64 __fastcall ACPIBuildProcessThermalZonePep(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rsi
  int v4; // edi
  __int64 v5; // rax
  void *v6; // rdx
  void *v7; // rcx
  __int64 v8; // rcx
  void *v9; // rax

  v1 = *(_QWORD *)(a1 + 40);
  v2 = &unk_1C005B1F0;
  *(_DWORD *)(a1 + 32) = 4;
  v4 = 0;
  if ( (*(_DWORD *)(v1 + 952) & 0x2000000) == 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)(v1 + 952), 0x2000000uLL);
    v4 = AcpiNotifyPlExtDiscoverDeviceAsync(*(_QWORD *)(v1 + 712), ACPIBuildDiscoverDeviceCompletion, a1);
    if ( v4 < 0 )
    {
      v5 = *(_QWORD *)(v1 + 8);
      v6 = &unk_1C005B1F0;
      v7 = &unk_1C005B1F0;
      if ( (v5 & 0x200000000000LL) != 0 )
      {
        v6 = *(void **)(v1 + 560);
        if ( (v5 & 0x400000000000LL) != 0 )
          v7 = *(void **)(v1 + 568);
      }
      WPP_RECORDER_SF_Dqss(
        WPP_GLOBAL_Control->DeviceExtension,
        2,
        6,
        73,
        (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
        v4,
        v1,
        (__int64)v6,
        (__int64)v7);
    }
  }
  v8 = *(_QWORD *)(v1 + 8);
  v9 = &unk_1C005B1F0;
  if ( (v8 & 0x200000000000LL) != 0 )
  {
    v2 = *(void **)(v1 + 560);
    if ( (v8 & 0x400000000000LL) != 0 )
      v9 = *(void **)(v1 + 568);
  }
  WPP_RECORDER_SF_Dqss(
    WPP_GLOBAL_Control->DeviceExtension,
    4,
    6,
    74,
    (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
    v4,
    v1,
    (__int64)v2,
    (__int64)v9);
  if ( v4 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL, v4, 0LL, a1);
  return (unsigned int)v4;
}
