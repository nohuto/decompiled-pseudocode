/*
 * XREFs of ACPIBuildThermalZoneExtension @ 0x1C001192C
 * Callers:
 *     OSNotifyCreateThermalZone @ 0x1C002EAFC (OSNotifyCreateThermalZone.c)
 * Callees:
 *     memset @ 0x1C0004540 (memset.c)
 *     ACPIBuildDeviceExtension @ 0x1C000A374 (ACPIBuildDeviceExtension.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 */

__int64 __fastcall ACPIBuildThermalZoneExtension(volatile signed __int32 *a1, __int64 a2, __int64 *a3)
{
  __int64 result; // rax
  unsigned int v5; // esi
  __int64 v6; // rbx
  char *PoolWithTag; // rax
  char *v8; // rdi
  __int64 v9; // rax
  void *v10; // rdi
  void *v11; // rdx
  void *v12; // rcx
  int v13; // edx
  __int64 v14; // rcx
  void *v15; // rax
  void *v16; // rcx
  int v17; // edx
  __int64 v18; // rcx
  void *v19; // rdi
  void *v20; // rax
  __int64 v21; // [rsp+38h] [rbp-30h]

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
        v18 = *(_QWORD *)(v6 + 8);
        v19 = &unk_1C005B1F0;
        v20 = &unk_1C005B1F0;
        if ( (v18 & 0x200000000000LL) != 0 )
        {
          v19 = *(void **)(v6 + 560);
          if ( (v18 & 0x400000000000LL) != 0 )
            v20 = *(void **)(v6 + 568);
        }
        LOBYTE(v17) = 2;
        WPP_RECORDER_SF_Dqss(
          WPP_GLOBAL_Control->DeviceExtension,
          v17,
          6,
          89,
          (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
          v5,
          v6,
          (__int64)v19,
          (__int64)v20);
      }
      else
      {
        v9 = *(_QWORD *)(v6 + 8);
        v10 = &unk_1C005B1F0;
        v11 = &unk_1C005B1F0;
        v12 = &unk_1C005B1F0;
        if ( (v9 & 0x200000000000LL) != 0 )
        {
          v11 = *(void **)(v6 + 560);
          if ( (v9 & 0x400000000000LL) != 0 )
            v12 = *(void **)(v6 + 568);
        }
        v21 = (__int64)v11;
        LOBYTE(v11) = 2;
        WPP_RECORDER_SF_Dqss(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v11,
          16,
          87,
          (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
          80,
          v6,
          v21,
          (__int64)v12);
        v14 = *(_QWORD *)(v6 + 8);
        v5 = -1073741670;
        v15 = &unk_1C005B1F0;
        if ( (v14 & 0x200000000000LL) != 0 )
        {
          v10 = *(void **)(v6 + 560);
          if ( (v14 & 0x400000000000LL) != 0 )
            v15 = *(void **)(v6 + 568);
        }
        LOBYTE(v13) = 2;
        WPP_RECORDER_SF_Dqss(
          WPP_GLOBAL_Control->DeviceExtension,
          v13,
          16,
          88,
          (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
          154,
          v6,
          (__int64)v10,
          (__int64)v15);
        v16 = *(void **)(v6 + 200);
        if ( v16 )
        {
          ExFreePoolWithTag(v16, 0);
          *(_QWORD *)(v6 + 200) = 0LL;
        }
        _InterlockedOr64((volatile signed __int64 *)(v6 + 8), 0x2000000000000uLL);
      }
      return v5;
    }
  }
  return result;
}
