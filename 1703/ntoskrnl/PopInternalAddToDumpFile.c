/*
 * XREFs of PopInternalAddToDumpFile @ 0x140227114
 * Callers:
 *     PoSetHiberRange @ 0x14013EF30 (PoSetHiberRange.c)
 *     PopSetRange @ 0x14013F13C (PopSetRange.c)
 *     KeBugCheck2 @ 0x1401FEE60 (KeBugCheck2.c)
 *     PopIrpWatchdogBugcheck @ 0x14022735C (PopIrpWatchdogBugcheck.c)
 *     PoAddPowerTriageData @ 0x14022D7C0 (PoAddPowerTriageData.c)
 *     PopCreateDumpMdl @ 0x14040572C (PopCreateDumpMdl.c)
 *     PopSaveHiberContext @ 0x140405800 (PopSaveHiberContext.c)
 *     PopHiberReadChecksums @ 0x140406740 (PopHiberReadChecksums.c)
 *     PopRequestWrite @ 0x140406CAC (PopRequestWrite.c)
 *     PopRestoreHiberContext @ 0x140407064 (PopRestoreHiberContext.c)
 *     PopDecompressHiberBlocks @ 0x14040749C (PopDecompressHiberBlocks.c)
 *     PopRequestRead @ 0x140407B98 (PopRequestRead.c)
 *     PopFreeHiberContext @ 0x140577660 (PopFreeHiberContext.c)
 *     PopAllocateHiberContext @ 0x14057AF78 (PopAllocateHiberContext.c)
 *     PopThermalWorker @ 0x1405D7C20 (PopThermalWorker.c)
 *     PoShutdownBugCheck @ 0x1406C9EC0 (PoShutdownBugCheck.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140166F20 (IoAddTriageDumpDataBlock.c)
 *     PopInternalSaveStackToDumpFile @ 0x1402271CC (PopInternalSaveStackToDumpFile.c)
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
  IoAddTriageDumpDataBlock((int)&PopAction, 272);
  if ( qword_14034B1B8 )
    IoAddTriageDumpDataBlock(qword_14034B1B8, 464);
  if ( qword_14034B1C0 )
    IoAddTriageDumpDataBlock(qword_14034B1C0, 464);
  return IoAddTriageDumpDataBlock((int)&PopCB, 472);
}
