/*
 * XREFs of EvtDriverDeviceAdd @ 0x1C001A4B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000134C (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C6F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000CA40 (memset.c)
 *     ProcLibDeviceCreate @ 0x1C001EA6C (ProcLibDeviceCreate.c)
 */

__int64 __fastcall EvtDriverDeviceAdd(__int64 a1, __int64 a2)
{
  __int64 v3; // r9
  int v4; // eax
  __int64 v5; // r9
  unsigned int v6; // ebx
  unsigned __int16 v7; // r9
  void *v8; // rdi
  unsigned int v9; // r8d
  __int64 v11; // [rsp+28h] [rbp-D8h]
  _QWORD v12[7]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v13[6]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v14[7]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v15[22]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v16; // [rsp+1A8h] [rbp+A8h] BYREF
  char v17; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v18; // [rsp+1B8h] [rbp+B8h] BYREF

  v16 = a2;
  memset(v15, 0, 0x90uLL);
  v15[5] = EvtDevicePrepareHardware;
  LODWORD(v15[0]) = 144;
  v15[6] = EvtDeviceReleaseHardware;
  v15[14] = EvtDeviceQueryStop;
  v15[1] = EvtDeviceD0Entry;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 440))(WdfDriverGlobals, a2, v15);
  v17 = 2;
  LOBYTE(v3) = 22;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, __int64), __int64, char *, int))(WdfFunctions_01015 + 584))(
         WdfDriverGlobals,
         v16,
         EvtDeviceSetPower,
         v3,
         &v17,
         1);
  v6 = v4;
  if ( v4 < 0 )
  {
    v7 = 12;
LABEL_13:
    v9 = 4;
    goto LABEL_14;
  }
  v17 = 20;
  LOBYTE(v5) = 27;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(), __int64, char *, int))(WdfFunctions_01015 + 584))(
         WdfDriverGlobals,
         v16,
         EvtDeviceWdmIrpPreprocessPnp,
         v5,
         &v17,
         1);
  v6 = v4;
  if ( v4 < 0 )
  {
    v7 = 13;
    goto LABEL_13;
  }
  memset(v14, 0, sizeof(v14));
  v14[6] = off_1C0011048;
  LODWORD(v14[0]) = 56;
  v14[3] = 0x100000001LL;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _QWORD *, __int64 *))(WdfFunctions_01015 + 600))(
         WdfDriverGlobals,
         &v16,
         v14,
         &v18);
  v6 = v4;
  if ( v4 < 0 )
  {
    v7 = 14;
    goto LABEL_13;
  }
  v8 = (void *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                 WdfDriverGlobals,
                 v18,
                 off_1C0011048);
  v4 = ProcLibDeviceCreate(v8);
  v6 = v4;
  if ( v4 < 0 )
  {
    v7 = 15;
    v9 = 3;
LABEL_14:
    LODWORD(v11) = v4;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      v9,
      v7,
      (__int64)&WPP_f3df084cddf03afbb9a1a78b81d3ca2a_Traceguids,
      v11);
    return v6;
  }
  memset(v12, 0, sizeof(v12));
  LODWORD(v12[0]) = 65592;
  v12[2] = AcpiCStateIdleCancel;
  v12[1] = v8;
  v12[3] = AcpiCStateIdleCancel;
  v12[6] = ProcLibThermalNotification;
  memset(v13, 0, sizeof(v13));
  v13[4] = 0LL;
  v13[1] = v12;
  v13[2] = &GUID_THERMAL_COOLING_INTERFACE;
  LODWORD(v13[0]) = 48;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 1824))(
         WdfDriverGlobals,
         v18,
         v13);
  v6 = v4;
  if ( v4 < 0 )
  {
    v7 = 16;
    goto LABEL_13;
  }
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, _QWORD))(WdfFunctions_01015 + 616))(
         WdfDriverGlobals,
         v18,
         &GUID_DEVINTERFACE_THERMAL_COOLING,
         0LL);
  v6 = v4;
  if ( v4 < 0 )
  {
    v7 = 17;
    goto LABEL_13;
  }
  return v6;
}
