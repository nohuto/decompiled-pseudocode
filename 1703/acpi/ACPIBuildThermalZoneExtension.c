/*
 * XREFs of ACPIBuildThermalZoneExtension @ 0x1C0006658
 * Callers:
 *     OSNotifyCreateThermalZone @ 0x1C0006788 (OSNotifyCreateThermalZone.c)
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C000D1D0 (WPP_RECORDER_SF_Lqss.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C000F2AC (WPP_RECORDER_SF_Dqss.c)
 *     ACPIBuildDeviceExtension @ 0x1C0012FC4 (ACPIBuildDeviceExtension.c)
 *     memset @ 0x1C002CB80 (memset.c)
 */

__int64 __fastcall ACPIBuildThermalZoneExtension(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 result; // rax
  unsigned int v5; // esi
  __int64 v6; // rbx
  char *PoolWithTag; // rax
  char *v8; // rdi
  int v9; // edx
  __int64 v10; // rcx
  void *v11; // rdi
  void *v12; // rax
  __int64 v13; // rax
  void *v14; // rdi
  void *v15; // rdx
  void *v16; // rcx
  int v17; // edx
  __int64 v18; // rcx
  void *v19; // rax
  void *v20; // rcx
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
        v10 = *(_QWORD *)(v6 + 8);
        v11 = &unk_1C0066CD0;
        v12 = &unk_1C0066CD0;
        if ( (v10 & 0x200000000000LL) != 0 )
        {
          v11 = *(void **)(v6 + 560);
          if ( (v10 & 0x400000000000LL) != 0 )
            v12 = *(void **)(v6 + 568);
        }
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_Lqss(
          WPP_GLOBAL_Control->DeviceExtension,
          v9,
          6,
          89,
          (__int64)&WPP_8442de81bc3731f2cffd4587785a31a7_Traceguids,
          v5,
          v6,
          (__int64)v11,
          (__int64)v12);
      }
      else
      {
        v13 = *(_QWORD *)(v6 + 8);
        v14 = &unk_1C0066CD0;
        v15 = &unk_1C0066CD0;
        v16 = &unk_1C0066CD0;
        if ( (v13 & 0x200000000000LL) != 0 )
        {
          v15 = *(void **)(v6 + 560);
          if ( (v13 & 0x400000000000LL) != 0 )
            v16 = *(void **)(v6 + 568);
        }
        v21 = (__int64)v15;
        LOBYTE(v15) = 2;
        WPP_RECORDER_SF_Dqss(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v15,
          16,
          87,
          (__int64)&WPP_8442de81bc3731f2cffd4587785a31a7_Traceguids,
          80,
          v6,
          v21,
          (__int64)v16);
        v18 = *(_QWORD *)(v6 + 8);
        v5 = -1073741670;
        v19 = &unk_1C0066CD0;
        if ( (v18 & 0x200000000000LL) != 0 )
        {
          v14 = *(void **)(v6 + 560);
          if ( (v18 & 0x400000000000LL) != 0 )
            v19 = *(void **)(v6 + 568);
        }
        LOBYTE(v17) = 2;
        WPP_RECORDER_SF_Lqss(
          WPP_GLOBAL_Control->DeviceExtension,
          v17,
          16,
          88,
          (__int64)&WPP_8442de81bc3731f2cffd4587785a31a7_Traceguids,
          154,
          v6,
          (__int64)v14,
          (__int64)v19);
        v20 = *(void **)(v6 + 200);
        if ( v20 )
        {
          ExFreePoolWithTag(v20, 0);
          *(_QWORD *)(v6 + 200) = 0LL;
        }
        _InterlockedOr64((volatile signed __int64 *)(v6 + 8), 0x2000000000000uLL);
      }
      return v5;
    }
  }
  return result;
}
