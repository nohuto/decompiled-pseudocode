/*
 * XREFs of ACPIBuildProcessThermalZonePep @ 0x1C0012AD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C0006AC0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0014D80 (ACPIBuildCompleteMustSucceed.c)
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C00222A4 (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 */

__int64 __fastcall ACPIBuildProcessThermalZonePep(__int64 a1)
{
  __int64 v1; // rbx
  const char *v2; // rsi
  int v3; // edi
  __int64 v4; // rcx
  const char *v5; // rax
  __int64 v7; // rax
  const char *v8; // rdx
  const char *v9; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  v2 = (const char *)&unk_1C0067B08;
  *(_DWORD *)(a1 + 32) = 4;
  v3 = 0;
  if ( (*(_DWORD *)(v1 + 952) & 0x2000000) == 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)(v1 + 952), 0x2000000uLL);
    v3 = AcpiNotifyPlExtDiscoverDeviceAsync(*(_QWORD *)(v1 + 712), ACPIBuildDiscoverDeviceCompletion, a1);
    if ( v3 < 0 )
    {
      v7 = *(_QWORD *)(v1 + 8);
      v8 = (const char *)&unk_1C0067B08;
      v9 = (const char *)&unk_1C0067B08;
      if ( (v7 & 0x200000000000LL) != 0 )
      {
        v8 = *(const char **)(v1 + 560);
        if ( (v7 & 0x400000000000LL) != 0 )
          v9 = *(const char **)(v1 + 568);
      }
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        6u,
        0x49u,
        (__int64)&WPP_cc96da84b6703e4a1deab6145401189a_Traceguids,
        v3,
        v1,
        v8,
        v9);
    }
  }
  v4 = *(_QWORD *)(v1 + 8);
  v5 = (const char *)&unk_1C0067B08;
  if ( (v4 & 0x200000000000LL) != 0 )
  {
    v2 = *(const char **)(v1 + 560);
    if ( (v4 & 0x400000000000LL) != 0 )
      v5 = *(const char **)(v1 + 568);
  }
  WPP_RECORDER_SF_Lqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    6u,
    0x4Au,
    (__int64)&WPP_cc96da84b6703e4a1deab6145401189a_Traceguids,
    v3,
    v1,
    v2,
    v5);
  if ( v3 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL);
  return (unsigned int)v3;
}
