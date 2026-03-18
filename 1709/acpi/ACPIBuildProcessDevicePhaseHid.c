/*
 * XREFs of ACPIBuildProcessDevicePhaseHid @ 0x1C00140D0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0003F20 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0006AC0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIGet @ 0x1C0006FE0 (ACPIGet.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0014D80 (ACPIBuildCompleteMustSucceed.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseHid(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // r15
  unsigned int v3; // edi
  unsigned int v4; // r14d
  const char *v6; // r12
  __int64 v7; // rbp
  char **v8; // rax
  __int64 v9; // rbp
  __int64 *v10; // rax
  __int64 v11; // rdx
  const char *v12; // rax
  const char *v13; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  v2 = 0;
  v3 = 0;
  v4 = 0;
  v6 = *(const char **)(v1 + 560);
  if ( AcpiInternalDeviceFlagTable )
  {
    v7 = 0LL;
    v8 = &AcpiInternalDeviceFlagTable;
    while ( !strstr(v6, *v8) )
    {
      v8 = &(&AcpiInternalDeviceFlagTable)[4 * ++v4];
      v7 = v4;
      if ( !*v8 )
        goto LABEL_7;
    }
    v9 = 4 * v7;
    _InterlockedOr64((volatile signed __int64 *)(v1 + 8), (unsigned __int64)(&AcpiInternalDeviceFlagTable)[v9 + 1]);
    _InterlockedOr64((volatile signed __int64 *)(v1 + 952), (unsigned __int64)(&AcpiInternalDeviceFlagTable)[v9 + 2]);
    v2 = 1;
  }
LABEL_7:
  _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x200000000000uLL);
  v10 = AMLIGetNamedChild(*(__int64 **)(v1 + 712), 1145652063);
  if ( !v10 || v2 )
  {
    *(_DWORD *)(a1 + 32) = 10;
  }
  else
  {
    AMLIDereferenceHandleEx((__int64)v10);
    *(_DWORD *)(a1 + 32) = 9;
    v3 = ACPIGet((__int64 *)v1, 1145652063, 671613191, 0LL, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, a1 + 128, 0LL);
  }
  v11 = *(_QWORD *)(v1 + 8);
  v12 = (const char *)&unk_1C0067B08;
  v13 = (const char *)&unk_1C0067B08;
  if ( (v11 & 0x200000000000LL) != 0 )
  {
    v12 = *(const char **)(v1 + 560);
    if ( (v11 & 0x400000000000LL) != 0 )
      v13 = *(const char **)(v1 + 568);
  }
  WPP_RECORDER_SF_Lqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    6u,
    0x28u,
    (__int64)&WPP_cc96da84b6703e4a1deab6145401189a_Traceguids,
    v3,
    v1,
    v12,
    v13);
  if ( v3 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL);
  return v3;
}
