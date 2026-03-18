/*
 * XREFs of ACPIBuildProcessThermalZoneCheckType @ 0x1C0010200
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0001D30 (ACPIGet.c)
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     FreeDataBuffs @ 0x1C0003118 (FreeDataBuffs.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0009C70 (ACPIBuildCompleteMustSucceed.c)
 *     ACPIBuildDelayedDependencyRequest @ 0x1C0009CE0 (ACPIBuildDelayedDependencyRequest.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C00121F0 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 */

__int64 __fastcall ACPIBuildProcessThermalZoneCheckType(__int64 a1)
{
  __int64 v1; // rdi
  void *v2; // r14
  volatile signed __int32 *v4; // rbp
  __int64 v5; // rax
  void **v6; // r15
  int v7; // eax
  int v8; // r12d
  __int64 v9; // rcx
  void *v10; // r8
  void *v11; // rdx
  unsigned int v12; // ebx
  __int64 *v13; // rbx
  char *PoolWithTag; // rax
  __int64 v15; // rax
  void *v16; // rdx
  void *v17; // rcx
  int v18; // r9d
  int v19; // edx
  _DWORD *v20; // rax
  __int64 v21; // rax
  void *v22; // rcx
  __int64 *v23; // rax
  volatile signed __int32 *v24; // rcx
  char v25; // al
  unsigned int v26; // eax
  char v27; // al
  __int64 v28; // rcx
  void *v29; // rax
  char v31; // [rsp+28h] [rbp-50h]
  char v32; // [rsp+30h] [rbp-48h]
  __int64 v33; // [rsp+38h] [rbp-40h]
  __int64 v34; // [rsp+40h] [rbp-38h]
  __int64 v35; // [rsp+40h] [rbp-38h]

  v1 = *(_QWORD *)(a1 + 40);
  v2 = &unk_1C005B1F0;
  v4 = 0LL;
  v5 = *(_QWORD *)(v1 + 952);
  v6 = (void **)(v1 + 560);
  if ( (v5 & 0x20) != 0 )
  {
    if ( !*(_QWORD *)(v1 + 600) || (v5 & 0x40) != 0 )
      goto LABEL_11;
LABEL_10:
    *(_DWORD *)(a1 + 20) |= 0x20u;
    goto LABEL_11;
  }
  v7 = ACPIVerifyAndCopyFirmwareDependencies(*(_QWORD *)(v1 + 712), a1 + 80, v1 + 600);
  dword_1C00677B8 = 0;
  pszDest = 0;
  v8 = v7;
  FreeDataBuffs(a1 + 80, 1u);
  if ( v8 >= 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)(v1 + 952), 0x20uLL);
    goto LABEL_10;
  }
  v9 = *(_QWORD *)(v1 + 8);
  v10 = &unk_1C005B1F0;
  v11 = &unk_1C005B1F0;
  if ( (v9 & 0x200000000000LL) != 0 )
  {
    v10 = *v6;
    if ( (v9 & 0x400000000000LL) != 0 )
      v11 = *(void **)(v1 + 568);
  }
  v34 = (__int64)v11;
  LOBYTE(v11) = 2;
  WPP_RECORDER_SF_Dqss(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)v11,
    6,
    76,
    (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
    v8,
    v1,
    (__int64)v10,
    v34);
