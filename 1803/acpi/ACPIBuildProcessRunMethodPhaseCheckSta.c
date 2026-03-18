/*
 * XREFs of ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C000F660
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0001D30 (ACPIGet.c)
 *     FreeDataBuffs @ 0x1C0003118 (FreeDataBuffs.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0009C70 (ACPIBuildCompleteMustSucceed.c)
 *     ACPIDeviceHasFirmwareDependencies @ 0x1C001202C (ACPIDeviceHasFirmwareDependencies.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C00121F0 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     WPP_RECORDER_SF_qss @ 0x1C0012DE0 (WPP_RECORDER_SF_qss.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 */

__int64 __fastcall ACPIBuildProcessRunMethodPhaseCheckSta(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rsi
  int v3; // ebp
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rax
  void *v8; // rdx
  void *v9; // rcx
  __int64 v10; // rdx
  int v11; // eax
  int v12; // edx
  __int64 v13; // rcx
  void *v14; // rax
  __int64 result; // rax
  __int64 v16; // r8
  __int64 v17; // r10
  __int64 v18; // rcx
  void *v19; // rax
  __int64 v20; // [rsp+38h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 40);
  v2 = &unk_1C005B1F0;
  *(_DWORD *)(a1 + 32) = 6;
  v3 = 0;
  v5 = *(_QWORD *)(v1 + 952);
  if ( (v5 & 0x20) != 0 )
  {
    if ( *(_QWORD *)(v1 + 600) && (v5 & 0x40) == 0 )
      *(_DWORD *)(a1 + 20) |= 0x20u;
  }
  else
  {
    v6 = ACPIVerifyAndCopyFirmwareDependencies(*(_QWORD *)(v1 + 712), a1 + 88, v1 + 600);
    dword_1C00677B8 = 0;
    pszDest = 0;
    v3 = v6;
    FreeDataBuffs(a1 + 88, 1u);
    if ( v3 >= 0 )
    {
      *(_DWORD *)(a1 + 20) |= 0x20u;
      _InterlockedOr64((volatile signed __int64 *)(v1 + 952), 0x20uLL);
    }
    else
    {
      v7 = *(_QWORD *)(v1 + 8);
      v8 = &unk_1C005B1F0;
      v9 = &unk_1C005B1F0;
      if ( (v7 & 0x200000000000LL) != 0 )
      {
        v8 = *(void **)(v1 + 560);
        if ( (v7 & 0x400000000000LL) != 0 )
          v9 = *(void **)(v1 + 568);
      }
      v20 = (__int64)v8;
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_Dqss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v8,
        6,
        62,
        (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
        v3,
        v1,
        v20,
        (__int64)v9);
    }
  }
  v10 = *(unsigned int *)(a1 + 84);
  if ( (v10 & 8) != 0 )
  {
    if ( (*(_DWORD *)(v1 + 952) & 0x2000LL) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v1 + 952), 0xFFFFFFFFFFFFCFFFuLL);
      LODWORD(v10) = *(_DWORD *)(a1 + 84);
    }
    else if ( (unsigned __int8)ACPIDeviceHasFirmwareDependencies(v1, v10, 0x200000000000LL) )
    {
      *(_DWORD *)(a1 + 32) = 0;
      _InterlockedOr64((volatile signed __int64 *)(v1 + 952), 0x1000uLL);
      v18 = *(_QWORD *)(v1 + 8);
      v19 = &unk_1C005B1F0;
      if ( (v18 & v16) != 0 )
      {
        v2 = *(void **)(v1 + 560);
        if ( (v18 & 0x400000000000LL) != 0 )
          v19 = *(void **)(v1 + 568);
      }
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_qss(WPP_GLOBAL_Control->DeviceExtension, v10, 6, 63, v17, v1, (__int64)v2, (__int64)v19);
      goto LABEL_19;
    }
  }
  if ( (v10 & 1) == 0 )
    goto LABEL_19;
  v11 = ACPIGet(v1, 0x4154535Fu, -1610348542, 0LL, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, a1 + 128, 0LL);
  v13 = *(_QWORD *)(v1 + 8);
  v3 = v11;
  v14 = &unk_1C005B1F0;
  if ( (v13 & 0x200000000000LL) != 0 )
  {
    v2 = *(void **)(v1 + 560);
    if ( (v13 & 0x400000000000LL) != 0 )
      v14 = *(void **)(v1 + 568);
  }
  LOBYTE(v12) = 4;
  WPP_RECORDER_SF_Dqss(
    WPP_GLOBAL_Control->DeviceExtension,
    v12,
    6,
    64,
    (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
    v3,
    v1,
    (__int64)v2,
    (__int64)v14);
  result = 259LL;
  if ( v3 != 259 )
  {
LABEL_19:
    ACPIBuildCompleteMustSucceed(0LL, v3, 0LL, a1);
    return (unsigned int)v3;
  }
  return result;
}
