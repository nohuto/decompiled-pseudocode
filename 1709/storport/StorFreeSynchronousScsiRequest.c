/*
 * XREFs of StorFreeSynchronousScsiRequest @ 0x1C001AB60
 * Callers:
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C001A9FC (RaidUnitSendSrbIoControlSynchronously.c)
 *     RaidUnitAbortSrbCompletion @ 0x1C003DFD0 (RaidUnitAbortSrbCompletion.c)
 *     RaidUnitLogSenseTemperatureSrb @ 0x1C003E928 (RaidUnitLogSenseTemperatureSrb.c)
 *     RaidUnitResetTarget @ 0x1C003F17C (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1C003F428 (RaidUnitResetUnit.c)
 *     RaidUnitSendSrbProtocolCommandSynchronously @ 0x1C003F738 (RaidUnitSendSrbProtocolCommandSynchronously.c)
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
