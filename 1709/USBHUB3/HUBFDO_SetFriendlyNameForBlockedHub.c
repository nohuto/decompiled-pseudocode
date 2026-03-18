/*
 * XREFs of HUBFDO_SetFriendlyNameForBlockedHub @ 0x1C00660D0
 * Callers:
 *     HUBFDO_EvtDevicePrepareHardware @ 0x1C0066B90 (HUBFDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall HUBFDO_SetFriendlyNameForBlockedHub(__int64 a1)
{
  __int64 v2; // rax
  struct _DEVICE_OBJECT *v3; // rax
  NTSTATUS result; // eax
  __int64 Size; // [rsp+28h] [rbp-20h]

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  v3 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(
                                  WdfDriverGlobals,
                                  v2);
  result = IoSetDevicePropertyData(
             v3,
             &DEVPKEY_Device_DeviceDesc,
             0,
             1u,
             0x12u,
             0x48u,
             L"SuperSpeed USB Hub (Non Functional)");
  if ( result < 0 )
  {
    LODWORD(Size) = result;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(a1 + 2512),
             3u,
             3u,
             0xBu,
             (__int64)&WPP_ae437379bf4e39bc88b98c8aab0da7f7_Traceguids,
             Size);
  }
  return result;
}
