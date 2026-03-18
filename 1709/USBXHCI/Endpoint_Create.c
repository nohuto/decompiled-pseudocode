/*
 * XREFs of Endpoint_Create @ 0x1C005AF24
 * Callers:
 *     Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd @ 0x1C005B5F0 (Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd.c)
 *     Endpoint_UcxEvtUsbDeviceEndpointAdd @ 0x1C005B850 (Endpoint_UcxEvtUsbDeviceEndpointAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x1C0005320 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00055AC (WPP_RECORDER_SF_dd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     Controller_IsSecureDevice @ 0x1C0011780 (Controller_IsSecureDevice.c)
 *     XilEndpoint_Create @ 0x1C0017594 (XilEndpoint_Create.c)
 *     Endpoint_CreateClearStallContext @ 0x1C0018368 (Endpoint_CreateClearStallContext.c)
 *     WPP_RECORDER_SF_ddq @ 0x1C001D4FC (WPP_RECORDER_SF_ddq.c)
 *     WPP_RECORDER_SF_ddqDdd @ 0x1C001D64C (WPP_RECORDER_SF_ddqDdd.c)
 *     TR_GetWdfQueue @ 0x1C00233A0 (TR_GetWdfQueue.c)
 *     UsbDevice_AddEndpointToDeviceEndpointList @ 0x1C00334F0 (UsbDevice_AddEndpointToDeviceEndpointList.c)
 *     Etw_EndpointCreate @ 0x1C0038888 (Etw_EndpointCreate.c)
 *     Endpoint_SetType @ 0x1C005B5A0 (Endpoint_SetType.c)
 *     TR_Create @ 0x1C005E82C (TR_Create.c)
 */

__int64 __fastcall Endpoint_Create(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  _QWORD *v8; // r14
  unsigned int v9; // ebx
  char IsSecureDevice; // al
  int v11; // edx
  int v12; // ecx
  int ClearStallContext; // edi
  unsigned int v14; // ebx
  __int64 v15; // rax
  unsigned __int16 v16; // r9
  unsigned int v17; // ebx
  __int64 v18; // rax
  __int64 v19; // rbx
  unsigned int v20; // ebx
  __int64 v21; // rax
  int v22; // r8d
  struct _DEVICE_OBJECT *v23; // rax
  PIO_WORKITEM WorkItem; // rax
  unsigned int v25; // ebx
  __int64 v26; // rax
  char v27; // al
  PWDF_DRIVER_GLOBALS v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  int v32; // eax
  int v33; // eax
  unsigned int v34; // ebx
  __int64 v35; // rax
  int v36; // ebx
  __int64 v37; // rax
  __int64 WdfQueue; // rax
  __int64 v39; // rcx
  __int64 v40; // rcx
  int v42; // [rsp+20h] [rbp-89h]
  __int64 v43; // [rsp+28h] [rbp-81h]
  __int64 v44; // [rsp+30h] [rbp-79h]
  __int64 v45; // [rsp+38h] [rbp-71h]
  _QWORD v46[5]; // [rsp+60h] [rbp-49h] BYREF
  _QWORD v47[13]; // [rsp+88h] [rbp-21h] BYREF
  __int64 v48; // [rsp+110h] [rbp+67h] BYREF
  __int64 v49; // [rsp+118h] [rbp+6Fh] BYREF

  v48 = a3;
  v8 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   a1,
                   off_1C004E430);
  v9 = *(unsigned __int8 *)(a4 + 2);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
    WdfDriverGlobals,
    a2,
    off_1C004E2F0);
  HIDWORD(v45) = HIDWORD(a4);
  WPP_RECORDER_SF_ddqDdd(v8[9], v9 >> 7, (v9 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F), *(_BYTE *)(a4 + 3) & 3, v42);
  memset(v47, 0, 0x38uLL);
  v47[6] = off_1C004E1D8;
  LODWORD(v47[0]) = 56;
  v47[1] = Endpoint_EvtEndpointCleanupCallback;
  v47[3] = 0x100000001LL;
  IsSecureDevice = Controller_IsSecureDevice((__int64)v8);
  v12 = v11;
  if ( IsSecureDevice )
    v12 = 2;
  LODWORD(v47[3]) = v12;
  ClearStallContext = qword_1C004F890(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.32, a2, &v48, v47, &v49);
  if ( ClearStallContext < 0 )
  {
    v14 = *(unsigned __int8 *)(a4 + 2);
    v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            a2,
            off_1C004E2F0);
    LODWORD(v45) = ClearStallContext;
    v16 = 14;
    LODWORD(v44) = (v14 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F);
    LODWORD(v43) = *(unsigned __int8 *)(v15 + 135);
