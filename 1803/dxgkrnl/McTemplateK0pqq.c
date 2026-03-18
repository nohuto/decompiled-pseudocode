/*
 * XREFs of McTemplateK0pqq @ 0x1C002783C
 * Callers:
 *     ?PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z @ 0x1C0025FA4 (-PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z.c)
 *     ?ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ @ 0x1C0026270 (-ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ.c)
 *     ?SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z @ 0x1C0026A20 (-SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z.c)
 *     ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z @ 0x1C0026EF0 (-SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z.c)
 *     ?DxgkPowerRuntimeComponentActiveCallback@@YAXPEAXK@Z @ 0x1C002B970 (-DxgkPowerRuntimeComponentActiveCallback@@YAXPEAXK@Z.c)
 *     ?DxgkPowerRuntimeComponentIdleCallback@@YAXPEAXK@Z @ 0x1C002B9D0 (-DxgkPowerRuntimeComponentIdleCallback@@YAXPEAXK@Z.c)
 *     ?DxgkPowerRuntimeDevicePowerNotRequiredCallback@@YAXPEAX@Z @ 0x1C002BB00 (-DxgkPowerRuntimeDevicePowerNotRequiredCallback@@YAXPEAX@Z.c)
 *     ?DxgkPowerRuntimeDevicePowerRequiredCallback@@YAXPEAX@Z @ 0x1C002BB60 (-DxgkPowerRuntimeDevicePowerRequiredCallback@@YAXPEAX@Z.c)
 *     DpiRequestDevicePowerState @ 0x1C0039D14 (DpiRequestDevicePowerState.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00A619C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?HandleAdapterMultiPlaneDisableEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C0149640 (-HandleAdapterMultiPlaneDisableEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     ?HandleAdapterTeardownEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C0149710 (-HandleAdapterTeardownEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     ?CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C0152404 (-CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     DpiDxgkDdiExchangePreStartInfo @ 0x1C020A260 (DpiDxgkDdiExchangePreStartInfo.c)
 *     DpiDxgkDdiGetChildContainerId @ 0x1C020A348 (DpiDxgkDdiGetChildContainerId.c)
 *     DpiDxgkDdiNotifySurpriseRemoval @ 0x1C020A518 (DpiDxgkDdiNotifySurpriseRemoval.c)
 *     DpiDxgkDdiSetTargetAdjustedColorimetry @ 0x1C020ACD4 (DpiDxgkDdiSetTargetAdjustedColorimetry.c)
 * Callees:
 *     McGenEventWriteKM @ 0x1C000ACD4 (McGenEventWriteKM.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pqq(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-50h] BYREF
  va_list v5; // [rsp+40h] [rbp-40h]
  __int64 v6; // [rsp+48h] [rbp-38h]
  va_list v7; // [rsp+50h] [rbp-30h]
  __int64 v8; // [rsp+58h] [rbp-28h]
  va_list v9; // [rsp+60h] [rbp-20h]
  __int64 v10; // [rsp+68h] [rbp-18h]
  __int64 v11; // [rsp+A8h] [rbp+28h] BYREF
  va_list va; // [rsp+A8h] [rbp+28h]
  __int64 v13; // [rsp+B0h] [rbp+30h] BYREF
  va_list va1; // [rsp+B0h] [rbp+30h]
  va_list va2; // [rsp+B8h] [rbp+38h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v13 = va_arg(va2, _QWORD);
  v6 = 8LL;
  v8 = 4LL;
  va_copy(v5, va);
  v10 = 4LL;
  va_copy(v7, va1);
  va_copy(v9, va2);
  return McGenEventWriteKM(&DxgkControlGuid_Context, a2, a3, 4u, &v4);
}
