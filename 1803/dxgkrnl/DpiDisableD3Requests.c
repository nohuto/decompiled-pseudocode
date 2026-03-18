/*
 * XREFs of DpiDisableD3Requests @ 0x1C0001CAC
 * Callers:
 *     DpiGetDxgAdapterSafe @ 0x1C00A29F4 (DpiGetDxgAdapterSafe.c)
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C00F2C74 (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 *     DxgkChangeD3RequestsState @ 0x1C0167290 (DxgkChangeD3RequestsState.c)
 *     DpiFdoHandleDevicePower @ 0x1C01F05A0 (DpiFdoHandleDevicePower.c)
 *     DpiFdoDispatchCleanupAndClose @ 0x1C01F2B60 (DpiFdoDispatchCleanupAndClose.c)
 *     DpiFdoInvalidateChildWorkItem @ 0x1C01F8030 (DpiFdoInvalidateChildWorkItem.c)
 *     ?DpiIndirectCbDisableRenderD3RequestsWorker@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C0205B00 (-DpiIndirectCbDisableRenderD3RequestsWorker@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     DpiLdaHandleQueryDeviceRelations @ 0x1C0209330 (DpiLdaHandleQueryDeviceRelations.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiDisableD3Requests(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 64);
  _InterlockedIncrement((volatile signed __int32 *)(result + 3912));
  return result;
}