LABEL_5:
    WPP_RECORDER_SF_ddd(v8[9], 2u, 0xDu, v16, (__int64)&WPP_70dcbfe646ea320c9194bc4b71c40f15_Traceguids, v43, v44, v45);
    return (unsigned int)ClearStallContext;
  }
  v17 = *(unsigned __int8 *)(a4 + 2);
  v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          a2,
          off_1C004E2F0);
  WPP_RECORDER_SF_ddq(
    v8[9],
    4u,
    0xDu,
    0xFu,
    (__int64)&WPP_70dcbfe646ea320c9194bc4b71c40f15_Traceguids,
    *(unsigned __int8 *)(v18 + 135),
    (v17 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F),
    v49);
  v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          v49,
          off_1C004E1D8);
  KeInitializeEvent((PRKEVENT)(v19 + 40), NotificationEvent, 0);
  memset(v46, 0, sizeof(v46));
  LODWORD(v46[2]) = 0;
  LODWORD(v46[3]) = 0;
  LODWORD(v46[0]) = 40;
  v46[1] = Endpoint_WdfEvtStateMachineTimer;
  BYTE4(v46[2]) = 1;
  memset(v47, 0, 0x38uLL);
  v47[4] = v49;
  LODWORD(v47[0]) = 56;
  v47[3] = 0x100000001LL;
  ClearStallContext = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, __int64))(WdfFunctions_01015
                                                                                                  + 2544))(
                        WdfDriverGlobals,
                        v46,
                        v47,
                        v19 + 1296);
  if ( ClearStallContext < 0 )
  {
    v20 = *(unsigned __int8 *)(a4 + 2);
    v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            a2,
            off_1C004E2F0);
    v16 = 16;
    v22 = (v20 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F);
