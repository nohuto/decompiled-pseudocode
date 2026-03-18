/*
 * XREFs of ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C000D3D0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0002C00 (ACPIGet.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C000D1D0 (WPP_RECORDER_SF_Lqss.c)
 *     WPP_RECORDER_SF_qss @ 0x1C000F60C (WPP_RECORDER_SF_qss.c)
 *     ACPIBuildCompleteCommon @ 0x1C000FF78 (ACPIBuildCompleteCommon.c)
 *     FreeDataBuffs @ 0x1C0015CB0 (FreeDataBuffs.c)
 *     ACPIDeviceHasFirmwareDependencies @ 0x1C0022174 (ACPIDeviceHasFirmwareDependencies.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C0028E8C (ACPIVerifyAndCopyFirmwareDependencies.c)
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
  int v17; // edx
  __int64 v18; // rcx
  void *v19; // rax

  v1 = *(_QWORD *)(a1 + 40);
  v2 = (const char *)&unk_1C0066CD0;
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
    dword_1C00776F8 = 0;
    pszDest = 0;
    v3 = v13;
    FreeDataBuffs(a1 + 88, 1LL);
    if ( v3 < 0 )
    {
      v14 = *(_QWORD *)(v1 + 8);
      v15 = (const char *)&unk_1C0066CD0;
      v16 = (const char *)&unk_1C0066CD0;
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
        (__int64)&WPP_8442de81bc3731f2cffd4587785a31a7_Traceguids,
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
      v18 = *(_QWORD *)(v1 + 8);
      v19 = &unk_1C0066CD0;
      if ( (v18 & 0x200000000000LL) != 0 )
      {
        v2 = *(const char **)(v1 + 560);
        if ( (v18 & 0x400000000000LL) != 0 )
          v19 = *(void **)(v1 + 568);
      }
      LOBYTE(v17) = 4;
      WPP_RECORDER_SF_qss(
        WPP_GLOBAL_Control->DeviceExtension,
        v17,
        6,
        63,
        (__int64)&WPP_8442de81bc3731f2cffd4587785a31a7_Traceguids,
        v1,
        (__int64)v2,
        (__int64)v19);
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
    v12 = (const char *)&unk_1C0066CD0;
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
      (__int64)&WPP_8442de81bc3731f2cffd4587785a31a7_Traceguids,
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
