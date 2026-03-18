/*
 * XREFs of PspGetServerSiloStatePointer @ 0x140283E4C
 * Callers:
 *     PsStartSiloMonitor @ 0x140647BE0 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x14077D330 (PsUnregisterSiloMonitor.c)
 *     PspMarkServerSiloAsTerminating @ 0x14077D56C (PspMarkServerSiloAsTerminating.c)
 *     PspNotifyServerSiloCreation @ 0x14077D614 (PspNotifyServerSiloCreation.c)
 *     PspNotifyServerSiloTermination @ 0x14077D71C (PspNotifyServerSiloTermination.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetServerSiloStatePointer(__int64 a1)
{
  return *(_QWORD *)(a1 + 1256) + 1088LL;
}
