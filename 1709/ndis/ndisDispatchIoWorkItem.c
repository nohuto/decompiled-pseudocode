/*
 * XREFs of ndisDispatchIoWorkItem @ 0x1C00C6190
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisDispatchIoWorkItem(PDEVICE_OBJECT DeviceObject, void (__fastcall **Context)(_QWORD))
{
  Context[4](Context[5]);
}
