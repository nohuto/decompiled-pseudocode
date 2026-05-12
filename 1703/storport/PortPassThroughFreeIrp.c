/*
 * XREFs of PortPassThroughFreeIrp @ 0x1C00019D0
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0003EE4 (RaUnitAtaPassThroughIoctl.c)
 *     PortpCompleteRequestIrp @ 0x1C0047820 (PortpCompleteRequestIrp.c)
 *     PortPassThroughExSendAsync @ 0x1C00661B4 (PortPassThroughExSendAsync.c)
 *     PortPassThroughSendAsync @ 0x1C0066750 (PortPassThroughSendAsync.c)
 * Callees:
 *     <none>
 */

void __fastcall PortPassThroughFreeIrp(IRP *a1)
{
  struct _MDL *MdlAddress; // rcx

  MdlAddress = a1->MdlAddress;
  if ( MdlAddress )
  {
    MmUnlockPages(MdlAddress);
    IoFreeMdl(a1->MdlAddress);
  }
  a1->MdlAddress = 0LL;
  IoFreeIrp(a1);
}
