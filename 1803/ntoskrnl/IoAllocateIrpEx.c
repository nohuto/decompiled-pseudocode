/*
 * XREFs of IoAllocateIrpEx @ 0x1400B1AF0
 * Callers:
 *     FsRtlGetFileExtents @ 0x140224358 (FsRtlGetFileExtents.c)
 *     FsRtlGetFileSize @ 0x1404BF2F0 (FsRtlGetFileSize.c)
 *     FsRtlSetFileSize @ 0x1405558FC (FsRtlSetFileSize.c)
 *     FsRtlSetKernelEaFile @ 0x140555A10 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x140555BA0 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x140555EA0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x140714570 (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlQueryInformationFile @ 0x140715A40 (FsRtlQueryInformationFile.c)
 *     VfIrpSendSynchronousIrp @ 0x14081DB4C (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x140006144 (IopAllocateIrpWithExtension.c)
 *     IopAllocateIrpPrivate @ 0x1400FDE70 (IopAllocateIrpPrivate.c)
 *     IovAllocateIrp @ 0x1408115F0 (IovAllocateIrp.c)
 */

__int64 __fastcall IoAllocateIrpEx(__int64 a1, __int64 a2, __int64 a3)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !IopDispatchAllocateIrp )
    return IopAllocateIrpPrivate(a1, a2);
  if ( IopDispatchAllocateIrp == 2 )
    return IopAllocateIrpWithExtension(a1, a2);
  return IovAllocateIrp(a1, a2, a3, retaddr);
}
