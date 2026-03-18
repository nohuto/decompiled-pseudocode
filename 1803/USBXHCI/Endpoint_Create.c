/*
 * XREFs of Endpoint_Create @ 0x1C0057FA8
 * Callers:
 *     Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd @ 0x1C0058670 (Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd.c)
 *     Endpoint_UcxEvtUsbDeviceEndpointAdd @ 0x1C00588D0 (Endpoint_UcxEvtUsbDeviceEndpointAdd.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     Controller_IsSecureDevice @ 0x1C0008AAC (Controller_IsSecureDevice.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 *     XilEndpoint_Create @ 0x1C00101C8 (XilEndpoint_Create.c)
 *     Endpoint_CreateClearStallContext @ 0x1C0010FC4 (Endpoint_CreateClearStallContext.c)
 *     WPP_RECORDER_SF_ddq @ 0x1C00162AC (WPP_RECORDER_SF_ddq.c)
 *     WPP_RECORDER_SF_ddqDdd @ 0x1C00163FC (WPP_RECORDER_SF_ddqDdd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0019530 (WPP_RECORDER_SF_ddL.c)
 *     TR_GetWdfQueue @ 0x1C0020C6C (TR_GetWdfQueue.c)
 *     UsbDevice_AddEndpointToDeviceEndpointList @ 0x1C0031050 (UsbDevice_AddEndpointToDeviceEndpointList.c)
 *     Etw_EndpointCreate @ 0x1C003645C (Etw_EndpointCreate.c)
 *     Endpoint_SetType @ 0x1C0058614 (Endpoint_SetType.c)
 *     TR_Create @ 0x1C005BBAC (TR_Create.c)
 */

__int64 __fastcall Endpoint_Create(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  _QWORD *v8; // r14
  unsigned int v9; // ebx
  char IsSecureDevice; // al
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  unsigned __int8 v14; // bl
  int ClearStallContext; // edi
  __int64 v16; // rax
  unsigned __int16 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rbx
  unsigned int v20; // ebx
  __int64 v21; // rax
  struct _DEVICE_OBJECT *v22; // rax
  PIO_WORKITEM WorkItem; // rax
  unsigned int v24; // ebx
  __int64 v25; // rax
  char v26; // al
  PWDF_DRIVER_GLOBALS v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  int v31; // ecx
  __int64 v32; // rax
  int v33; // ebx
  __int64 v34; // rax
  char v35; // al
  __int64 WdfQueue; // rax
  __int64 v37; // rcx
  __int64 v38; // rcx
  int v40; // [rsp+20h] [rbp-89h]
  __int64 v41; // [rsp+28h] [rbp-81h]
  __int64 v42; // [rsp+30h] [rbp-79h]
  __int64 v43; // [rsp+38h] [rbp-71h]
  _QWORD v44[5]; // [rsp+60h] [rbp-49h] BYREF
  _QWORD v45[13]; // [rsp+88h] [rbp-21h] BYREF
  __int64 v46; // [rsp+110h] [rbp+67h] BYREF
  __int64 v47; // [rsp+118h] [rbp+6Fh] BYREF

  v46 = a3;
  v8 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                   WdfDriverGlobals,
                   a1,
                   off_1C004B430);
  v9 = *(unsigned __int8 *)(a4 + 2);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
    WdfDriverGlobals,
    a2,
    off_1C004B2F0);
  HIDWORD(v43) = HIDWORD(a4);
  WPP_RECORDER_SF_ddqDdd(v8[9], v9 >> 7, (v9 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F), *(_BYTE *)(a4 + 3) & 3, v40);
  memset(v45, 0, 0x38uLL);
  v45[6] = off_1C004B1D8;
  LODWORD(v45[0]) = 56;
  v45[1] = Endpoint_EvtEndpointCleanupCallback;
  v45[3] = 0x100000001LL;
  IsSecureDevice = Controller_IsSecureDevice((__int64)v8);
  v12 = v11;
  if ( IsSecureDevice )
    v12 = 2;
  LODWORD(v45[3]) = v12;
  v13 = qword_1C004C890(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.32, a2, &v46, v45, &v47);
  v14 = *(_BYTE *)(a4 + 2);
  ClearStallContext = v13;
  if ( v13 < 0 )
  {
    v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            a2,
            off_1C004B2F0);
    LODWORD(v43) = ClearStallContext;
    v17 = 14;
    LODWORD(v42) = (v14 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F);
    LODWORD(v41) = *(unsigned __int8 *)(v16 + 135);
LABEL_5:
    WPP_RECORDER_SF_ddL(v8[9], 2u, 0xDu, v17, (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids, v41, v42, v43);
    return (unsigned int)ClearStallContext;
  }
  v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
          WdfDriverGlobals,
          a2,
          off_1C004B2F0);
  WPP_RECORDER_SF_ddq(
    v8[9],
    4u,
    0xDu,
    0xFu,
    (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
    *(unsigned __int8 *)(v18 + 135),
    (v14 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F),
    v47);
  v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
          WdfDriverGlobals,
          v47,
          off_1C004B1D8);
  KeInitializeEvent((PRKEVENT)(v19 + 40), NotificationEvent, 0);
  memset(v44, 0, sizeof(v44));
  LODWORD(v44[2]) = 0;
  LODWORD(v44[3]) = 0;
  LODWORD(v44[0]) = 40;
  v44[1] = Endpoint_WdfEvtStateMachineTimer;
  BYTE4(v44[2]) = 1;
  memset(v45, 0, 0x38uLL);
  v45[4] = v47;
  LODWORD(v45[0]) = 56;
  v45[3] = 0x100000001LL;
  ClearStallContext = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, __int64))(WdfFunctions_01023
                                                                                                  + 2544))(
                        WdfDriverGlobals,
                        v44,
                        v45,
                        v19 + 1296);
  if ( ClearStallContext < 0 )
  {
    v20 = *(unsigned __int8 *)(a4 + 2);
    v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            a2,
            off_1C004B2F0);
    v17 = 16;
