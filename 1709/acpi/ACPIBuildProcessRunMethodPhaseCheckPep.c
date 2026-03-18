/*
 * XREFs of ACPIBuildProcessRunMethodPhaseCheckPep @ 0x1C001DBA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C0006AC0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIBuildCompleteCommon @ 0x1C001EE88 (ACPIBuildCompleteCommon.c)
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C00222A4 (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 */

__int64 __fastcall ACPIBuildProcessRunMethodPhaseCheckPep(__int64 a1)
{
  __int64 v1; // rsi
  const char *v2; // rbp
  int v4; // ebx
  __int64 v5; // rax
  const char *v6; // rcx
  signed __int32 v7; // ecx
  KIRQL v8; // di
  int v9; // edx
  __int64 v11; // rax
  const char *v12; // rdx
  const char *v13; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  v2 = (const char *)&unk_1C0067B08;
  v4 = 0;
  if ( (*(_QWORD *)(v1 + 8) & 0x8000000000000LL) != 0 )
  {
    *(_DWORD *)(a1 + 32) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 32) = 4;
    if ( (*(_DWORD *)(v1 + 952) & 0x2000000) == 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v1 + 952), 0x2000000uLL);
      v4 = AcpiNotifyPlExtDiscoverDeviceAsync(*(_QWORD *)(v1 + 712), ACPIBuildDiscoverDeviceCompletion, a1);
      if ( v4 < 0 )
      {
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
          2u,
          6u,
          0x3Bu,
          (__int64)&WPP_cc96da84b6703e4a1deab6145401189a_Traceguids,
          v4,
          v1,
          v12,
          v13);
      }
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
    0x3Cu,
    (__int64)&WPP_cc96da84b6703e4a1deab6145401189a_Traceguids,
    v4,
    v1,
    v2,
    v6);
  if ( v4 != 259 )
  {
    v7 = *(_DWORD *)(a1 + 32);
    if ( v4 == -1073741738 )
    {
      *(_DWORD *)(a1 + 48) = -1073741738;
      ACPIBuildCompleteCommon(a1 + 24, 2LL);
    }
    else
    {
      if ( v4 < 0 )
      {
        *(_DWORD *)(a1 + 48) = v4;
        KeBugCheckEx(0xA5u, 3uLL, 0LL, v4, 0LL);
      }
      *(_DWORD *)(a1 + 32) = 2;
      _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), v7, 1);
      v8 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
      v9 = AcpiBuildDpcFlags | 2;
      AcpiBuildDpcFlags = v9;
      if ( (v9 & 1) == 0 )
      {
        AcpiBuildDpcFlags = v9 | 1;
        KeInsertQueueDpc(&AcpiBuildDpc, 0LL, 0LL);
      }
      KeReleaseSpinLock(&AcpiBuildQueueLock, v8);
    }
  }
  return (unsigned int)v4;
}
