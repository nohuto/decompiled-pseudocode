/*
 * XREFs of ?UpdatePriorityClass@DXGDEVICE@@QEAAX_N@Z @ 0x1C00139CC
 * Callers:
 *     VidSchSyncPriorityDevice @ 0x1C0073190 (VidSchSyncPriorityDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGDEVICE::UpdatePriorityClass(DXGDEVICE *this)
{
  ((void (__fastcall *)(DXGDEVICE *))DxgCoreInterface[8])(this);
}
