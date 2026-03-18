/*
 * XREFs of PspGetServerSiloStatePointer @ 0x14023898C
 * Callers:
 *     NtSetInformationJobObject @ 0x14055E0D0 (NtSetInformationJobObject.c)
 *     PsStartSiloMonitor @ 0x1405CB6A0 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x1406E3000 (PsUnregisterSiloMonitor.c)
 *     PspMarkServerSiloAsTerminating @ 0x1406E3238 (PspMarkServerSiloAsTerminating.c)
 *     PspNotifyServerSiloCreation @ 0x1406E32E0 (PspNotifyServerSiloCreation.c)
 *     PspNotifyServerSiloTermination @ 0x1406E33E8 (PspNotifyServerSiloTermination.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetServerSiloStatePointer(__int64 a1)
{
  return *(_QWORD *)(a1 + 1256) + 1056LL;
}
