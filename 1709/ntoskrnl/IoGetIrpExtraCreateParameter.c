/*
 * XREFs of IoGetIrpExtraCreateParameter @ 0x1404BB290
 * Callers:
 *     FsRtlpAttachOplockKey @ 0x140024FEC (FsRtlpAttachOplockKey.c)
 *     FsRtlCheckOplockEx @ 0x140085CC0 (FsRtlCheckOplockEx.c)
 *     IopParseDevice @ 0x1404B86A0 (IopParseDevice.c)
 *     IopSymlinkUpdateECP @ 0x1405CD968 (IopSymlinkUpdateECP.c)
 *     IopGraftName @ 0x1405CDB54 (IopGraftName.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1405CE440 (IopSymlinkAllocateAndAddECP.c)
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
