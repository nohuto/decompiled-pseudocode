/*
 * XREFs of MmProbeAndLockPages @ 0x140022650
 * Callers:
 *     sub_14019FBA0 @ 0x14019FBA0 (sub_14019FBA0.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x14048AACC (WbMakeUserDataPagesKernelWritable.c)
 *     MmProbeAndLockProcessPages @ 0x1404A80F0 (MmProbeAndLockProcessPages.c)
 *     NtWriteFile @ 0x1404D10C0 (NtWriteFile.c)
 *     NtReadFile @ 0x14052A160 (NtReadFile.c)
 *     AlpcpInitializeCompletionList @ 0x14052DD94 (AlpcpInitializeCompletionList.c)
 *     CcMdlRead @ 0x1405392E0 (CcMdlRead.c)
 *     FsRtlKernelFsControlFile @ 0x140555BA0 (FsRtlKernelFsControlFile.c)
 *     ExLockUserBuffer @ 0x14055FA68 (ExLockUserBuffer.c)
 *     MmCopyVirtualMemory @ 0x14059CD40 (MmCopyVirtualMemory.c)
 *     IopXxxControlFile @ 0x1405A1A20 (IopXxxControlFile.c)
 *     PspGetSetContextInternal @ 0x1405B7BD0 (PspGetSetContextInternal.c)
 *     MmRotatePhysicalView @ 0x1405BACA0 (MmRotatePhysicalView.c)
 *     VslCallEnclave @ 0x140717FA8 (VslCallEnclave.c)
 *     IopSetFileObjectIosbRange @ 0x14071AF1C (IopSetFileObjectIosbRange.c)
 *     MiCopyPagesIntoEnclave @ 0x140751610 (MiCopyPagesIntoEnclave.c)
 *     NtLoadEnclaveData @ 0x1407535B8 (NtLoadEnclaveData.c)
 *     MiAllocatePerSessionProtos @ 0x14075472C (MiAllocatePerSessionProtos.c)
 *     PspCreateSecureThread @ 0x14077C7EC (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x14079BF90 (SmProcessStatsRequest.c)
 *     NtStartProfile @ 0x1407C7D2C (NtStartProfile.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x140020610 (MiProbeAndLockPages.c)
 */

void __stdcall MmProbeAndLockPages(PMDL MemoryDescriptorList, KPROCESSOR_MODE AccessMode, LOCK_OPERATION Operation)
{
  MiProbeAndLockPages(MemoryDescriptorList, AccessMode != 0, Operation != IoReadAccess);
}
