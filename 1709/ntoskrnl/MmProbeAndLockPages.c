/*
 * XREFs of MmProbeAndLockPages @ 0x1400BDA30
 * Callers:
 *     sub_140175420 @ 0x140175420 (sub_140175420.c)
 *     MmRotatePhysicalView @ 0x140448920 (MmRotatePhysicalView.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x14044AD7C (WbMakeUserDataPagesKernelWritable.c)
 *     IopXxxControlFile @ 0x1404AD980 (IopXxxControlFile.c)
 *     NtWriteFile @ 0x140505350 (NtWriteFile.c)
 *     CcMdlRead @ 0x140507110 (CcMdlRead.c)
 *     MmProbeAndLockProcessPages @ 0x140508210 (MmProbeAndLockProcessPages.c)
 *     MmCopyVirtualMemory @ 0x1405084C0 (MmCopyVirtualMemory.c)
 *     PspGetSetContextInternal @ 0x140514300 (PspGetSetContextInternal.c)
 *     NtReadFile @ 0x140562BE0 (NtReadFile.c)
 *     FsRtlKernelFsControlFile @ 0x14056C170 (FsRtlKernelFsControlFile.c)
 *     ExLockUserBuffer @ 0x14056EEE8 (ExLockUserBuffer.c)
 *     VslCallEnclave @ 0x1406B3378 (VslCallEnclave.c)
 *     IopSetFileObjectIosbRange @ 0x1406B622C (IopSetFileObjectIosbRange.c)
 *     AlpcpInitializeCompletionList @ 0x1406DD984 (AlpcpInitializeCompletionList.c)
 *     MiCopyPagesIntoEnclave @ 0x1406E7BD4 (MiCopyPagesIntoEnclave.c)
 *     NtLoadEnclaveData @ 0x1406E9B24 (NtLoadEnclaveData.c)
 *     MiAllocatePerSessionProtos @ 0x1406EAE50 (MiAllocatePerSessionProtos.c)
 *     PspCreateSecureThread @ 0x1407187FC (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x140738AC4 (SmProcessStatsRequest.c)
 *     NtStartProfile @ 0x140760AE4 (NtStartProfile.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x1400BDA70 (MiProbeAndLockPages.c)
 */

void __stdcall MmProbeAndLockPages(PMDL MemoryDescriptorList, KPROCESSOR_MODE AccessMode, LOCK_OPERATION Operation)
{
  MiProbeAndLockPages(MemoryDescriptorList, AccessMode != 0, Operation != IoReadAccess);
}
