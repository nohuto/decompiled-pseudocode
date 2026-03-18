/*
 * XREFs of McTemplateK0pqqqq @ 0x1C0042734
 * Callers:
 *     DpIndicateChildStatus @ 0x1C0038A90 (DpIndicateChildStatus.c)
 *     DpiMiracastIoCompleteRoutine @ 0x1C003D8B0 (DpiMiracastIoCompleteRoutine.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C009EEFC (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C00AC42C (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ??$CreateVidMmAllocations@U_DXGK_ALLOCATIONINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@EPEAVCOREDEVICEACCESS@@@Z @ 0x1C00EA460 (--$CreateVidMmAllocations@U_DXGK_ALLOCATIONINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C0109590 (DpiPdoHandleOpmIoctls.c)
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C014EE2C (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C0159E20 (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     DpiMiracastSendAsyncUserModeRequest @ 0x1C01FFA78 (DpiMiracastSendAsyncUserModeRequest.c)
 *     DpiMiracastSendSyncUserModeRequest @ 0x1C01FFD78 (DpiMiracastSendSyncUserModeRequest.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C020A0CC (DpiDxgkDdiDisplayDetectControl.c)
 *     DpiDxgkDdiNotifyAcpiEvent @ 0x1C020A410 (DpiDxgkDdiNotifyAcpiEvent.c)
 *     DpiDxgkDdiSetPowerState @ 0x1C020ABE0 (DpiDxgkDdiSetPowerState.c)
 * Callees:
 *     McGenEventWriteKM @ 0x1C000ACD4 (McGenEventWriteKM.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pqqqq(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-39h] BYREF
  va_list v5; // [rsp+40h] [rbp-29h]
  __int64 v6; // [rsp+48h] [rbp-21h]
  va_list v7; // [rsp+50h] [rbp-19h]
  __int64 v8; // [rsp+58h] [rbp-11h]
  va_list v9; // [rsp+60h] [rbp-9h]
  __int64 v10; // [rsp+68h] [rbp-1h]
  va_list v11; // [rsp+70h] [rbp+7h]
  __int64 v12; // [rsp+78h] [rbp+Fh]
  va_list v13; // [rsp+80h] [rbp+17h]
  __int64 v14; // [rsp+88h] [rbp+1Fh]
  __int64 v15; // [rsp+C8h] [rbp+5Fh] BYREF
  va_list va; // [rsp+C8h] [rbp+5Fh]
  __int64 v17; // [rsp+D0h] [rbp+67h] BYREF
  va_list va1; // [rsp+D0h] [rbp+67h]
  __int64 v19; // [rsp+D8h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+D8h] [rbp+6Fh]
  __int64 v21; // [rsp+E0h] [rbp+77h] BYREF
  va_list va3; // [rsp+E0h] [rbp+77h]
  va_list va4; // [rsp+E8h] [rbp+7Fh] BYREF

  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v15 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v17 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v19 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v21 = va_arg(va4, _QWORD);
  v6 = 8LL;
  va_copy(v5, va);
  v8 = 4LL;
  va_copy(v7, va1);
  v10 = 4LL;
  va_copy(v9, va2);
  va_copy(v11, va3);
  va_copy(v13, va4);
  v12 = 4LL;
  v14 = 4LL;
  return McGenEventWriteKM(&DxgkControlGuid_Context, a2, a3, 6u, &v4);
}
