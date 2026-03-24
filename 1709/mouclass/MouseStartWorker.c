/*
 * XREFs of MouseStartWorker @ 0x1C0004170
 * Callers:
 *     <none>
 * Callees:
 *     MouseStart @ 0x1C0003F10 (MouseStart.c)
 */

void __fastcall MouseStartWorker(__int64 DeviceObject, PIO_WORKITEM *Context)
{
  IRP *v2; // rbx
  struct _IO_REMOVE_LOCK *v4; // rdi
  NTSTATUS v5; // eax

  v2 = (IRP *)Context[1];
  v4 = *(struct _IO_REMOVE_LOCK **)(DeviceObject + 64);
  v5 = MouseStart(DeviceObject, (__int64)Context);
  v2->IoStatus.Information = 0LL;
  v2->IoStatus.Status = v5;
  IofCompleteRequest(v2, 0);
  IoFreeWorkItem(*Context);
  ExFreePoolWithTag(Context, 0);
  IoReleaseRemoveLockEx(v4 + 1, MouseStartWorker, 0x20u);
}
