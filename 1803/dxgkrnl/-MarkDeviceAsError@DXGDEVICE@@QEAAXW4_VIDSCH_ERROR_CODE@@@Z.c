/*
 * XREFs of ?MarkDeviceAsError@DXGDEVICE@@QEAAXW4_VIDSCH_ERROR_CODE@@@Z @ 0x1C0099008
 * Callers:
 *     DxgkMarkDeviceAsError @ 0x1C00988D0 (DxgkMarkDeviceAsError.c)
 *     ?StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@@Z @ 0x1C015C1B4 (-StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00F263C (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::MarkDeviceAsError(__int64 a1)
{
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 520LL) + 8LL) + 208LL))(*(_QWORD *)(a1 + 616));
  return DXGDEVICE::FlushScheduler(a1, 3LL);
}
