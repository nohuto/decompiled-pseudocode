/*
 * XREFs of ACPIBuildThermalZoneExtension @ 0x1C002A2B0
 * Callers:
 *     OSNotifyCreateThermalZone @ 0x1C002A160 (OSNotifyCreateThermalZone.c)
 * Callees:
 *     WPP_RECORDER_SF_Dqss @ 0x1C0003B6C (WPP_RECORDER_SF_Dqss.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0006AC0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIBuildDeviceExtension @ 0x1C001AB98 (ACPIBuildDeviceExtension.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 */

__int64 __fastcall ACPIBuildThermalZoneExtension(volatile signed __int32 *a1, __int64 a2, __int64 *a3)
{
  __int64 result; // rax
  unsigned int v5; // esi
  __int64 v6; // rbx
  char *PoolWithTag; // rax
  char *v8; // rdi
  __int64 v9; // rcx
  const char *v10; // rdi
  const char *v11; // rax
  __int64 v12; // rax
  const char *v13; // rdi
  const char *v14; // rdx
  const char *v15; // rcx
  __int64 v16; // rcx
  const char *v17; // rax
  void *v18; // rcx

  result = ACPIBuildDeviceExtension(a1, RootDeviceExtension, a3);
  v5 = result;
  if ( (int)result >= 0 )
  {
    v6 = *a3;
    if ( v6 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v6 + 8), 0x8300000uLL);
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x150uLL, 0x54706341u);
      *(_QWORD *)(v6 + 200) = PoolWithTag;
      v8 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0x150uLL);
        *((_QWORD *)v8 + 23) = v8 + 176;
        *((_QWORD *)v8 + 22) = v8 + 176;
        KeInitializeEvent((PRKEVENT)(v8 + 248), NotificationEvent, 1u);
        KeInitializeEvent((PRKEVENT)(v8 + 280), NotificationEvent, 1u);
        v9 = *(_QWORD *)(v6 + 8);
        v10 = (const char *)&unk_1C0067B08;
        v11 = (const char *)&unk_1C0067B08;
        if ( (v9 & 0x200000000000LL) != 0 )
        {
          v10 = *(const char **)(v6 + 560);
          if ( (v9 & 0x400000000000LL) != 0 )
            v11 = *(const char **)(v6 + 568);
        }
        WPP_RECORDER_SF_Lqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          6u,
          0x59u,
          (__int64)&WPP_cc96da84b6703e4a1deab6145401189a_Traceguids,
          v5,
          v6,
          v10,
          v11);
      }
      else
      {
        v12 = *(_QWORD *)(v6 + 8);
        v13 = (const char *)&unk_1C0067B08;
        v14 = (const char *)&unk_1C0067B08;
        v15 = (const char *)&unk_1C0067B08;
        if ( (v12 & 0x200000000000LL) != 0 )
        {
          v14 = *(const char **)(v6 + 560);
          if ( (v12 & 0x400000000000LL) != 0 )
            v15 = *(const char **)(v6 + 568);
        }
        WPP_RECORDER_SF_Dqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0x10u,
          0x57u,
          (__int64)&WPP_cc96da84b6703e4a1deab6145401189a_Traceguids,
          80,
          v6,
          v14,
          v15);
        v16 = *(_QWORD *)(v6 + 8);
        v5 = -1073741670;
        v17 = (const char *)&unk_1C0067B08;
        if ( (v16 & 0x200000000000LL) != 0 )
        {
          v13 = *(const char **)(v6 + 560);
          if ( (v16 & 0x400000000000LL) != 0 )
            v17 = *(const char **)(v6 + 568);
        }
        WPP_RECORDER_SF_Lqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0x10u,
          0x58u,
          (__int64)&WPP_cc96da84b6703e4a1deab6145401189a_Traceguids,
          154,
          v6,
          v13,
          v17);
        v18 = *(void **)(v6 + 200);
        if ( v18 )
        {
          ExFreePoolWithTag(v18, 0);
          *(_QWORD *)(v6 + 200) = 0LL;
        }
        _InterlockedOr64((volatile signed __int64 *)(v6 + 8), 0x2000000000000uLL);
      }
      return v5;
    }
  }
  return result;
}
