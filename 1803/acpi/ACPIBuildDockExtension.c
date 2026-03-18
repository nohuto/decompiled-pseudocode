/*
 * XREFs of ACPIBuildDockExtension @ 0x1C000AEF4
 * Callers:
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C000D1E0 (ACPIBuildProcessDevicePhaseEjd.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00019EC (WPP_RECORDER_SF_D.c)
 *     RtlStringCchPrintfA @ 0x1C0002234 (RtlStringCchPrintfA.c)
 *     ACPIAmliBuildObjectPathname @ 0x1C0009444 (ACPIAmliBuildObjectPathname.c)
 *     ACPIBuildDeviceExtension @ 0x1C000A374 (ACPIBuildDeviceExtension.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 */

__int64 __fastcall ACPIBuildDockExtension(__int64 a1)
{
  PVOID v2; // r14
  __int64 result; // rax
  __int64 v4; // rbx
  char *PoolWithTag; // rax
  int v6; // edx
  void *v7; // rdi
  char *v8; // rbp
  int v9; // esi
  void **v10; // r13
  _QWORD *v11; // r14
  __int64 v12; // rax
  void *v13; // rdx
  void *v14; // rcx
  __int64 v15; // rcx
  int v16; // edx
  void *v17; // rax
  int v18; // edx
  void *v19; // rax
  __int64 v20; // [rsp+38h] [rbp-50h]
  __int64 v21; // [rsp+98h] [rbp+10h] BYREF
  PVOID P; // [rsp+A0h] [rbp+18h] BYREF

  v21 = 0LL;
  v2 = 0LL;
  P = 0LL;
  result = ACPIBuildDeviceExtension(0LL, RootDeviceExtension, &v21);
  if ( (int)result >= 0 )
  {
    v4 = v21;
    if ( v21 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x15uLL, 0x53706341u);
      v7 = &unk_1C005B1F0;
      v8 = PoolWithTag;
      if ( PoolWithTag )
      {
        RtlStringCchPrintfA(PoolWithTag, 0x15uLL, "ACPI\\DockDevice");
        v10 = (void **)(v4 + 560);
        *(_QWORD *)(v4 + 560) = v8;
        v9 = ACPIAmliBuildObjectPathname(a1, (char **)&P, 0);
        if ( v9 >= 0 )
        {
          *(_QWORD *)(v4 + 568) = P;
          *(_QWORD *)(v4 + 184) = *(_QWORD *)(*(_QWORD *)a1 + 104LL);
          *(_DWORD *)(v4 + 192) = 4;
          *(_DWORD *)(v4 + 200) = 0;
          v11 = (_QWORD *)(v4 + 8);
          _InterlockedOr64((volatile signed __int64 *)(v4 + 8), 0x209E00000020008uLL);
          v4 = v21;
        }
        else
        {
          v11 = (_QWORD *)(v4 + 8);
          v12 = *(_QWORD *)(v4 + 8);
          v13 = &unk_1C005B1F0;
          v14 = &unk_1C005B1F0;
          if ( (v12 & 0x200000000000LL) != 0 )
          {
            v13 = *v10;
            if ( (v12 & 0x400000000000LL) != 0 )
              v14 = *(void **)(v4 + 568);
          }
          v20 = (__int64)v13;
          LOBYTE(v13) = 4;
          WPP_RECORDER_SF_Dqss(
            WPP_GLOBAL_Control->DeviceExtension,
            (_DWORD)v13,
            21,
            83,
            (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
            v9,
            v4,
            v20,
            (__int64)v14);
        }
        if ( v9 >= 0 )
        {
          v18 = 0;
          v19 = &unk_1C005B1F0;
          if ( (*v11 & 0x200000000000LL) != 0 )
          {
            v7 = *v10;
            if ( (*v11 & 0x400000000000LL) != 0 )
              v19 = *(void **)(v4 + 568);
          }
          LOBYTE(v18) = 2;
          WPP_RECORDER_SF_Dqss(
            WPP_GLOBAL_Control->DeviceExtension,
            v18,
            6,
            85,
            (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
            v9,
            v4,
            (__int64)v7,
            (__int64)v19);
          return (unsigned int)v9;
        }
        v2 = P;
      }
      else
      {
        LOBYTE(v6) = 2;
        WPP_RECORDER_SF_D(
          WPP_GLOBAL_Control->DeviceExtension,
          v6,
          21,
          82,
          (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
          21);
        v9 = -1073741670;
      }
      v15 = *(_QWORD *)(v4 + 8);
      v16 = 0;
      v17 = &unk_1C005B1F0;
      if ( (v15 & 0x200000000000LL) != 0 )
      {
        v7 = *(void **)(v4 + 560);
        if ( (v15 & 0x400000000000LL) != 0 )
          v17 = *(void **)(v4 + 568);
      }
      LOBYTE(v16) = 2;
      WPP_RECORDER_SF_Dqss(
        WPP_GLOBAL_Control->DeviceExtension,
        v16,
        6,
        84,
        (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
        v9,
        v4,
        (__int64)v7,
        (__int64)v17);
      if ( v2 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v4 + 8), 0xFFFF5FFFFFFFFFFFuLL);
        ExFreePoolWithTag(P, 0);
        *(_QWORD *)(v21 + 568) = 0LL;
      }
      if ( v8 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v4 + 8), 0xFFFF5FFFFFFFFFFFuLL);
        ExFreePoolWithTag(v8, 0);
        *(_QWORD *)(v21 + 560) = 0LL;
      }
      _InterlockedOr64((volatile signed __int64 *)(v4 + 8), 0x2000000000000uLL);
      return (unsigned int)v9;
    }
  }
  return result;
}
