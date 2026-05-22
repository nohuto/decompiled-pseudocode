/*
 * XREFs of ?SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@KK_NAEBUSpatialControllerPoseMsg@Internal@Spatial@Input@UI@Windows@@AEBUSpatialControllerStateMsg@45678@@Z @ 0x1800717F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KI_NAEBUSpatialControllerPoseMsg@Internal@Spatial@Input@UI@Windows@@AEBUSpatialControllerStateMsg@45678@PEAUInputInfo@@@Z @ 0x18005EF48 (-PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KI_NAEBUSpatialCo.c)
 *     ?Instance@RawInputProvidersContinuousTracing@@KAPEAV1@XZ @ 0x18006F600 (-Instance@RawInputProvidersContinuousTracing@@KAPEAV1@XZ.c)
 *     ?InputReportProcessed_@RawInputProvidersContinuousTracing@@QEAAXKJPEAUInputInfo@@@Z @ 0x18006F7D8 (-InputReportProcessed_@RawInputProvidersContinuousTracing@@QEAAXKJPEAUInputInfo@@@Z.c)
 *     ?InputReportIgnored_@RawInputProvidersContinuousTracing@@QEAAXKPEBG@Z @ 0x18006FA94 (-InputReportIgnored_@RawInputProvidersContinuousTracing@@QEAAXKPEBG@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialRimDeviceCollection::SendInputReport(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        char a5,
        __int64 a6,
        __int64 a7)
{
  int v7; // ebx
  _DWORD *v12; // rcx
  RawInputProvidersContinuousTracing *v13; // rcx
  _DWORD *v14; // rcx
  RawInputProvidersContinuousTracing *v15; // rcx
  _BYTE v17[24]; // [rsp+40h] [rbp-718h] BYREF
  int v18; // [rsp+58h] [rbp-700h]

  v7 = 0;
  if ( (*(_DWORD *)(a7 + 4) & 8) != 0 )
  {
    memset_0(v17, 0, 0x6C8uLL);
    v18 = 1736;
    v7 = MPCInputInfoHelper::PopulateAugmentedInput(a2, a3, a4, a5, a6, (_OWORD *)a7, (__int64)v17);
    if ( v7 >= 0 )
      v7 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 - 2744) + 24LL))(*(_QWORD *)(a1 - 2744), v17);
    v12 = (_DWORD *)*((_QWORD *)RawInputProvidersContinuousTracing::Instance() + 1);
    if ( v12 && *v12 )
    {
      RawInputProvidersContinuousTracing::Instance();
      RawInputProvidersContinuousTracing::InputReportProcessed_(v13, a3, v7, (struct InputInfo *)v17);
    }
  }
  else
  {
    v14 = (_DWORD *)*((_QWORD *)RawInputProvidersContinuousTracing::Instance() + 1);
    if ( v14 && *v14 )
    {
      RawInputProvidersContinuousTracing::Instance();
      RawInputProvidersContinuousTracing::InputReportIgnored_(v15, a3, L"No select");
    }
  }
  return (unsigned int)v7;
}
