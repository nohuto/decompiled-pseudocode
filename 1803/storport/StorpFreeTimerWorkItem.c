/*
 * XREFs of StorpFreeTimerWorkItem @ 0x1C0032690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall StorpFreeTimerWorkItem(PDEVICE_OBJECT DeviceObject, PIO_WORKITEM *Context)
{
  PIO_WORKITEM v2; // rdi

  v2 = *Context;
  KeFlushQueuedDpcs();
  IoFreeWorkItem(Context[19]);
  ExFreePoolWithTag(Context, 0x54416152u);
  _InterlockedDecrement((volatile signed __int32 *)v2 + 1052);
}
