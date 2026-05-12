/*
 * XREFs of PortPassThroughFreeIrp @ 0x1C0001A38
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0001724 (RaUnitAtaPassThroughIoctl.c)
 *     PortpCompleteRequestIrp @ 0x1C0048DC0 (PortpCompleteRequestIrp.c)
 *     PortPassThroughExSendAsync @ 0x1C00689F0 (PortPassThroughExSendAsync.c)
 *     PortPassThroughSendAsync @ 0x1C0068F98 (PortPassThroughSendAsync.c)
 * Callees:
 *     <none>
 */

void __fastcall PortPassThroughFreeIrp(PIRP Irp)
{
  struct _MDL *MdlAddress; // rcx

  MdlAddress = Irp->MdlAddress;
  if ( MdlAddress )
  {
    MmUnlockPages(MdlAddress);
    IoFreeMdl(Irp->MdlAddress);
  }
  Irp->MdlAddress = 0LL;
  IoFreeIrp(Irp);
}
