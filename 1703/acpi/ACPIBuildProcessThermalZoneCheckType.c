/*
 * XREFs of ACPIBuildProcessThermalZoneCheckType @ 0x1C0027DA0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0002C00 (ACPIGet.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C000D1D0 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIGetNamedChild @ 0x1C000E580 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C000F2AC (WPP_RECORDER_SF_Dqss.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0012240 (ACPIBuildCompleteMustSucceed.c)
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     FreeDataBuffs @ 0x1C0015CB0 (FreeDataBuffs.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C0028E8C (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     ACPIBuildDelayedDependencyRequest @ 0x1C0029FB4 (ACPIBuildDelayedDependencyRequest.c)
 */

__int64 __fastcall ACPIBuildProcessThermalZoneCheckType(__int64 a1)
{
  __int64 v1; // rdi
  const char *v2; // r14
  volatile signed __int32 *v4; // rbp
  __int64 v5; // rax
  const char **v6; // r15
  __int64 *v7; // rbx
  char *PoolWithTag; // rax
  _DWORD *v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // rcx
  const char *v12; // rax
  __int64 v13; // rdx
  int v15; // eax
  int v16; // r12d
  __int64 v17; // rcx
  const char *v18; // r8
  const char *v19; // rdx
  __int64 v20; // rax
  const char *v21; // rdx
  const char *v22; // rcx
  __int64 v23; // rax
  const char *v24; // rdx
  const char *v25; // rcx
  __int64 *v26; // rax
  __int64 v27; // rdx
  volatile signed __int32 *v28; // rcx
  char v29; // al
  unsigned int v30; // eax
  char v31; // al

  v1 = *(_QWORD *)(a1 + 40);
  v2 = (const char *)&unk_1C0066CD0;
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
    v15 = ACPIVerifyAndCopyFirmwareDependencies(*(_QWORD *)(v1 + 712), a1 + 80, v1 + 600);
    dword_1C00776F8 = 0;
    pszDest = 0;
    v16 = v15;
    FreeDataBuffs(a1 + 80, 1u);
    if ( v16 >= 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v1 + 952), 0x20uLL);
LABEL_24:
      *(_DWORD *)(a1 + 20) |= 0x20u;
      goto LABEL_3;
    }
    v17 = *(_QWORD *)(v1 + 8);
    v18 = (const char *)&unk_1C0066CD0;
    v19 = (const char *)&unk_1C0066CD0;
    if ( (v17 & 0x200000000000LL) != 0 )
    {
      v18 = *v6;
      if ( (v17 & 0x400000000000LL) != 0 )
        v19 = *(const char **)(v1 + 568);
    }
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      6u,
      0x4Cu,
      (__int64)&WPP_8442de81bc3731f2cffd4587785a31a7_Traceguids,
      v16,
      v1,
      v18,
      v19);
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
    v26 = AMLIGetNamedChild(*(__int64 **)(v1 + 712), 1145656671);
    v28 = *(volatile signed __int32 **)(a1 + 56);
    v4 = (volatile signed __int32 *)v26;
    if ( v26 )
    {
      *(_DWORD *)(a1 + 32) = 6;
      if ( v28 )
      {
        AMLIDereferenceHandleEx(v28, v27);
        *(_QWORD *)(a1 + 56) = 0LL;
      }
      v29 = gdwfAMLI;
      *(_QWORD *)(a1 + 56) = v4;
      dword_1C00776F8 = 0;
      pszDest = 0;
      if ( (v29 & 4) != 0 )
        _InterlockedIncrement(v4 + 2);
      v30 = ACPIGet(
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
      if ( v28 )
      {
        AMLIDereferenceHandleEx(v28, v27);
        *(_QWORD *)(a1 + 56) = 0LL;
      }
      v31 = gdwfAMLI;
      *(_QWORD *)(a1 + 56) = v7;
      dword_1C00776F8 = 0;
      pszDest = 0;
      if ( (v31 & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)v7 + 2);
      v4 = (volatile signed __int32 *)v7;
      v30 = ACPIGet(
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
    v10 = v30;
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
    v23 = *(_QWORD *)(v1 + 8);
    v24 = (const char *)&unk_1C0066CD0;
    v25 = (const char *)&unk_1C0066CD0;
    if ( (v23 & 0x200000000000LL) != 0 )
    {
      v24 = *v6;
      if ( (v23 & 0x400000000000LL) != 0 )
        v25 = *(const char **)(v1 + 568);
    }
    WPP_RECORDER_SF_Dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      6u,
      0x4Eu,
      (__int64)&WPP_8442de81bc3731f2cffd4587785a31a7_Traceguids,
      5,
      v1,
      v24,
      v25);
  }
  else
  {
    v20 = *(_QWORD *)(v1 + 8);
    v21 = (const char *)&unk_1C0066CD0;
    v22 = (const char *)&unk_1C0066CD0;
    if ( (v20 & 0x200000000000LL) != 0 )
    {
      v21 = *v6;
      if ( (v20 & 0x400000000000LL) != 0 )
        v22 = *(const char **)(v1 + 568);
    }
    WPP_RECORDER_SF_Dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      6u,
      0x4Du,
      (__int64)&WPP_8442de81bc3731f2cffd4587785a31a7_Traceguids,
      17,
      v1,
      v21,
      v22);
  }
  v10 = -1073741670;
LABEL_8:
  v11 = *(_QWORD *)(v1 + 8);
  v12 = (const char *)&unk_1C0066CD0;
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
    (__int64)&WPP_8442de81bc3731f2cffd4587785a31a7_Traceguids,
    v10,
    v1,
    v2,
    v12);
  if ( v10 == 259 )
    v10 = 0;
  else
    ACPIBuildCompleteMustSucceed((ULONG_PTR)v4, v10, 0LL, a1);
  if ( v4 )
    AMLIDereferenceHandleEx(v4, v13);
  return v10;
}
