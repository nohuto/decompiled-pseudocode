/*
 * XREFs of McTemplateK0pqq @ 0x1C0020624
 * Callers:
 *     ?PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z @ 0x1C001F0B0 (-PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z.c)
 *     ?ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ @ 0x1C001F2CC (-ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ.c)
 *     ?SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z @ 0x1C001F9C4 (-SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z.c)
 *     ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z @ 0x1C001FE94 (-SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z.c)
 *     ?DxgkPowerRuntimeComponentActiveCallback@@YAXPEAXK@Z @ 0x1C0023740 (-DxgkPowerRuntimeComponentActiveCallback@@YAXPEAXK@Z.c)
 *     ?DxgkPowerRuntimeComponentIdleCallback@@YAXPEAXK@Z @ 0x1C00237A0 (-DxgkPowerRuntimeComponentIdleCallback@@YAXPEAXK@Z.c)
 *     ?DxgkPowerRuntimeDevicePowerNotRequiredCallback@@YAXPEAX@Z @ 0x1C00238D0 (-DxgkPowerRuntimeDevicePowerNotRequiredCallback@@YAXPEAX@Z.c)
 *     ?DxgkPowerRuntimeDevicePowerRequiredCallback@@YAXPEAX@Z @ 0x1C0023930 (-DxgkPowerRuntimeDevicePowerRequiredCallback@@YAXPEAX@Z.c)
 *     DpiRequestDevicePowerState @ 0x1C002D9A0 (DpiRequestDevicePowerState.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0083A38 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@PEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00AC648 (-CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@PEAUDXGK_STEREO_PARAMS@@@.c)
 *     DpiDxgkDdiGetChildContainerId @ 0x1C0104E38 (DpiDxgkDdiGetChildContainerId.c)
 *     DpiSetTargetAdjustedColorimetry @ 0x1C0123798 (DpiSetTargetAdjustedColorimetry.c)
 *     DpiDxgkDdiExchangePreStartInfo @ 0x1C0123C14 (DpiDxgkDdiExchangePreStartInfo.c)
 *     ?HandleAdapterMultiPlaneDisableEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C0171880 (-HandleAdapterMultiPlaneDisableEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     ?HandleAdapterTeardownEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C0171950 (-HandleAdapterTeardownEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     DpiDxgkDdiNotifySurpriseRemoval @ 0x1C01E9994 (DpiDxgkDdiNotifySurpriseRemoval.c)
 * Callees:
 *     McGenEventWriteKM @ 0x1C000D744 (McGenEventWriteKM.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
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
