/*
 * XREFs of IoSetTopLevelIrp @ 0x140096520
 * Callers:
 *     MiCreateNewSection @ 0x1404933A8 (MiCreateNewSection.c)
 *     MiCreateImageOrDataSection @ 0x14050E960 (MiCreateImageOrDataSection.c)
 *     MiShareExistingControlArea @ 0x1405104F8 (MiShareExistingControlArea.c)
 *     FsRtlCopyRead @ 0x1406842F0 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x140684570 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x140684D30 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x140684F90 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

void __stdcall IoSetTopLevelIrp(PIRP Irp)
{
  KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)Irp;
}
