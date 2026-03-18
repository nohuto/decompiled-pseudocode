/*
 * XREFs of ?DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z @ 0x1C00168B4
 * Callers:
 *     VidSchiCreateDeviceInternal @ 0x1C0070C1C (VidSchiCreateDeviceInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiCreateDevice(ADAPTER_RENDER *this, struct _DXGKARG_CREATEDEVICE *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, struct _DXGKARG_CREATEDEVICE *))DxgCoreInterface[16])(this, a2);
}
