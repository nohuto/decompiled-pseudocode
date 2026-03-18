/*
 * XREFs of IoGetIrpExtraCreateParameter @ 0x1404E2940
 * Callers:
 *     FsRtlpAttachOplockKey @ 0x140065288 (FsRtlpAttachOplockKey.c)
 *     FsRtlCheckOplockEx @ 0x140066340 (FsRtlCheckOplockEx.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1404E0FBC (IopSymlinkAllocateAndAddECP.c)
 *     IopGraftName @ 0x1404E10E4 (IopGraftName.c)
 *     IopSymlinkUpdateECP @ 0x140577744 (IopSymlinkUpdateECP.c)
 *     IopParseDevice @ 0x1405B17F0 (IopParseDevice.c)
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
