/*
 * XREFs of EvtDevicePrepareHardware @ 0x1C001EB50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002CD8 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004CB0 (_guard_dispatch_icall_nop.c)
 *     RegisterWmi @ 0x1C001EC30 (RegisterWmi.c)
 *     ProcLibDeviceStart @ 0x1C0021204 (ProcLibDeviceStart.c)
 */

__int64 __fastcall EvtDevicePrepareHardware(__int64 a1)
{
  __int64 *v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  PWDF_DRIVER_GLOBALS v6; // rcx
  int v7; // eax
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v11; // [rsp+28h] [rbp-10h]
  int v12; // [rsp+28h] [rbp-10h]

  v2 = (__int64 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    a1,
                    off_1C0014048);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(WdfDriverGlobals, a1);
  v4 = WdfFunctions_01015;
  *v2 = v3;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(v4 + 264))(WdfDriverGlobals, a1);
  v6 = WdfDriverGlobals;
  v2[1] = v5;
  v2[2] = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(v6, a1);
  v7 = ProcLibDeviceStart(v2);
  if ( v7 < 0 )
  {
    v12 = v7;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x16u,
      (__int64)&WPP_f3df084cddf03afbb9a1a78b81d3ca2a_Traceguids,
      v12);
  }
  v8 = RegisterWmi(v2);
  v9 = v8;
  if ( v8 < 0 )
  {
    LODWORD(v11) = v8;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x17u,
      (__int64)&WPP_f3df084cddf03afbb9a1a78b81d3ca2a_Traceguids,
      v11);
  }
  return v9;
}
