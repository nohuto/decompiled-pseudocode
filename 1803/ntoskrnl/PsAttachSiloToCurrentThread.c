/*
 * XREFs of PsAttachSiloToCurrentThread @ 0x140073560
 * Callers:
 *     PspExitThread @ 0x1404B8D70 (PspExitThread.c)
 *     ExpWnfLookupPermanentName @ 0x1405178D4 (ExpWnfLookupPermanentName.c)
 *     ObpDecrementHandleCount @ 0x140519894 (ObpDecrementHandleCount.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14056FE18 (SepCleanupLUIDDeviceMapDirectory.c)
 *     EtwpEnableGuid @ 0x14058D2FC (EtwpEnableGuid.c)
 *     EtwpLogger @ 0x14058EB20 (EtwpLogger.c)
 *     NtSetInformationThread @ 0x14059B270 (NtSetInformationThread.c)
 *     ObCloseHandleTableEntry @ 0x1405A4E20 (ObCloseHandleTableEntry.c)
 *     ObpIncrementHandleCountEx @ 0x1405AB080 (ObpIncrementHandleCountEx.c)
 *     SepRmCommandServerThread @ 0x1406316F0 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x140631D90 (SepRmLsaConnectRequest.c)
 *     EtwInitializeSiloState @ 0x14063D968 (EtwInitializeSiloState.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x1407088BC (VrpHandleIoctlGetVirtualRootKey.c)
 *     DbgkInitializeServerSilo @ 0x14070E058 (DbgkInitializeServerSilo.c)
 *     PspDeleteExternalServerSiloState @ 0x140779254 (PspDeleteExternalServerSiloState.c)
 *     PspShutdownCsrProcess @ 0x140779724 (PspShutdownCsrProcess.c)
 *     PspSiloInitializeIsMultiSessionSku @ 0x140779A1C (PspSiloInitializeIsMultiSessionSku.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140779B40 (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x140779C68 (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x140779D80 (PspSiloLoadApiSets.c)
 *     SeInitServerSilo @ 0x14078C4BC (SeInitServerSilo.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x1407930F8 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1407B2700 (EtwpTrackGuidEntryRegistrations.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x1407CA2E0 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     ObCreateSiloRootDirectory @ 0x1407F63F0 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsAttachSiloToCurrentThread(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdx
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  result = *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160];
  *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160] = a1;
  return result;
}
