/*
 * XREFs of IoGetTopLevelIrp @ 0x140096540
 * Callers:
 *     MiCreateImageOrDataSection @ 0x14050E960 (MiCreateImageOrDataSection.c)
 *     FsRtlCopyRead @ 0x1406842F0 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x140684570 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x140684D30 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x140684F90 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

PIRP IoGetTopLevelIrp(void)
{
  return (PIRP)KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink;
}
