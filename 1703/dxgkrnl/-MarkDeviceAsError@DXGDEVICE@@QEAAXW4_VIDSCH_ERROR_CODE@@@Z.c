/*
 * XREFs of ?MarkDeviceAsError@DXGDEVICE@@QEAAXW4_VIDSCH_ERROR_CODE@@@Z @ 0x1C008B980
 * Callers:
 *     DxgkMarkDeviceAsError @ 0x1C008B7C0 (DxgkMarkDeviceAsError.c)
 *     ?StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@@Z @ 0x1C017458C (-StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGDEVICE::MarkDeviceAsError(__int64 a1)
{
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL) + 8LL) + 208LL))(*(_QWORD *)(a1 + 600));
  return DXGDEVICE::FlushScheduler(a1, 3LL);
}
