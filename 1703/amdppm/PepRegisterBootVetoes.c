/*
 * XREFs of PepRegisterBootVetoes @ 0x1C0020C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PepRegisterBootVetoes(PDEVICE_OBJECT DeviceObject, struct _IO_WORKITEM *Context)
{
  IoFreeWorkItem(Context);
  PoFxProcessorNotification(*((_QWORD *)DeviceObject->DeviceExtension + 136), 26LL, 0LL);
  ((void (*)(void))qword_1C0011630)();
}
