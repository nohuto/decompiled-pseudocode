/*
 * XREFs of IoGetIrpExtraCreateParameter @ 0x140428960
 * Callers:
 *     FsRtlpAttachOplockKey @ 0x14005306C (FsRtlpAttachOplockKey.c)
 *     FsRtlCheckOplockEx @ 0x1400FE350 (FsRtlCheckOplockEx.c)
 *     IopParseDevice @ 0x1405385E0 (IopParseDevice.c)
 *     IopSymlinkUpdateECP @ 0x14057BE7C (IopSymlinkUpdateECP.c)
 *     IopSymlinkAllocateAndAddECP @ 0x14057C1B0 (IopSymlinkAllocateAndAddECP.c)
 *     IopGraftName @ 0x14057C2B8 (IopGraftName.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall IoGetIrpExtraCreateParameter(PIRP Irp, struct _ECP_LIST **ExtraCreateParameter)
{
  if ( (Irp->Flags & 0x80u) == 0 )
    return -1073741811;
  *ExtraCreateParameter = (struct _ECP_LIST *)Irp->UserBuffer;
  return 0;
}
