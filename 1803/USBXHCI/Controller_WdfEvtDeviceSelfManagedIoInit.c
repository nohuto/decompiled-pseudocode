/*
 * XREFs of Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C000C9B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_q @ 0x1C0004F28 (WPP_RECORDER_SF_q.c)
 *     CommonBuffer_AcquireBuffer @ 0x1C00064FC (CommonBuffer_AcquireBuffer.c)
 *     Controller_InUseByDebugger @ 0x1C00082D0 (Controller_InUseByDebugger.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     Controller_PopulateDeviceFlags @ 0x1C00545F4 (Controller_PopulateDeviceFlags.c)
 *     Controller_PopulateHardwareVerifierFlags @ 0x1C0054898 (Controller_PopulateHardwareVerifierFlags.c)
 *     Controller_SetDeviceDescription @ 0x1C0055AB8 (Controller_SetDeviceDescription.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceSelfManagedIoInit(__int64 a1)
{
  __int64 v2; // rbx
  NTSTATUS v3; // eax
  int v4; // edx
  __int64 v5; // rax

  v2 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C004B408)
                 + 8);
  *(_BYTE *)(v2 + 16) = 1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      *(_QWORD *)(v2 + 72),
      5u,
      4u,
      0x32u,
      (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
      a1);
  if ( Controller_InUseByDebugger((_QWORD *)v2) )
  {
    WPP_RECORDER_SF_q(
      *(_QWORD *)(v2 + 72),
      4u,
      4u,
      0x33u,
      (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
      a1);
    v3 = PoRegisterPowerSettingCallback(
           0LL,
           &GUID_LOW_POWER_EPOCH,
           (PPOWER_SETTING_CALLBACK)Controller_LPEEnterExitCallback,
           (PVOID)v2,
           (PVOID *)(v2 + 432));
    if ( v3 < 0 )
    {
      LOBYTE(v4) = 3;
      WPP_RECORDER_SF_d(*(_QWORD *)(v2 + 72), v4, 4, 52, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, v3);
    }
  }
  Controller_SetDeviceDescription(v2);
  Controller_PopulateHardwareVerifierFlags(v2);
  Controller_PopulateDeviceFlags(v2);
  if ( (*(_QWORD *)(v2 + 272) & 0x400000000LL) != 0 )
  {
    v5 = CommonBuffer_AcquireBuffer(*(PVOID *)(v2 + 120), 512, v2, 829584451);
    *(_QWORD *)(v2 + 384) = v5;
    if ( !v5 )
      WPP_RECORDER_SF_q(
        *(_QWORD *)(v2 + 72),
        3u,
        4u,
        0x35u,
        (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
        a1);
  }
  return 0LL;
}
