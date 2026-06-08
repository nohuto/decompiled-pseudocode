/*
 * XREFs of EvtDriverDeviceAdd @ 0x1C0024540
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001D9C (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004F10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0005280 (memset.c)
 *     ProcLibDeviceCreate @ 0x1C00247E8 (ProcLibDeviceCreate.c)
 */

__int64 __fastcall EvtDriverDeviceAdd(__int64 a1, __int64 a2)
{
  __int64 v3; // r9
  int v4; // eax
  __int64 v5; // r9
  unsigned int v6; // ebx
  void *v7; // rdi
  unsigned __int16 v9; // r9
  unsigned int v10; // r8d
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
    v9 = 12;
LABEL_14:
    v10 = 4;
    goto LABEL_15;
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
    v9 = 13;
    goto LABEL_14;
  }
  memset(v14, 0, sizeof(v14));
  v14[6] = off_1C0015048;
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
    v9 = 14;
    goto LABEL_14;
  }
  v7 = (void *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                 WdfDriverGlobals,
                 v18,
                 off_1C0015048);
  v4 = ProcLibDeviceCreate(v7);
  v6 = v4;
  if ( v4 < 0 )
  {
    v9 = 15;
    v10 = 3;
LABEL_15:
    LODWORD(v11) = v4;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      v10,
      v9,
      (__int64)&WPP_aa9d9c6c8741343c67d4469f91515e40_Traceguids,
      v11);
    return v6;
  }
  memset(v12, 0, sizeof(v12));
  LODWORD(v12[0]) = 65592;
  v12[2] = AcpiCStateIdleCancel;
  v12[1] = v7;
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
    v9 = 16;
    goto LABEL_14;
  }
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, _QWORD))(WdfFunctions_01015 + 616))(
         WdfDriverGlobals,
         v18,
         &GUID_DEVINTERFACE_THERMAL_COOLING,
         0LL);
  v6 = v4;
  if ( v4 < 0 )
  {
    v9 = 17;
    goto LABEL_14;
  }
  return v6;
}
