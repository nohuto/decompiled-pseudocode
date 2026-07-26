/*
 * XREFs of ndisVBusNmrInitializeClient @ 0x1C011E5B8
 * Callers:
 *     DriverEntry @ 0x1C011D0D0 (DriverEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS ndisVBusNmrInitializeClient()
{
  LOBYTE(WPP_MAIN_CB.DeviceObjectExtension) = 0;
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)&WPP_MAIN_CB.Reserved);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&WPP_MAIN_CB.Reserved);
  unk_1C0099120 = 0LL;
  unk_1C0099118 = ndisVBusDetachComplete;
  *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) = 0LL;
  WPP_MAIN_CB.Dpc.ProcessorHistory = (unsigned __int64)ndisVBusNmrClientAttachProvider;
  LODWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next) = 4718592;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))ndisVBusNmrClientDetachProvider;
  LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) = 2621441;
  WPP_MAIN_CB.Dpc.DeferredContext = ndisFakeMiniportCancelSendPackets;
  WPP_MAIN_CB.Dpc.SystemArgument2 = &NPI_NDIS_VBUS_INTERFACE_ID;
  WPP_MAIN_CB.Dpc.DpcData = (void *)&NPI_MS_NDIS_MODULEID;
  WPP_MAIN_CB.ActiveThreadCount = 0;
  WPP_MAIN_CB.SecurityDescriptor = 0LL;
  return NmrRegisterClient(
           (PNPI_CLIENT_CHARACTERISTICS)&WPP_MAIN_CB.Dpc.DpcListEntry,
           0LL,
           (PHANDLE)&WPP_MAIN_CB.DeviceLock);
}
