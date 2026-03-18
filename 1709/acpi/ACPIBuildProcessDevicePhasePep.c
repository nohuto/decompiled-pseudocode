/*
 * XREFs of ACPIBuildProcessDevicePhasePep @ 0x1C001EC80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C0006AC0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIBuildCompleteCommon @ 0x1C001EE88 (ACPIBuildCompleteCommon.c)
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C00222A4 (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePep(__int64 a1)
{
  __int64 v1; // rdi
  const char *v2; // rbp
  int v4; // ebx
  __int64 v5; // rcx
  const char *v6; // rax
  __int64 v7; // rdx
  __int64 v9; // rax
  const char *v10; // rdx
  const char *v11; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  v2 = (const char *)&unk_1C0067B08;
  *(_DWORD *)(a1 + 32) = 4;
  v4 = 0;
  if ( (*(_DWORD *)(v1 + 952) & 0x2000000) == 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)(v1 + 952), 0x2000000uLL);
    v4 = AcpiNotifyPlExtDiscoverDeviceAsync(*(_QWORD *)(v1 + 712), ACPIBuildDiscoverDeviceCompletion, a1);
    if ( v4 < 0 )
    {
      v9 = *(_QWORD *)(v1 + 8);
      v10 = (const char *)&unk_1C0067B08;
      v11 = (const char *)&unk_1C0067B08;
      if ( (v9 & 0x200000000000LL) != 0 )
      {
        v10 = *(const char **)(v1 + 560);
        if ( (v9 & 0x400000000000LL) != 0 )
          v11 = *(const char **)(v1 + 568);
      }
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        6u,
        0x1Du,
        (__int64)&WPP_cc96da84b6703e4a1deab6145401189a_Traceguids,
        v4,
        v1,
        v10,
        v11);
    }
  }
  v5 = *(_QWORD *)(v1 + 8);
  v6 = (const char *)&unk_1C0067B08;
  if ( (v5 & 0x200000000000LL) != 0 )
  {
    v2 = *(const char **)(v1 + 560);
    if ( (v5 & 0x400000000000LL) != 0 )
      v6 = *(const char **)(v1 + 568);
  }
  WPP_RECORDER_SF_Lqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    6u,
    0x1Eu,
    (__int64)&WPP_cc96da84b6703e4a1deab6145401189a_Traceguids,
    v4,
    v1,
    v2,
    v6);
  if ( v4 == 259 )
  {
    return 0;
  }
  else
  {
    v7 = *(unsigned int *)(a1 + 32);
    if ( v4 < 0 )
      *(_DWORD *)(a1 + 48) = v4;
    *(_DWORD *)(a1 + 32) = 2;
    ACPIBuildCompleteCommon(a1 + 24, v7);
  }
  return (unsigned int)v4;
}
