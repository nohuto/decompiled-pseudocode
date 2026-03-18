/*
 * XREFs of ACPIBuildProcessThermalZoneCheckType @ 0x1C0012900
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C0003B6C (WPP_RECORDER_SF_Dqss.c)
 *     AMLIGetNamedChild @ 0x1C0003F20 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0006AC0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIGet @ 0x1C0006FE0 (ACPIGet.c)
 *     FreeDataBuffs @ 0x1C000CD00 (FreeDataBuffs.c)
 *     ACPIBuildDelayedDependencyRequest @ 0x1C0012FA4 (ACPIBuildDelayedDependencyRequest.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0014D80 (ACPIBuildCompleteMustSucceed.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C0029B2C (ACPIVerifyAndCopyFirmwareDependencies.c)
 */

__int64 __fastcall ACPIBuildProcessThermalZoneCheckType(__int64 a1)
{
  __int64 v1; // rdi
  const char *v2; // r14
  ULONG_PTR v4; // rbp
  __int64 v5; // rax
  const char **v6; // r15
  __int64 *v7; // rbx
  char *PoolWithTag; // rax
  _DWORD *v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // rcx
  const char *v12; // rax
  int v14; // eax
  int v15; // r12d
  __int64 v16; // rcx
  const char *v17; // r8
  const char *v18; // rdx
  __int64 v19; // rax
  const char *v20; // rdx
  const char *v21; // rcx
  __int64 v22; // rax
  const char *v23; // rdx
  const char *v24; // rcx
  __int64 *v25; // rax
  __int64 v26; // rcx
  char v27; // al
  unsigned int v28; // eax
  char v29; // al

  v1 = *(_QWORD *)(a1 + 40);
  v2 = (const char *)&unk_1C0067B08;
  v4 = 0LL;
  v5 = *(_QWORD *)(v1 + 952);
  v6 = (const char **)(v1 + 560);
  if ( (v5 & 0x20) != 0 )
  {
    if ( *(_QWORD *)(v1 + 600) && (v5 & 0x40) == 0 )
      goto LABEL_24;
  }
  else
  {
    v14 = ACPIVerifyAndCopyFirmwareDependencies(*(_QWORD *)(v1 + 712), a1 + 80, v1 + 600);
    dword_1C00797B8 = 0;
    pszDest = 0;
    v15 = v14;
    FreeDataBuffs(a1 + 80, 1u);
    if ( v15 >= 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v1 + 952), 0x20uLL);
LABEL_24:
      *(_DWORD *)(a1 + 20) |= 0x20u;
      goto LABEL_3;
    }
    v16 = *(_QWORD *)(v1 + 8);
    v17 = (const char *)&unk_1C0067B08;
    v18 = (const char *)&unk_1C0067B08;
    if ( (v16 & 0x200000000000LL) != 0 )
    {
      v17 = *v6;
      if ( (v16 & 0x400000000000LL) != 0 )
        v18 = *(const char **)(v1 + 568);
    }
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      6u,
      0x4Cu,
      (__int64)&WPP_cc96da84b6703e4a1deab6145401189a_Traceguids,
      v15,
      v1,
      v17,
      v18);
  }
