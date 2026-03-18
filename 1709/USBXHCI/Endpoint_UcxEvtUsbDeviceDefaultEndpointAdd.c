/*
 * XREFs of Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd @ 0x1C005B5F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00055AC (WPP_RECORDER_SF_dd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     Controller_IsSecureDevice @ 0x1C0011780 (Controller_IsSecureDevice.c)
 *     Endpoint_Create @ 0x1C005AF24 (Endpoint_Create.c)
 */

__int64 __fastcall Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // edi
  int v12; // ebx
  __int64 v13; // rax
  int v15; // [rsp+28h] [rbp-58h]
  __int64 v16; // [rsp+28h] [rbp-58h]
  int v17; // [rsp+30h] [rbp-50h]
  __int64 v18; // [rsp+30h] [rbp-50h]
  int v19; // [rsp+40h] [rbp-40h] BYREF
  __int16 v20; // [rsp+44h] [rbp-3Ch]
  char v21; // [rsp+46h] [rbp-3Ah]
  _QWORD v22[7]; // [rsp+48h] [rbp-38h] BYREF

  v8 = *(unsigned __int8 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                              WdfDriverGlobals,
                              a2,
                              off_1C004E2F0)
                          + 135);
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C004E430);
  v17 = a3;
  v15 = v8;
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(v9 + 72),
    4u,
    0xDu,
    0xAu,
    (__int64)&WPP_70dcbfe646ea320c9194bc4b71c40f15_Traceguids,
    v15,
    v17);
  v21 = 0;
  v19 = 1287;
  v20 = a3;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          a1,
          off_1C004E430);
  if ( Controller_IsSecureDevice(v10) )
  {
    memset(v22, 0, sizeof(v22));
    v22[6] = 0LL;
    v22[1] = Endpoint_UcxEvtEndpointPurge;
    v22[2] = Endpoint_UcxEvtEndpointStart;
    v22[3] = Endpoint_UcxEvtEndpointAbort;
    v22[4] = Endpoint_UcxEvtEndpointOkToCancelTransfers;
    v22[5] = Endpoint_UcxEvtDefaultEndpointUpdate;
  }
  else
  {
    memset(v22, 0, sizeof(v22));
    v22[1] = Endpoint_UcxEvtEndpointPurge;
    v22[2] = Endpoint_UcxEvtEndpointStart;
    v22[3] = Endpoint_UcxEvtEndpointAbort;
    v22[4] = Endpoint_UcxEvtEndpointOkToCancelTransfers;
    v22[5] = Endpoint_UcxEvtDefaultEndpointUpdate;
    v22[6] = Endpoint_UcxEvtEndpointEnableForwardProgress;
  }
  LODWORD(v22[0]) = 56;
  ((void (__fastcall *)(_QWORD, __int64, _QWORD *))qword_1C004F8B0)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.32, a4, v22);
  v11 = Endpoint_Create(a1, a2, a4, (__int64)&v19, 0LL, 0LL);
  if ( v11 < 0 )
  {
    v12 = *(unsigned __int8 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015
                                                                                               + 1616))(
                                 WdfDriverGlobals,
                                 a2,
                                 off_1C004E2F0)
                             + 135);
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            a1,
            off_1C004E430);
    LODWORD(v18) = v11;
    LODWORD(v16) = v12;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v13 + 72),
      2u,
      0xDu,
      0xBu,
      (__int64)&WPP_70dcbfe646ea320c9194bc4b71c40f15_Traceguids,
      v16,
      v18);
  }
  return (unsigned int)v11;
}