LABEL_8:
    LODWORD(v43) = ClearStallContext;
    LODWORD(v42) = (v20 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F);
    LODWORD(v41) = *(unsigned __int8 *)(v21 + 135);
    goto LABEL_5;
  }
  v22 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 248))(
                                   WdfDriverGlobals,
                                   *v8);
  WorkItem = IoAllocateWorkItem(v22);
  *(_QWORD *)(v19 + 1272) = WorkItem;
  if ( !WorkItem )
  {
    v24 = *(unsigned __int8 *)(a4 + 2);
    v25 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            a2,
            off_1C004B2F0);
    LODWORD(v42) = (v24 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F);
    LODWORD(v41) = *(unsigned __int8 *)(v25 + 135);
    WPP_RECORDER_SF_dd(v8[9], 2u, 0xDu, 0x11u, (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids, v41, v42);
    return (unsigned int)-1073741670;
  }
  *(_DWORD *)(v19 + 1140) = 2000;
  *(_DWORD *)(v19 + 1264) = 2000;
  *(_DWORD *)(v19 + 1168) = 0;
  *(_QWORD *)(v19 + 1256) = &ESMStateTable;
  *(_QWORD *)(v19 + 1248) = v19;
  v26 = Controller_IsSecureDevice((__int64)v8);
  v27 = WdfDriverGlobals;
  *(_BYTE *)(v19 + 1306) = v26;
  v28 = WdfFunctions_01023;
  *(_QWORD *)v19 = v8;
  *(_QWORD *)(v19 + 8) = a2;
  v29 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(v28 + 1616))(v27, a2, off_1C004B2F0);
  v30 = a5;
  *(_QWORD *)(v19 + 16) = v29;
  *(_QWORD *)(v19 + 136) = 0LL;
  *(_QWORD *)(v19 + 264) = 0LL;
  *(_DWORD *)(v19 + 96) = *(_DWORD *)a4;
  *(_WORD *)(v19 + 100) = *(_WORD *)(a4 + 4);
  *(_BYTE *)(v19 + 102) = *(_BYTE *)(a4 + 6);
  if ( v30 )
  {
    *(_DWORD *)(v19 + 103) = *(_DWORD *)v30;
    *(_WORD *)(v19 + 107) = *(_WORD *)(v30 + 4);
  }
  if ( a6 )
    *(_QWORD *)(v19 + 109) = *a6;
  Endpoint_SetType(v19);
  v31 = 2 * (*(_BYTE *)(v19 + 98) & 0xF);
  if ( (unsigned int)(*(_DWORD *)(v19 + 120) - 1) > 2 )
    ++v31;
  *(_DWORD *)(v19 + 144) = v31;
  ClearStallContext = XilEndpoint_Create(v19);
  if ( ClearStallContext < 0 )
  {
    v20 = *(unsigned __int8 *)(a4 + 2);
    v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            a2,
            off_1C004B2F0);
    v17 = 18;
    goto LABEL_8;
  }
  if ( *(_DWORD *)(*(_QWORD *)(v19 + 16) + 20LL) == 3
    && (*(_BYTE *)(v19 + 99) & 3) == 2
    && (*(_BYTE *)(v19 + 106) & 0x1F) != 0 )
  {
    v32 = *(_QWORD *)v19;
    *(_BYTE *)(v19 + 37) = 1;
    if ( (*(_QWORD *)(v32 + 272) & 0x200000LL) != 0 )
    {
      ClearStallContext = Endpoint_CreateClearStallContext(v19);
      if ( ClearStallContext < 0 )
      {
        v33 = *(_DWORD *)(v19 + 144);
        v34 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                WdfDriverGlobals,
                a2,
                off_1C004B2F0);
        v17 = 19;
LABEL_25:
        LODWORD(v43) = ClearStallContext;
        LODWORD(v42) = v33;
        LODWORD(v41) = *(unsigned __int8 *)(v34 + 135);
        goto LABEL_5;
      }
    }
    v35 = *(_BYTE *)(v19 + 37);
  }
  else
  {
    *(_BYTE *)(v19 + 37) = 0;
    v35 = 0;
  }
  ClearStallContext = TR_Create((_DWORD)v8, v19, v47, v35 != 0, v19 + 88);
  if ( ClearStallContext < 0 )
  {
    v33 = *(_DWORD *)(v19 + 144);
    v34 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            a2,
            off_1C004B2F0);
    v17 = 20;
    goto LABEL_25;
  }
  WdfQueue = TR_GetWdfQueue(*(_QWORD *)(v19 + 88));
  ((void (__fastcall *)(_QWORD, __int64, __int64))qword_1C004C8B8)(
    *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.32,
    v47,
    WdfQueue);
  if ( *(_DWORD *)(v19 + 144) == 1 )
    *(_QWORD *)(*(_QWORD *)(v19 + 16) + 176LL) = v19;
  v37 = *(_QWORD *)(v19 + 16);
  *(_QWORD *)(v19 + 24) = v47;
  UsbDevice_AddEndpointToDeviceEndpointList(v37, v47, (_QWORD *)(v19 + 64));
  Etw_EndpointCreate(v38, (_QWORD *)v19);
  return (unsigned int)ClearStallContext;
}
