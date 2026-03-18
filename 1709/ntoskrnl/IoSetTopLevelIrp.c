/*
 * XREFs of IoSetTopLevelIrp @ 0x140067110
 * Callers:
 *     MiCreateImageOrDataSection @ 0x14049BB80 (MiCreateImageOrDataSection.c)
 *     MiShareExistingControlArea @ 0x14049C820 (MiShareExistingControlArea.c)
 *     MiCreateNewSection @ 0x1404F96D0 (MiCreateNewSection.c)
 *     FsRtlCopyRead @ 0x1406AF6E0 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x1406AF960 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x1406B0120 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x1406B0380 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

void __stdcall IoSetTopLevelIrp(PIRP Irp)
{
  KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)Irp;
}
