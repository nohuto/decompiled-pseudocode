/*
 * XREFs of ?IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01CB660
 * Callers:
 *     ?xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C00F8798 (-xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z @ 0x1C01A43A0 (-CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z.c)
 *     ?PopulatePointerInfoNode@@YAHPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C01A53D8 (-PopulatePointerInfoNode@@YAHPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z.c)
 *     ?ProcessQFrameNode@@YAXPEAUtagPOINTERQFRAME@@PEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C01A579C (-ProcessQFrameNode@@YAXPEAUtagPOINTERQFRAME@@PEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@.c)
 *     ?ProcessWindowEnterLeave@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C01A58E8 (-ProcessWindowEnterLeave@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z.c)
 *     DereferencePointerInputFrameAndMessageData @ 0x1C01A6620 (DereferencePointerInputFrameAndMessageData.c)
 *     UnreferenceUndispatchedFrame @ 0x1C01A6E54 (UnreferenceUndispatchedFrame.c)
 *     xxxSetManipulationInputTarget @ 0x1C01A6F54 (xxxSetManipulationInputTarget.c)
 *     EditionBuildManipulationInputInteropInfoMessage @ 0x1C01CE010 (EditionBuildManipulationInputInteropInfoMessage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsManipulationThreadNode(const struct tagPOINTERINFONODE *a1)
{
  return (*((_DWORD *)a1 + 1) & 0x100) != 0 && (*(_DWORD *)a1 & 0x400) != 0 && (*(_DWORD *)a1 & 0x800) == 0;
}
