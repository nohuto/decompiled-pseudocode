/*
 * XREFs of DpiFdoDispatchPower @ 0x1C01036C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DpiFdoDispatchPower(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options )
    return DpiFdoHandleDevicePower(a1, a2);
  else
    return DpiFdoHandleSystemPower(a1, a2);
}
