/*
 * XREFs of ACPIBuildDockExtension @ 0x1C00433E4
 * Callers:
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C000E8E0 (ACPIBuildProcessDevicePhaseEjd.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001AA8 (WPP_RECORDER_SF_D.c)
 *     RtlStringCchPrintfA @ 0x1C0005198 (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C000D1D0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIBuildDeviceExtension @ 0x1C0012FC4 (ACPIBuildDeviceExtension.c)
 *     ACPIAmliBuildObjectPathname @ 0x1C001447C (ACPIAmliBuildObjectPathname.c)
 */

__int64 __fastcall ACPIBuildDockExtension(__int64 a1)
{
  PVOID v2; // r14
  __int64 result; // rax
  __int64 v4; // rbx
  char *PoolWithTag; // rax
  int v6; // edx
  const char *v7; // rdi
  char *v8; // rbp
  int v9; // esi
  const char **v10; // r13
  _QWORD *v11; // r14
  __int64 v12; // rax
  const char *v13; // rdx
  const char *v14; // rcx
  __int64 v15; // rcx
  const char *v16; // rax
  const char *v17; // rax
  __int64 v18; // [rsp+98h] [rbp+10h] BYREF
  PVOID P; // [rsp+A0h] [rbp+18h] BYREF

  v18 = 0LL;
  v2 = 0LL;
  P = 0LL;
  result = ACPIBuildDeviceExtension(0LL, RootDeviceExtension, &v18);
  if ( (int)result >= 0 )
  {
    v4 = v18;
    if ( v18 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x15uLL, 0x53706341u);
      v7 = byte_1C0066CD0;
      v8 = PoolWithTag;
      if ( PoolWithTag )
      {
        RtlStringCchPrintfA(PoolWithTag, 0x15uLL, "ACPI\\DockDevice");
        v10 = (const char **)(v4 + 560);
        *(_QWORD *)(v4 + 560) = v8;
        v9 = ACPIAmliBuildObjectPathname(a1, &P, 0);
        if ( v9 >= 0 )
        {
          *(_QWORD *)(v4 + 568) = P;
          *(_QWORD *)(v4 + 184) = *(_QWORD *)(*(_QWORD *)a1 + 104LL);
          *(_DWORD *)(v4 + 192) = 4;
          *(_DWORD *)(v4 + 200) = 0;
          v11 = (_QWORD *)(v4 + 8);
          _InterlockedOr64((volatile signed __int64 *)(v4 + 8), 0x209E00000020008uLL);
          v4 = v18;
        }
        else
        {
          v11 = (_QWORD *)(v4 + 8);
          v12 = *(_QWORD *)(v4 + 8);
          v13 = byte_1C0066CD0;
          v14 = byte_1C0066CD0;
          if ( (v12 & 0x200000000000LL) != 0 )
          {
            v13 = *v10;
            if ( (v12 & 0x400000000000LL) != 0 )
              v14 = *(const char **)(v4 + 568);
          }
          WPP_RECORDER_SF_Lqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            0x15u,
            0x53u,
            (__int64)&WPP_8442de81bc3731f2cffd4587785a31a7_Traceguids,
            v9,
            v4,
            v13,
            v14);
        }
        if ( v9 >= 0 )
        {
          v17 = byte_1C0066CD0;
          if ( (*v11 & 0x200000000000LL) != 0 )
          {
            v7 = *v10;
            if ( (*v11 & 0x400000000000LL) != 0 )
              v17 = *(const char **)(v4 + 568);
          }
          WPP_RECORDER_SF_Lqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            6u,
            0x55u,
            (__int64)&WPP_8442de81bc3731f2cffd4587785a31a7_Traceguids,
            v9,
            v4,
            v7,
            v17);
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
          (__int64)&WPP_8442de81bc3731f2cffd4587785a31a7_Traceguids,
          21);
        v9 = -1073741670;
      }
      v15 = *(_QWORD *)(v4 + 8);
      v16 = byte_1C0066CD0;
      if ( (v15 & 0x200000000000LL) != 0 )
      {
        v7 = *(const char **)(v4 + 560);
        if ( (v15 & 0x400000000000LL) != 0 )
          v16 = *(const char **)(v4 + 568);
      }
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        6u,
        0x54u,
        (__int64)&WPP_8442de81bc3731f2cffd4587785a31a7_Traceguids,
        v9,
        v4,
        v7,
        v16);
      if ( v2 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v4 + 8), 0xFFFF5FFFFFFFFFFFuLL);
        ExFreePoolWithTag(P, 0);
        *(_QWORD *)(v18 + 568) = 0LL;
      }
      if ( v8 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v4 + 8), 0xFFFF5FFFFFFFFFFFuLL);
        ExFreePoolWithTag(v8, 0);
        *(_QWORD *)(v18 + 560) = 0LL;
      }
      _InterlockedOr64((volatile signed __int64 *)(v4 + 8), 0x2000000000000uLL);
      return (unsigned int)v9;
    }
  }
  return result;
}
