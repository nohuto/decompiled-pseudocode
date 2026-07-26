/*
 * XREFs of ndisVBusNmrInitializeClient @ 0x1C01127F4
 * Callers:
 *     DriverEntry @ 0x1C01129E0 (DriverEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS ndisVBusNmrInitializeClient()
{
  byte_1C0092118 = 0;
  ExInitializeRundownProtection(&RunRef);
  ExWaitForRundownProtectionRelease(&RunRef);
  WorkItem.Parameter = 0LL;
  WorkItem.WorkerRoutine = ndisVBusDetachComplete;
  WorkItem.List.Flink = 0LL;
  qword_1C00920B8 = (__int64)ndisVBusNmrClientAttachProvider;
  ndisVBus = 4718592;
  qword_1C00920C0 = (__int64)ndisVBusNmrClientDetachProvider;
  dword_1C00920D0 = 2621441;
  qword_1C00920C8 = (__int64)ndisFakeMiniportCancelSendPackets;
  qword_1C00920D8 = (__int64)&NPI_NDIS_VBUS_INTERFACE_ID;
  qword_1C00920E0 = (__int64)&NPI_MS_NDIS_MODULEID;
  dword_1C00920E8 = 0;
  qword_1C00920F0 = 0LL;
  return NmrRegisterClient((PNPI_CLIENT_CHARACTERISTICS)&ndisVBus, 0LL, &qword_1C00920F8);
}
