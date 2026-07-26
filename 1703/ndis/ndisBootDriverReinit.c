/*
 * XREFs of ndisBootDriverReinit @ 0x1C00BE870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisBootDriverReinit(struct _DRIVER_OBJECT *DriverObject, PVOID Context, ULONG Count)
{
  IoRegisterDriverReinitialization(DriverObject, (PDRIVER_REINITIALIZE)ndisDriverReinit, Context);
}
