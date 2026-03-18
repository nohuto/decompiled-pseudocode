/*
 * XREFs of PopInternalAddToDumpFile @ 0x1402712F8
 * Callers:
 *     PopSetRange @ 0x140156C6C (PopSetRange.c)
 *     IopUpdateMinidumpContext @ 0x1402354E0 (IopUpdateMinidumpContext.c)
 *     KeBugCheck2 @ 0x1402429F0 (KeBugCheck2.c)
 *     PopIrpWatchdogBugcheck @ 0x14027153C (PopIrpWatchdogBugcheck.c)
 *     PopRestoreHiberContext @ 0x1404734E4 (PopRestoreHiberContext.c)
 *     PopDecompressHiberBlocks @ 0x140473C3C (PopDecompressHiberBlocks.c)
 *     PopSaveHiberContext @ 0x140473E20 (PopSaveHiberContext.c)
 *     PopCreateDumpMdl @ 0x1404741C4 (PopCreateDumpMdl.c)
 *     PopRequestWrite @ 0x1404743B4 (PopRequestWrite.c)
 *     PopHiberReadChecksums @ 0x140486128 (PopHiberReadChecksums.c)
 *     PopRequestRead @ 0x1404865F4 (PopRequestRead.c)
 *     PopFreeHiberContext @ 0x1405EF808 (PopFreeHiberContext.c)
 *     PopAllocateHiberContext @ 0x1405F00AC (PopAllocateHiberContext.c)
 *     PopThermalWorker @ 0x140643860 (PopThermalWorker.c)
 *     PoShutdownBugCheck @ 0x140762AF0 (PoShutdownBugCheck.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140185870 (IoAddTriageDumpDataBlock.c)
 *     PopInternalSaveStackToDumpFile @ 0x1402713B4 (PopInternalSaveStackToDumpFile.c)
 */

__int64 __fastcall PopInternalAddToDumpFile(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v4; // rdx

  if ( a1 )
  {
    if ( a2 )
      v4 = ((a1 & 0xFFF) + (unsigned __int64)a2 + 4095) >> 12;
    else
      LODWORD(v4) = 1;
    IoAddTriageDumpDataBlock(a1 & 0xFFFFF000, (_DWORD)v4 << 12);
  }
  if ( a3 )
    PopInternalSaveStackToDumpFile(a3);
  IoAddTriageDumpDataBlock((int)&PopHiberInfo, 216);
  IoAddTriageDumpDataBlock((int)&PopAction, 280);
  if ( qword_1403AA098 )
    IoAddTriageDumpDataBlock(qword_1403AA098, 472);
  if ( BugCheckParameter4 )
    IoAddTriageDumpDataBlock(BugCheckParameter4, 456);
  return IoAddTriageDumpDataBlock((int)&PopCB, 512);
}
