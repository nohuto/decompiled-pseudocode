/*
 * XREFs of StorFreeSynchronousScsiRequest @ 0x1C0011338
 * Callers:
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C00111D4 (RaidUnitSendSrbIoControlSynchronously.c)
 *     RaidUnitLogSenseTemperatureSrb @ 0x1C003DA58 (RaidUnitLogSenseTemperatureSrb.c)
 *     RaidUnitResetTarget @ 0x1C003E240 (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1C003E4F0 (RaidUnitResetUnit.c)
 *     RaidUnitSendSrbProtocolCommandSynchronously @ 0x1C003E800 (RaidUnitSendSrbProtocolCommandSynchronously.c)
 * Callees:
 *     <none>
 */

void __fastcall StorFreeSynchronousScsiRequest(IRP *a1)
{
  struct _MDL *MdlAddress; // rcx

  MdlAddress = a1->MdlAddress;
  if ( MdlAddress )
  {
    MmUnlockPages(MdlAddress);
    IoFreeMdl(a1->MdlAddress);
  }
  IoFreeIrp(a1);
}
