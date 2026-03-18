/*
 * XREFs of MmIsSessionLeaderProcess @ 0x14060B830
 * Callers:
 *     PspAllocateProcess @ 0x1404ED888 (PspAllocateProcess.c)
 *     MiInitializeSessionGlobals @ 0x14060B700 (MiInitializeSessionGlobals.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1400A5690 (PsGetCurrentServerSiloGlobals.c)
 */

_BOOL8 __fastcall MmIsSessionLeaderProcess(__int64 a1)
{
  return a1 == *((_QWORD *)PsGetCurrentServerSiloGlobals() + 109);
}
