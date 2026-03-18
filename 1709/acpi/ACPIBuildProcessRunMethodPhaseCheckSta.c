/*
 * XREFs of ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C001CFD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qss @ 0x1C0003CBC (WPP_RECORDER_SF_qss.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0006AC0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIGet @ 0x1C0006FE0 (ACPIGet.c)
 *     FreeDataBuffs @ 0x1C000CD00 (FreeDataBuffs.c)
 *     ACPIBuildCompleteCommon @ 0x1C001EE88 (ACPIBuildCompleteCommon.c)
 *     ACPIDeviceHasFirmwareDependencies @ 0x1C0024ADC (ACPIDeviceHasFirmwareDependencies.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C0029B2C (ACPIVerifyAndCopyFirmwareDependencies.c)
 */

__int64 __fastcall ACPIBuildProcessRunMethodPhaseCheckSta(__int64 a1)
{
  __int64 v1; // rdi
  const char *v2; // r14
  int v3; // esi
  __int64 v5; // rax
  signed __int32 v6; // ecx
  KIRQL v7; // bl
  int v8; // edx
  int v10; // eax
  __int64 v11; // rcx
  const char *v12; // rax
  int v13; // eax
  __int64 v14; // rax
  const char *v15; // rdx
  const char *v16; // rcx
  __int64 v17; // rcx
  const char *v18; // rax

  v1 = *(_QWORD *)(a1 + 40);
  v2 = (const char *)&unk_1C0067B08;
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
    v13 = ACPIVerifyAndCopyFirmwareDependencies(*(_QWORD *)(v1 + 712), a1 + 88, v1 + 600);
    dword_1C00797B8 = 0;
    pszDest = 0;
    v3 = v13;
    FreeDataBuffs(a1 + 88, 1u);
    if ( v3 < 0 )
    {
      v14 = *(_QWORD *)(v1 + 8);
      v15 = (const char *)&unk_1C0067B08;
      v16 = (const char *)&unk_1C0067B08;
      if ( (v14 & 0x200000000000LL) != 0 )
      {
        v15 = *(const char **)(v1 + 560);
        if ( (v14 & 0x400000000000LL) != 0 )
          v16 = *(const char **)(v1 + 568);
      }
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        6u,
        0x3Eu,
        (__int64)&WPP_cc96da84b6703e4a1deab6145401189a_Traceguids,
        v3,
        v1,
        v15,
        v16);
    }
    else
    {
      *(_DWORD *)(a1 + 20) |= 0x20u;
      _InterlockedOr64((volatile signed __int64 *)(v1 + 952), 0x20uLL);
    }
  }
  if ( (*(_DWORD *)(a1 + 84) & 8) != 0 )
  {
    if ( (*(_DWORD *)(v1 + 952) & 0x2000LL) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v1 + 952), 0xFFFFFFFFFFFFCFFFuLL);
    }
    else if ( (unsigned __int8)ACPIDeviceHasFirmwareDependencies(v1) )
    {
      *(_DWORD *)(a1 + 32) = 0;
      _InterlockedOr64((volatile signed __int64 *)(v1 + 952), 0x1000uLL);
      v17 = *(_QWORD *)(v1 + 8);
      v18 = (const char *)&unk_1C0067B08;
      if ( (v17 & 0x200000000000LL) != 0 )
      {
        v2 = *(const char **)(v1 + 560);
        if ( (v17 & 0x400000000000LL) != 0 )
          v18 = *(const char **)(v1 + 568);
      }
      WPP_RECORDER_SF_qss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        6u,
        0x3Fu,
        (__int64)&WPP_cc96da84b6703e4a1deab6145401189a_Traceguids,
        v1,
        v2,
        v18);
      goto LABEL_5;
    }
  }
  if ( (*(_DWORD *)(a1 + 84) & 1) != 0 )
  {
    v10 = ACPIGet(
            (__int64 *)v1,
            1096045407,
            -1610348542,
            0LL,
            0,
            (__int64)ACPIBuildCompleteMustSucceed,
            a1,
            a1 + 128,
            0LL);
    v11 = *(_QWORD *)(v1 + 8);
    v3 = v10;
    v12 = (const char *)&unk_1C0067B08;
    if ( (v11 & 0x200000000000LL) != 0 )
    {
      v2 = *(const char **)(v1 + 560);
      if ( (v11 & 0x400000000000LL) != 0 )
        v12 = *(const char **)(v1 + 568);
    }
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x40u,
      (__int64)&WPP_cc96da84b6703e4a1deab6145401189a_Traceguids,
      v3,
      v1,
      v2,
      v12);
    if ( v3 == 259 )
      return 259LL;
  }
LABEL_5:
  v6 = *(_DWORD *)(a1 + 32);
  if ( v3 == -1073741738 )
  {
    *(_DWORD *)(a1 + 48) = -1073741738;
    ACPIBuildCompleteCommon(a1 + 24, 2LL);
  }
  else
  {
    if ( v3 < 0 )
    {
      *(_DWORD *)(a1 + 48) = v3;
      KeBugCheckEx(0xA5u, 3uLL, 0LL, v3, 0LL);
    }
    *(_DWORD *)(a1 + 32) = 2;
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), v6, 1);
    v7 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
    v8 = AcpiBuildDpcFlags | 2;
    AcpiBuildDpcFlags = v8;
    if ( (v8 & 1) == 0 )
    {
      AcpiBuildDpcFlags = v8 | 1;
      KeInsertQueueDpc(&AcpiBuildDpc, 0LL, 0LL);
    }
    KeReleaseSpinLock(&AcpiBuildQueueLock, v7);
  }
  return (unsigned int)v3;
}
