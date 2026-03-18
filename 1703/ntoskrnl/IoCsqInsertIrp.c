/*
 * XREFs of IoCsqInsertIrp @ 0x14001DD40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall IoCsqInsertIrp(PIO_CSQ Csq, PIRP Irp, PIO_CSQ_IRP_CONTEXT Context)
{
  IoCsqInsertIrpEx(Csq, Irp, Context, 0LL);
}