LABEL_8:
    LODWORD(v45) = ClearStallContext;
    LODWORD(v44) = v22;
    LODWORD(v43) = *(unsigned __int8 *)(v21 + 135);
    goto LABEL_5;
  }
  v23 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 248))(
                                   WdfDriverGlobals,
                                   *v8);
  WorkItem = IoAllocateWorkItem(v23);
  *(_QWORD *)(v19 + 1272) = WorkItem;
  if ( !WorkItem )
  {
    v25 = *(unsigned __int8 *)(a4 + 2);
    v26 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            a2,
            off_1C004E2F0);
    LODWORD(v44) = (v25 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F);
    LODWORD(v43) = *(unsigned __int8 *)(v26 + 135);
    WPP_RECORDER_SF_dd(v8[9], 2u, 0xDu, 0x11u, (__int64)&WPP_70dcbfe646ea320c9194bc4b71c40f15_Traceguids, v43, v44);
    return (unsigned int)-1073741670;
  }
  *(_DWORD *)(v19 + 1140) = 2000;
  *(_DWORD *)(v19 + 1264) = 2000;
  *(_DWORD *)(v19 + 1168) = 0;
  *(_QWORD *)(v19 + 1256) = &ESMStateTable;
  *(_QWORD *)(v19 + 1248) = v19;
  v27 = Controller_IsSecureDevice((__int64)v8);
  v28 = WdfDriverGlobals;
  *(_BYTE *)(v19 + 1306) = v27;
  v29 = WdfFunctions_01015;
  *(_QWORD *)v19 = v8;
  *(_QWORD *)(v19 + 8) = a2;
  v30 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(v29 + 1616))(v28, a2, off_1C004E2F0);
  v31 = a5;
  *(_QWORD *)(v19 + 16) = v30;
  *(_QWORD *)(v19 + 136) = 0LL;
  *(_QWORD *)(v19 + 264) = 0LL;
  *(_DWORD *)(v19 + 96) = *(_DWORD *)a4;
  *(_WORD *)(v19 + 100) = *(_WORD *)(a4 + 4);
  *(_BYTE *)(v19 + 102) = *(_BYTE *)(a4 + 6);
  if ( v31 )
  {
    *(_DWORD *)(v19 + 103) = *(_DWORD *)v31;
    *(_WORD *)(v19 + 107) = *(_WORD *)(v31 + 4);
  }
  if ( a6 )
    *(_QWORD *)(v19 + 109) = *a6;
  Endpoint_SetType(v19);
  v32 = *(_BYTE *)(v19 + 98) & 0xF;
  if ( (unsigned int)(*(_DWORD *)(v19 + 120) - 1) > 2 )
    v33 = 2 * v32 + 1;
  else
    v33 = 2 * v32;
  *(_DWORD *)(v19 + 144) = v33;
  ClearStallContext = XilEndpoint_Create(v19);
  if ( ClearStallContext < 0 )
  {
    v34 = *(unsigned __int8 *)(a4 + 2);
    v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            a2,
            off_1C004E2F0);
    v16 = 18;
    v22 = (v34 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F);
    goto LABEL_8;
  }
  if ( *(_DWORD *)(*(_QWORD *)(v19 + 16) + 20LL) == 3
    && (*(_BYTE *)(v19 + 99) & 3) == 2
    && (*(_BYTE *)(v19 + 106) & 0x1F) != 0 )
  {
    v35 = *(_QWORD *)v19;
    *(_BYTE *)(v19 + 37) = 1;
    if ( (*(_QWORD *)(v35 + 272) & 0x200000LL) != 0 )
    {
      ClearStallContext = Endpoint_CreateClearStallContext(v19);
      if ( ClearStallContext < 0 )
      {
        v36 = *(_DWORD *)(v19 + 144);
        v37 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                a2,
                off_1C004E2F0);
        v16 = 19;
LABEL_26:
        LODWORD(v45) = ClearStallContext;
        LODWORD(v44) = v36;
        LODWORD(v43) = *(unsigned __int8 *)(v37 + 135);
        goto LABEL_5;
      }
    }
  }
  else
  {
    *(_BYTE *)(v19 + 37) = 0;
  }
  ClearStallContext = TR_Create((_DWORD)v8, v19, v49, *(_BYTE *)(v19 + 37) != 0, v19 + 88);
  if ( ClearStallContext < 0 )
  {
    v36 = *(_DWORD *)(v19 + 144);
    v37 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            a2,
            off_1C004E2F0);
    v16 = 20;
    goto LABEL_26;
  }
  WdfQueue = TR_GetWdfQueue(*(_QWORD *)(v19 + 88));
  ((void (__fastcall *)(_QWORD, __int64, __int64))qword_1C004F8B8)(
    *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.32,
    v49,
    WdfQueue);
  if ( *(_DWORD *)(v19 + 144) == 1 )
    *(_QWORD *)(*(_QWORD *)(v19 + 16) + 176LL) = v19;
  v39 = *(_QWORD *)(v19 + 16);
  *(_QWORD *)(v19 + 24) = v49;
  UsbDevice_AddEndpointToDeviceEndpointList(v39, v49, (_QWORD *)(v19 + 64));
  Etw_EndpointCreate(v40, (_QWORD *)v19);
  return (unsigned int)ClearStallContext;
}
