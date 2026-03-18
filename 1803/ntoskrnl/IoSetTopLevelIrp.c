/*
 * XREFs of IoSetTopLevelIrp @ 0x14005C1B0
 * Callers:
 *     MiCreateNewSection @ 0x1404BE6AC (MiCreateNewSection.c)
 *     MiShareExistingControlArea @ 0x1404C11C4 (MiShareExistingControlArea.c)
 *     MiCreateImageOrDataSection @ 0x1404C24F0 (MiCreateImageOrDataSection.c)
 *     FsRtlCopyRead @ 0x140713E90 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x140714110 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x1407148C0 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x140714B20 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

void __stdcall IoSetTopLevelIrp(PIRP Irp)
{
  KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)Irp;
}
