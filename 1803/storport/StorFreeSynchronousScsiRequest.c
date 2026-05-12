/*
 * XREFs of StorFreeSynchronousScsiRequest @ 0x1C0015A04
 * Callers:
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C0015834 (RaidUnitSendSrbIoControlSynchronously.c)
 *     RaidUnitAbortSrbCompletion @ 0x1C003C630 (RaidUnitAbortSrbCompletion.c)
 *     RaidUnitLogSenseTemperatureSrb @ 0x1C003CF08 (RaidUnitLogSenseTemperatureSrb.c)
 *     RaidUnitResetTarget @ 0x1C003D6E4 (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1C003D990 (RaidUnitResetUnit.c)
 *     RaidUnitSendSrbProtocolCommandSynchronously @ 0x1C003DCA8 (RaidUnitSendSrbProtocolCommandSynchronously.c)
 * Callees:
 *     <none>
 */

void __fastcall StorFreeSynchronousScsiRequest(PIRP Irp)
{
  struct _MDL *MdlAddress; // rcx

  MdlAddress = Irp->MdlAddress;
  if ( MdlAddress )
  {
    MmUnlockPages(MdlAddress);
    IoFreeMdl(Irp->MdlAddress);
  }
  IoFreeIrp(Irp);
}
