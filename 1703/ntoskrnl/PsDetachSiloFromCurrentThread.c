/*
 * XREFs of PsDetachSiloFromCurrentThread @ 0x14006F590
 * Callers:
 *     ExpWnfLookupPermanentName @ 0x1404C0014 (ExpWnfLookupPermanentName.c)
 *     ObpDecrementHandleCount @ 0x1404F5E48 (ObpDecrementHandleCount.c)
 *     ObCloseHandleTableEntry @ 0x140530A90 (ObCloseHandleTableEntry.c)
 *     ObpIncrementHandleCountEx @ 0x1405311B0 (ObpIncrementHandleCountEx.c)
 *     EtwpLogger @ 0x14054F910 (EtwpLogger.c)
 *     EtwpEnableGuid @ 0x140552C6C (EtwpEnableGuid.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14057DC20 (SepCleanupLUIDDeviceMapDirectory.c)
 *     SepRmCommandServerThread @ 0x1405C5730 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x1405C5C44 (SepRmLsaConnectRequest.c)
 *     EtwInitializeSiloState @ 0x1405C7308 (EtwInitializeSiloState.c)
 *     PspDeleteExternalServerSiloState @ 0x1406DEC14 (PspDeleteExternalServerSiloState.c)
 *     PspShutdownCsrProcess @ 0x1406DF114 (PspShutdownCsrProcess.c)
 *     PspSiloInitializeIsMultiSessionSku @ 0x1406DF40C (PspSiloInitializeIsMultiSessionSku.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1406DF530 (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x1406DF654 (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x1406DF778 (PspSiloLoadApiSets.c)
 *     SeInitServerSilo @ 0x1406F063C (SeInitServerSilo.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x1406F7524 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x140722D4C (ExpWnfAllocateNextPersistentNameSequence.c)
 *     ObCreateSiloRootDirectory @ 0x140747700 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall PsDetachSiloFromCurrentThread(__int64 a1)
{
  struct _KTHREAD *result; // rax

  result = KeGetCurrentThread();
  *(_QWORD *)&result[1].WaitBlockFill11[160] = a1;
  return result;
}
