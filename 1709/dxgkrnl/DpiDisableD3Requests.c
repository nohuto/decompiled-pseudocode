/*
 * XREFs of DpiDisableD3Requests @ 0x1C000F224
 * Callers:
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C0092F9C (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 *     DpiGetDxgAdapterSafe @ 0x1C00FB894 (DpiGetDxgAdapterSafe.c)
 *     DpiFdoHandleDevicePower @ 0x1C0101690 (DpiFdoHandleDevicePower.c)
 *     DxgkChangeD3RequestsState @ 0x1C0104A10 (DxgkChangeD3RequestsState.c)
 *     DpiFdoInvalidateChildWorkItem @ 0x1C01DE960 (DpiFdoInvalidateChildWorkItem.c)
 *     ?DpiIndirectCbDisableRenderD3RequestsWorker@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C01E5070 (-DpiIndirectCbDisableRenderD3RequestsWorker@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     DpiLdaHandleQueryDeviceRelations @ 0x1C01E7CE0 (DpiLdaHandleQueryDeviceRelations.c)
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
