/*
 * XREFs of MiGetVmPartition @ 0x1402139C8
 * Callers:
 *     MiFillPagedPoolLockedDown @ 0x1406B6770 (MiFillPagedPoolLockedDown.c)
 *     MiCommitEnclavePages @ 0x1406BAC74 (MiCommitEnclavePages.c)
 *     MiCopyPagesIntoEnclave @ 0x1406BAD94 (MiCopyPagesIntoEnclave.c)
 *     MiCreateEnclave @ 0x1406BB47C (MiCreateEnclave.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVmPartition(__int64 a1)
{
  return *(_QWORD *)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(a1 + 172));
}
