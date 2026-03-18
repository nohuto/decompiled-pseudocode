/*
 * XREFs of UsbDevice_UcxEvtDeviceAdd @ 0x1C005F170
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     Controller_AddDeviceToControllerDeviceList @ 0x1C0010010 (Controller_AddDeviceToControllerDeviceList.c)
 *     WPP_RECORDER_SF_dqd @ 0x1C0015430 (WPP_RECORDER_SF_dqd.c)
 *     WPP_RECORDER_SF_q @ 0x1C0015FA8 (WPP_RECORDER_SF_q.c)
 *     XilUsbDevice_Create @ 0x1C0033180 (XilUsbDevice_Create.c)
 *     Etw_DeviceCreate @ 0x1C0038604 (Etw_DeviceCreate.c)
 */

__int64 __fastcall UsbDevice_UcxEvtDeviceAdd(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r14
  int v6; // eax
  int v7; // r15d
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v11; // [rsp+28h] [rbp-91h]
  _QWORD v12[8]; // [rsp+40h] [rbp-79h] BYREF
  _QWORD v13[18]; // [rsp+80h] [rbp-39h] BYREF
  __int64 v14; // [rsp+130h] [rbp+77h] BYREF
  __int64 v15; // [rsp+138h] [rbp+7Fh] BYREF

  v14 = a3;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C004E430);
  memset(v13, 0, 0x68uLL);
  v13[1] = UsbDevice_UcxEvtEndpointsConfigure;
  v13[2] = UsbDevice_UcxEvtEnable;
  v13[3] = UsbDevice_UcxEvtDisable;
  v13[4] = UsbDevice_UcxEvtReset;
  v13[5] = UsbDevice_UcxEvtAddress;
  v13[6] = UsbDevice_UcxEvtUpdate;
  v13[7] = UsbDevice_UcxEvtHubInfo;
  v13[8] = Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd;
  v13[9] = Endpoint_UcxEvtUsbDeviceEndpointAdd;
  LODWORD(v13[0]) = 104;
  ((void (__fastcall *)(_QWORD, __int64, _QWORD *))qword_1C004F880)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.32, v14, v13);
  memset(v12, 0, 0x38uLL);
  LODWORD(v12[0]) = 56;
  v12[3] = 0x100000001LL;
  v12[6] = off_1C004E2F0;
  v12[1] = UsbDevice_EvtUsbDeviceCleanupCallback;
  v6 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64 *, _QWORD *, __int64 *))qword_1C004F878)(
         *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.32,
         a1,
         &v14,
         v12,
         &v15);
  v7 = v6;
  if ( v6 >= 0 )
  {
    WPP_RECORDER_SF_q(
      *(_QWORD *)(v5 + 72),
      4u,
      0xCu,
      0xBu,
      (__int64)&WPP_a5fd15ff1a8637a5810b72c9190e663e_Traceguids,
      v15);
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           v15,
           off_1C004E2F0);
    *(_QWORD *)v8 = v15;
    *(_QWORD *)(v8 + 8) = v5;
    *(_OWORD *)(v8 + 16) = *(_OWORD *)a2;
    *(_OWORD *)(v8 + 32) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(v8 + 48) = *(_OWORD *)(a2 + 32);
    *(_QWORD *)(v8 + 64) = *(_QWORD *)(a2 + 48);
    v7 = XilUsbDevice_Create(v8);
    if ( v7 >= 0 )
    {
      KeInitializeSpinLock((PKSPIN_LOCK)(v8 + 88));
      *(_QWORD *)(v8 + 104) = v8 + 96;
      *(_QWORD *)(v8 + 96) = v8 + 96;
      *(_DWORD *)(v8 + 112) = 0;
      Controller_AddDeviceToControllerDeviceList(v5, v15, (_QWORD *)(v8 + 72));
      Etw_DeviceCreate(v9, v8);
      LODWORD(v11) = *(_DWORD *)(v8 + 20);
      WPP_RECORDER_SF_dqd(
        *(_QWORD *)(v5 + 72),
        4u,
        0xCu,
        0xCu,
        (__int64)&WPP_a5fd15ff1a8637a5810b72c9190e663e_Traceguids,
        v11,
        *(_QWORD *)(v8 + 24),
        *(_DWORD *)(v8 + 44));
    }
  }
  else
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v5 + 72),
      2u,
      0xCu,
      0xAu,
      (__int64)&WPP_a5fd15ff1a8637a5810b72c9190e663e_Traceguids,
      v6);
  }
  return (unsigned int)v7;
}
