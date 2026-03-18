/*
 * XREFs of IoGetTopLevelIrp @ 0x14005C190
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1404C24F0 (MiCreateImageOrDataSection.c)
 *     FsRtlCopyRead @ 0x140713E90 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x140714110 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x1407148C0 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x140714B20 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

PIRP IoGetTopLevelIrp(void)
{
  return (PIRP)KeGetCurrentThread()[1].TrapFrame;
}
