/*
 * XREFs of MiGetVmPartition @ 0x1400D2E10
 * Callers:
 *     MiBuildNewCloneDescriptor @ 0x1405BF59C (MiBuildNewCloneDescriptor.c)
 *     MiAddPagesToEnclave @ 0x140750E84 (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x140751610 (MiCopyPagesIntoEnclave.c)
 *     MiCreateHardwareEnclave @ 0x140751D24 (MiCreateHardwareEnclave.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVmPartition(__int64 a1)
{
  return *(_QWORD *)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(a1 + 174));
}
