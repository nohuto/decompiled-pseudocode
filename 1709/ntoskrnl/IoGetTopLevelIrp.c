/*
 * XREFs of IoGetTopLevelIrp @ 0x140067130
 * Callers:
 *     MiCreateImageOrDataSection @ 0x14049BB80 (MiCreateImageOrDataSection.c)
 *     FsRtlCopyRead @ 0x1406AF6E0 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x1406AF960 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x1406B0120 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x1406B0380 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

PIRP IoGetTopLevelIrp(void)
{
  return (PIRP)KeGetCurrentThread()[1].TrapFrame;
}
