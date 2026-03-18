/*
 * XREFs of Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C0014620
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     CommonBuffer_AcquireBuffer @ 0x1C000F6FC (CommonBuffer_AcquireBuffer.c)
 *     Controller_InUseByDebugger @ 0x1C0011070 (Controller_InUseByDebugger.c)
 *     WPP_RECORDER_SF_q @ 0x1C0015FA8 (WPP_RECORDER_SF_q.c)
 *     Controller_PopulateDeviceFlags @ 0x1C0057684 (Controller_PopulateDeviceFlags.c)
 *     Controller_PopulateHardwareVerifierFlags @ 0x1C005792C (Controller_PopulateHardwareVerifierFlags.c)
 *     Controller_SetDeviceDescription @ 0x1C0058B30 (Controller_SetDeviceDescription.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceSelfManagedIoInit(__int64 a1)
{
  char v1; // di
  int v2; // edx
  __int64 v3; // rbx
  int v4; // edx
  NTSTATUS v5; // eax
  __int64 v6; // rax
  int v7; // edx
  __int64 v9; // [rsp+28h] [rbp-10h]

  v1 = a1;
  v3 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C004E408)
                 + 8);
  *(_BYTE *)(v3 + 16) = 1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v2) = 5;
    WPP_RECORDER_SF_q(*(_QWORD *)(v3 + 72), v2, 4, 50, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, v1);
  }
  if ( Controller_InUseByDebugger((_QWORD *)v3) )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_q(*(_QWORD *)(v3 + 72), v4, 4, 51, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, v1);
    v5 = PoRegisterPowerSettingCallback(
           0LL,
           &GUID_LOW_POWER_EPOCH,
           (PPOWER_SETTING_CALLBACK)Controller_LPEEnterExitCallback,
           (PVOID)v3,
           (PVOID *)(v3 + 432));
    if ( v5 < 0 )
    {
      LODWORD(v9) = v5;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v3 + 72),
        3u,
        4u,
        0x34u,
        (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
        v9);
    }
  }
  Controller_SetDeviceDescription(v3);
  Controller_PopulateHardwareVerifierFlags(v3);
  Controller_PopulateDeviceFlags(v3);
  if ( (*(_QWORD *)(v3 + 272) & 0x400000000LL) != 0 )
  {
    v6 = CommonBuffer_AcquireBuffer(*(PVOID *)(v3 + 120), 512, v3, 829584451);
    *(_QWORD *)(v3 + 384) = v6;
    if ( !v6 )
    {
      LOBYTE(v7) = 3;
      WPP_RECORDER_SF_q(*(_QWORD *)(v3 + 72), v7, 4, 53, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, v1);
    }
  }
  return 0LL;
}
