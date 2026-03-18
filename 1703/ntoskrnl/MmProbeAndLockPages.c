/*
 * XREFs of MmProbeAndLockPages @ 0x1400B3C30
 * Callers:
 *     FsRtlKernelFsControlFile @ 0x1404427D0 (FsRtlKernelFsControlFile.c)
 *     NtWriteFile @ 0x1404818C0 (NtWriteFile.c)
 *     MmCopyVirtualMemory @ 0x1405181F0 (MmCopyVirtualMemory.c)
 *     MmProbeAndLockProcessPages @ 0x140518B80 (MmProbeAndLockProcessPages.c)
 *     PspGetSetContextInternal @ 0x140521E20 (PspGetSetContextInternal.c)
 *     IopXxxControlFile @ 0x14052BAD0 (IopXxxControlFile.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405493C8 (WbMakeUserDataPagesKernelWritable.c)
 *     CcMdlRead @ 0x140549510 (CcMdlRead.c)
 *     ExLockUserBuffer @ 0x14055C224 (ExLockUserBuffer.c)
 *     MmRotatePhysicalView @ 0x14055CBF0 (MmRotatePhysicalView.c)
 *     NtReadFile @ 0x140566B00 (NtReadFile.c)
 *     AlpcpInitializeCompletionList @ 0x14056B364 (AlpcpInitializeCompletionList.c)
 *     IopSetFileObjectIosbRange @ 0x14068A5DC (IopSetFileObjectIosbRange.c)
 *     MiCopyPagesIntoEnclave @ 0x1406BAD94 (MiCopyPagesIntoEnclave.c)
 *     MiAllocatePerSessionProtos @ 0x1406BDAA4 (MiAllocatePerSessionProtos.c)
 *     PspCreateSecureThread @ 0x1406E23CC (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x140700C58 (SmProcessStatsRequest.c)
 *     NtStartProfile @ 0x140720BEC (NtStartProfile.c)
 * Callees:
 *     <none>
 */

void __stdcall MmProbeAndLockPages(PMDL MemoryDescriptorList, KPROCESSOR_MODE AccessMode, LOCK_OPERATION Operation)
{
  MiProbeAndLockPages(MemoryDescriptorList, AccessMode != 0, Operation != IoReadAccess);
}
