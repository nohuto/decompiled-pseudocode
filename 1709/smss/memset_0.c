/*
 * XREFs of memset_0 @ 0x14000C86D
 * Callers:
 *     SmpStartCsr @ 0x140001D90 (SmpStartCsr.c)
 *     SmscpExecuteInitialCommand @ 0x140002340 (SmscpExecuteInitialCommand.c)
 *     SmExecPgmEx @ 0x1400023E4 (SmExecPgmEx.c)
 *     SmscpLoadSubSystem @ 0x140002490 (SmscpLoadSubSystem.c)
 *     SmpExecuteImage @ 0x140002C6C (SmpExecuteImage.c)
 *     SmpApiCallback @ 0x140003BC0 (SmpApiCallback.c)
 *     SmpInitializeControlBlock @ 0x1400047EC (SmpInitializeControlBlock.c)
 *     SmpPagefileInitialize @ 0x140005FB8 (SmpPagefileInitialize.c)
 *     SmpSaveOldPageFiles @ 0x140009C10 (SmpSaveOldPageFiles.c)
 *     SmpInit @ 0x140009F54 (SmpInit.c)
 *     RtlStringCbPrintfExW @ 0x14001172C (RtlStringCbPrintfExW.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1400118E8 (RtlStringExHandleOtherFlagsW.c)
 *     SmpForceDeleteTargetFile @ 0x140011FE0 (SmpForceDeleteTargetFile.c)
 *     SmpLoadSubSystem @ 0x14001223C (SmpLoadSubSystem.c)
 *     SmpRenameTargetFile @ 0x1400126A0 (SmpRenameTargetFile.c)
 *     SmpSetTargetAttributes @ 0x140012A38 (SmpSetTargetAttributes.c)
 *     SmscpNotifySmOfFailure @ 0x14001353C (SmscpNotifySmOfFailure.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset_0(void *a1, int Val, size_t Size)
{
  return memset(a1, Val, Size);
}
