/*
 * XREFs of Endpoint_UcxEvtUsbDeviceEndpointAdd @ 0x1C00588D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0019530 (WPP_RECORDER_SF_ddL.c)
 *     Endpoint_Create @ 0x1C0057FA8 (Endpoint_Create.c)
 */

__int64 __fastcall Endpoint_UcxEvtUsbDeviceEndpointAdd(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 *a5,
        __int64 a6)
{
  unsigned __int8 *v9; // rdx
  int v10; // esi
  unsigned int v11; // edi
  int v12; // ebx
  __int64 v13; // rax
  __int64 v15; // [rsp+30h] [rbp-41h]
  _QWORD v16[12]; // [rsp+48h] [rbp-29h] BYREF

  memset(v16, 0, sizeof(v16));
  v16[1] = Endpoint_UcxEvtEndpointPurge;
  v16[2] = Endpoint_UcxEvtEndpointStart;
  v16[3] = Endpoint_UcxEvtEndpointAbort;
  v16[4] = Endpoint_UcxEvtEndpointReset;
  v16[5] = Endpoint_UcxEvtEndpointOkToCancelTransfers;
  v16[6] = Endpoint_UcxEvtEndpointStaticStreamsAdd;
  v16[7] = Endpoint_UcxEvtEndpointStaticStreamsEnable;
  v16[8] = Endpoint_UcxEvtEndpointStaticStreamsDisable;
  v16[9] = Endpoint_UcxEvtEndpointEnableForwardProgress;
  LODWORD(v16[0]) = 96;
  ((void (__fastcall *)(_QWORD, __int64, _QWORD *))qword_1C004C8A8)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.32, a6, v16);
  v9 = 0LL;
  if ( a5 && (*(_BYTE *)(a3 + 3) & 3) == 1 && (a5[3] & 0x80u) != 0 )
    v9 = &a5[*a5];
  v10 = Endpoint_Create(a1, a2, a6, a3, (__int64)a5, v9);
  if ( v10 < 0 )
  {
    v11 = *(unsigned __int8 *)(a3 + 2);
    v12 = *(unsigned __int8 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023
                                                                                               + 1616))(
                                 WdfDriverGlobals,
                                 a2,
                                 off_1C004B2F0)
                             + 135);
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            a1,
            off_1C004B430);
    LODWORD(v15) = v12;
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v13 + 72),
      2u,
      0xDu,
      0xCu,
      (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
      v15,
      (v11 >> 7) + 2 * (*(_BYTE *)(a3 + 2) & 0x7F),
      v10);
  }
  return (unsigned int)v10;
}
