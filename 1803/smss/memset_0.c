/*
 * XREFs of memset_0 @ 0x14000CA4D
 * Callers:
 *     SmpStartCsr @ 0x140001DA0 (SmpStartCsr.c)
 *     SmscpExecuteInitialCommand @ 0x140002350 (SmscpExecuteInitialCommand.c)
 *     SmExecPgmEx @ 0x1400023F0 (SmExecPgmEx.c)
 *     SmscpLoadSubSystem @ 0x14000249C (SmscpLoadSubSystem.c)
 *     SmpExecuteImage @ 0x140002C6C (SmpExecuteImage.c)
 *     SmpApiCallback @ 0x140003BD0 (SmpApiCallback.c)
 *     SmpInitializeControlBlock @ 0x140004804 (SmpInitializeControlBlock.c)
 *     SmpSaveOldPageFiles @ 0x140009AF0 (SmpSaveOldPageFiles.c)
 *     SmpPagefileInitialize @ 0x140009E74 (SmpPagefileInitialize.c)
 *     SmpInit @ 0x14000A1E0 (SmpInit.c)
 *     RtlStringCbPrintfExW @ 0x14001193C (RtlStringCbPrintfExW.c)
 *     RtlStringExHandleOtherFlagsW @ 0x140011AF8 (RtlStringExHandleOtherFlagsW.c)
 *     SmpForceDeleteTargetFile @ 0x1400121F0 (SmpForceDeleteTargetFile.c)
 *     SmpLoadSubSystem @ 0x14001244C (SmpLoadSubSystem.c)
 *     SmpRenameTargetFile @ 0x1400128AC (SmpRenameTargetFile.c)
 *     SmpSetTargetAttributes @ 0x140012C44 (SmpSetTargetAttributes.c)
 *     SmscpNotifySmOfFailure @ 0x1400136B0 (SmscpNotifySmOfFailure.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset_0(void *a1, int Val, size_t Size)
{
  return memset(a1, Val, Size);
}
