/*
 * XREFs of PsAttachSiloToCurrentThread @ 0x1400AF1A0
 * Callers:
 *     ObpDecrementHandleCount @ 0x140487254 (ObpDecrementHandleCount.c)
 *     ObpIncrementHandleCountEx @ 0x1404B1770 (ObpIncrementHandleCountEx.c)
 *     ObCloseHandleTableEntry @ 0x1404B1D60 (ObCloseHandleTableEntry.c)
 *     NtSetInformationThread @ 0x1404CD4F0 (NtSetInformationThread.c)
 *     PspExitThread @ 0x1404D5FB4 (PspExitThread.c)
 *     ExpWnfLookupPermanentName @ 0x1404E0E80 (ExpWnfLookupPermanentName.c)
 *     EtwpEnableGuid @ 0x1404EE2B8 (EtwpEnableGuid.c)
 *     EtwpLogger @ 0x140531E30 (EtwpLogger.c)
 *     SepRmCommandServerThread @ 0x1405A76C0 (SepRmCommandServerThread.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1405A7C54 (SepCleanupLUIDDeviceMapDirectory.c)
 *     EtwInitializeSiloState @ 0x1405DA61C (EtwInitializeSiloState.c)
 *     SepRmLsaConnectRequest @ 0x1405EAF1C (SepRmLsaConnectRequest.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x1406A424C (VrpHandleIoctlGetVirtualRootKey.c)
 *     DbgkInitializeServerSilo @ 0x1406A98F0 (DbgkInitializeServerSilo.c)
 *     PspDeleteExternalServerSiloState @ 0x140715064 (PspDeleteExternalServerSiloState.c)
 *     PspShutdownCsrProcess @ 0x140715594 (PspShutdownCsrProcess.c)
 *     PspSiloInitializeIsMultiSessionSku @ 0x14071588C (PspSiloInitializeIsMultiSessionSku.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1407159B0 (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x140715AD4 (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x140715BEC (PspSiloLoadApiSets.c)
 *     SeInitServerSilo @ 0x1407280A8 (SeInitServerSilo.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x14072F0F4 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1407519AC (EtwpTrackGuidEntryRegistrations.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x1407627FC (ExpWnfAllocateNextPersistentNameSequence.c)
 *     ObCreateSiloRootDirectory @ 0x140789F30 (ObCreateSiloRootDirectory.c)
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
