/*
 * XREFs of RaidBuildMdlForXrb @ 0x1C0006174
 * Callers:
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006C4C (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C000C414 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C002EB18 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C002EFC4 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaWmiPassToMiniPort @ 0x1C0063F38 (RaWmiPassToMiniPort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidBuildMdlForXrb(__int64 a1, void *a2, ULONG a3)
{
  struct _MDL *Mdl; // rax

  Mdl = IoAllocateMdl(a2, a3, 0, 0, 0LL);
  *(_QWORD *)(a1 + 104) = Mdl;
  if ( !Mdl )
    return 3221225495LL;
  *(_BYTE *)(a1 + 16) |= 1u;
  MmBuildMdlForNonPagedPool(Mdl);
  return 0LL;
}