LABEL_3:
  if ( (*(_DWORD *)(a1 + 20) & 0x20) != 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x200000000000uLL);
    return (unsigned int)ACPIBuildDelayedDependencyRequest(a1, &AcpiBuildThermalZoneList);
  }
  v7 = AMLIGetNamedChild(*(__int64 **)(v1 + 712), 1145653343);
  if ( v7 )
  {
    v25 = AMLIGetNamedChild(*(__int64 **)(v1 + 712), 1145656671);
    v26 = *(_QWORD *)(a1 + 56);
    v4 = (ULONG_PTR)v25;
    if ( v25 )
    {
      *(_DWORD *)(a1 + 32) = 6;
      if ( v26 )
      {
        AMLIDereferenceHandleEx(v26);
        *(_QWORD *)(a1 + 56) = 0LL;
      }
      v27 = gdwfAMLI;
      *(_QWORD *)(a1 + 56) = v4;
      dword_1C00797B8 = 0;
      pszDest = 0;
      if ( (v27 & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      v28 = ACPIGet(
              (__int64 *)v1,
              1145656671,
              671613062,
              0LL,
              0,
              (__int64)ACPIBuildCompleteMustSucceed,
              a1,
              v1 + 568,
              0LL);
    }
    else
    {
      *(_DWORD *)(a1 + 32) = 7;
      if ( v26 )
      {
        AMLIDereferenceHandleEx(v26);
        *(_QWORD *)(a1 + 56) = 0LL;
      }
      v29 = gdwfAMLI;
      *(_QWORD *)(a1 + 56) = v7;
      dword_1C00797B8 = 0;
      pszDest = 0;
      if ( (v29 & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)v7 + 2);
      v4 = (ULONG_PTR)v7;
      v28 = ACPIGet(
              (__int64 *)v1,
              1145653343,
              671612966,
              0LL,
              0,
              (__int64)ACPIBuildCompleteMustSucceed,
              a1,
              v1 + 560,
              0LL);
    }
    v10 = v28;
    goto LABEL_8;
  }
  _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x20000uLL);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x11uLL, 0x53706341u);
  *v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    strcpy(PoolWithTag, "ACPI\\ThermalZone");
    v9 = ExAllocatePoolWithTag(NonPagedPoolNx, 5uLL, 0x53706341u);
    *(_QWORD *)(v1 + 568) = v9;
    if ( v9 )
    {
      *v9 = *(_DWORD *)(**(_QWORD **)(v1 + 712) + 40LL);
      *(_BYTE *)(*(_QWORD *)(v1 + 568) + 4LL) = 0;
      _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x1E00000000000uLL);
      *(_DWORD *)(a1 + 32) = 0;
      v10 = 0;
      goto LABEL_8;
    }
    v22 = *(_QWORD *)(v1 + 8);
    v23 = (const char *)&unk_1C0067B08;
    v24 = (const char *)&unk_1C0067B08;
    if ( (v22 & 0x200000000000LL) != 0 )
    {
      v23 = *v6;
      if ( (v22 & 0x400000000000LL) != 0 )
        v24 = *(const char **)(v1 + 568);
    }
    WPP_RECORDER_SF_Dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      6u,
      0x4Eu,
      (__int64)&WPP_cc96da84b6703e4a1deab6145401189a_Traceguids,
      5,
      v1,
      v23,
      v24);
  }
  else
  {
    v19 = *(_QWORD *)(v1 + 8);
    v20 = (const char *)&unk_1C0067B08;
    v21 = (const char *)&unk_1C0067B08;
    if ( (v19 & 0x200000000000LL) != 0 )
    {
      v20 = *v6;
      if ( (v19 & 0x400000000000LL) != 0 )
        v21 = *(const char **)(v1 + 568);
    }
    WPP_RECORDER_SF_Dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      6u,
      0x4Du,
      (__int64)&WPP_cc96da84b6703e4a1deab6145401189a_Traceguids,
      17,
      v1,
      v20,
      v21);
  }
  v10 = -1073741670;
LABEL_8:
  v11 = *(_QWORD *)(v1 + 8);
  v12 = (const char *)&unk_1C0067B08;
  if ( (v11 & 0x200000000000LL) != 0 )
  {
    v2 = *v6;
    if ( (v11 & 0x400000000000LL) != 0 )
      v12 = *(const char **)(v1 + 568);
  }
  WPP_RECORDER_SF_Lqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    6u,
    0x4Fu,
    (__int64)&WPP_cc96da84b6703e4a1deab6145401189a_Traceguids,
    v10,
    v1,
    v2,
    v12);
  if ( v10 == 259 )
    v10 = 0;
  else
    ACPIBuildCompleteMustSucceed(v4);
  if ( v4 )
    AMLIDereferenceHandleEx(v4);
  return v10;
}