LABEL_11:
  if ( (*(_DWORD *)(a1 + 20) & 0x20) != 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x200000000000uLL);
    return (unsigned int)ACPIBuildDelayedDependencyRequest(a1, (__int64)&AcpiBuildThermalZoneList);
  }
  v13 = AMLIGetNamedChild(*(_QWORD **)(v1 + 712), 1145653343);
  if ( v13 )
  {
    v23 = AMLIGetNamedChild(*(_QWORD **)(v1 + 712), 1145656671);
    v24 = *(volatile signed __int32 **)(a1 + 56);
    v4 = (volatile signed __int32 *)v23;
    if ( v23 )
    {
      *(_DWORD *)(a1 + 32) = 6;
      if ( v24 )
      {
        AMLIDereferenceHandleEx(v24);
        *(_QWORD *)(a1 + 56) = 0LL;
      }
      v25 = gdwfAMLI;
      *(_QWORD *)(a1 + 56) = v4;
      dword_1C00677B8 = 0;
      pszDest = 0;
      if ( (v25 & 4) != 0 )
        _InterlockedIncrement(v4 + 2);
      v26 = ACPIGet(v1, 0x4449555Fu, 671613062, 0LL, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, v1 + 568, 0LL);
    }
    else
    {
      *(_DWORD *)(a1 + 32) = 7;
      if ( v24 )
      {
        AMLIDereferenceHandleEx(v24);
        *(_QWORD *)(a1 + 56) = 0LL;
      }
      v27 = gdwfAMLI;
      *(_QWORD *)(a1 + 56) = v13;
      dword_1C00677B8 = 0;
      pszDest = 0;
      if ( (v27 & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)v13 + 2);
      v4 = (volatile signed __int32 *)v13;
      v26 = ACPIGet(v1, 0x4449485Fu, 671612966, 0LL, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, v1 + 560, 0LL);
    }
    v12 = v26;
    goto LABEL_38;
  }
  _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x20000uLL);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x11uLL, 0x53706341u);
  *v6 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v15 = *(_QWORD *)(v1 + 8);
    v16 = &unk_1C005B1F0;
    v17 = &unk_1C005B1F0;
    if ( (v15 & 0x200000000000LL) != 0 )
    {
      v16 = 0LL;
      if ( (v15 & 0x400000000000LL) != 0 )
        v17 = *(void **)(v1 + 568);
    }
    v35 = (__int64)v17;
    v18 = 77;
    v33 = (__int64)v16;
    v32 = v1;
    v31 = 17;
LABEL_19:
    LOBYTE(v16) = 2;
    WPP_RECORDER_SF_Dqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v16,
      6,
      v18,
      (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
      v31,
      v32,
      v33,
      v35);
    v12 = -1073741670;
    goto LABEL_38;
  }
  strcpy(PoolWithTag, "ACPI\\ThermalZone");
  v20 = ExAllocatePoolWithTag(NonPagedPoolNx, 5uLL, 0x53706341u);
  *(_QWORD *)(v1 + 568) = v20;
  v19 = (int)v20;
  if ( !v20 )
  {
    v21 = *(_QWORD *)(v1 + 8);
    v16 = &unk_1C005B1F0;
    v22 = &unk_1C005B1F0;
    if ( (v21 & 0x200000000000LL) != 0 )
    {
      v16 = *v6;
      if ( (v21 & 0x400000000000LL) != 0 )
        v22 = *(void **)(v1 + 568);
    }
    v35 = (__int64)v22;
    v18 = 78;
    v33 = (__int64)v16;
    v32 = v1;
    v31 = 5;
    goto LABEL_19;
  }
  *v20 = *(_DWORD *)(**(_QWORD **)(v1 + 712) + 40LL);
  *(_BYTE *)(*(_QWORD *)(v1 + 568) + 4LL) = 0;
  _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x1E00000000000uLL);
  *(_DWORD *)(a1 + 32) = 0;
  v12 = 0;
LABEL_38:
  v28 = *(_QWORD *)(v1 + 8);
  v29 = &unk_1C005B1F0;
  if ( (v28 & 0x200000000000LL) != 0 )
  {
    v2 = *v6;
    v19 = 0;
    if ( (v28 & 0x400000000000LL) != 0 )
      v29 = *(void **)(v1 + 568);
  }
  LOBYTE(v19) = 4;
  WPP_RECORDER_SF_Dqss(
    WPP_GLOBAL_Control->DeviceExtension,
    v19,
    6,
    79,
    (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
    v12,
    v1,
    (__int64)v2,
    (__int64)v29);
  if ( v12 == 259 )
    v12 = 0;
  else
    ACPIBuildCompleteMustSucceed((ULONG_PTR)v4, v12, 0LL, a1);
  if ( v4 )
    AMLIDereferenceHandleEx(v4);
  return v12;
}
