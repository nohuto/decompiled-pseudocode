/*
 * XREFs of IoAllocateIrpEx @ 0x1400ED920
 * Callers:
 *     FsRtlGetFileExtents @ 0x1401E2B1C (FsRtlGetFileExtents.c)
 *     FsRtlQueryKernelEaFile @ 0x1404418D0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1404427D0 (FsRtlKernelFsControlFile.c)
 *     FsRtlSetKernelEaFile @ 0x140454DC0 (FsRtlSetKernelEaFile.c)
 *     FsRtlSetFileSize @ 0x140459F80 (FsRtlSetFileSize.c)
 *     FsRtlGetFileSize @ 0x140493F40 (FsRtlGetFileSize.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x1406849D8 (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlQueryInformationFile @ 0x140685B40 (FsRtlQueryInformationFile.c)
 *     VfIrpSendSynchronousIrp @ 0x14076EB80 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoAllocateIrpEx(__int64 a1, __int64 a2, __int64 a3)
{
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( !IopDispatchAllocateIrp )
    return IopAllocateIrpPrivate(a1, a2, a3, retaddr);
  if ( IopDispatchAllocateIrp == 2 )
    return IopAllocateIrpWithExtension(a1, a2, a3, retaddr);
  return IovAllocateIrp(a1, a2, a3, retaddr);
}
