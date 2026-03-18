/*
 * XREFs of PspGetServerSiloStatePointer @ 0x14024DA6C
 * Callers:
 *     NtSetInformationJobObject @ 0x140510C80 (NtSetInformationJobObject.c)
 *     PsStartSiloMonitor @ 0x1405DE8C0 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x1407195D0 (PsUnregisterSiloMonitor.c)
 *     PspMarkServerSiloAsTerminating @ 0x14071980C (PspMarkServerSiloAsTerminating.c)
 *     PspNotifyServerSiloCreation @ 0x1407198B4 (PspNotifyServerSiloCreation.c)
 *     PspNotifyServerSiloTermination @ 0x1407199BC (PspNotifyServerSiloTermination.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetServerSiloStatePointer(__int64 a1)
{
  return *(_QWORD *)(a1 + 1256) + 1088LL;
}
