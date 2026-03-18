/*
 * XREFs of IoAllocateIrpEx @ 0x1401108F0
 * Callers:
 *     FsRtlGetFileExtents @ 0x1401E6CEC (FsRtlGetFileExtents.c)
 *     FsRtlGetFileSize @ 0x1404FA2F0 (FsRtlGetFileSize.c)
 *     FsRtlSetKernelEaFile @ 0x14056B890 (FsRtlSetKernelEaFile.c)
 *     FsRtlSetFileSize @ 0x14056C05C (FsRtlSetFileSize.c)
 *     FsRtlKernelFsControlFile @ 0x14056C170 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x14056C480 (FsRtlQueryKernelEaFile.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x1406AFDC8 (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlQueryInformationFile @ 0x1406B0F60 (FsRtlQueryInformationFile.c)
 *     VfIrpSendSynchronousIrp @ 0x1407B09A0 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x140082210 (IopAllocateIrpPrivate.c)
 *     IopAllocateIrpWithExtension @ 0x1400FFE44 (IopAllocateIrpWithExtension.c)
 *     IovAllocateIrp @ 0x1407A4620 (IovAllocateIrp.c)
 */

_QWORD *__fastcall IoAllocateIrpEx(__int64 a1, __int64 a2, __int64 a3)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !IopDispatchAllocateIrp )
    return IopAllocateIrpPrivate(a1, a2, a3);
  if ( IopDispatchAllocateIrp == 2 )
    return IopAllocateIrpWithExtension(a1, a2, a3);
  return (_QWORD *)IovAllocateIrp(a1, a2, a3, retaddr);
}
