/*
 * XREFs of PepRegisterBootVetoes @ 0x1C002D120
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000C910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PepRegisterBootVetoes(PDEVICE_OBJECT DeviceObject, struct _IO_WORKITEM *Context)
{
  IoFreeWorkItem(Context);
  PoFxProcessorNotification(*((_QWORD *)DeviceObject->DeviceExtension + 136), 26LL, 0LL);
  ((void (*)(void))qword_1C0011660)();
}
