/*
 * XREFs of PopInternalAddToDumpFile @ 0x140239DE4
 * Callers:
 *     IopUpdateMinidumpContext @ 0x1401F819C (IopUpdateMinidumpContext.c)
 *     KeBugCheck2 @ 0x1402052B0 (KeBugCheck2.c)
 *     PopIrpWatchdogBugcheck @ 0x14023A02C (PopIrpWatchdogBugcheck.c)
 *     PopSetRange @ 0x140241F84 (PopSetRange.c)
 *     PopCreateDumpMdl @ 0x140432A08 (PopCreateDumpMdl.c)
 *     PopDecompressHiberBlocks @ 0x140432B24 (PopDecompressHiberBlocks.c)
 *     PopHiberReadChecksums @ 0x140433A00 (PopHiberReadChecksums.c)
 *     PopRequestRead @ 0x140434168 (PopRequestRead.c)
 *     PopRequestWrite @ 0x140434590 (PopRequestWrite.c)
 *     PopRestoreHiberContext @ 0x140434AE0 (PopRestoreHiberContext.c)
 *     PopSaveHiberContext @ 0x140434F40 (PopSaveHiberContext.c)
 *     PopAllocateHiberContext @ 0x1406FAC78 (PopAllocateHiberContext.c)
 *     PopFreeHiberContext @ 0x1406FB8E8 (PopFreeHiberContext.c)
 *     PoShutdownBugCheck @ 0x1406FC900 (PoShutdownBugCheck.c)
 *     PopThermalWorker @ 0x140700090 (PopThermalWorker.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14015ACC8 (IoAddTriageDumpDataBlock.c)
 *     PopInternalSaveStackToDumpFile @ 0x140239EA0 (PopInternalSaveStackToDumpFile.c)
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
  if ( qword_140365818 )
    IoAddTriageDumpDataBlock(qword_140365818, 464);
  if ( BugCheckParameter4 )
    IoAddTriageDumpDataBlock(BugCheckParameter4, 464);
  return IoAddTriageDumpDataBlock((int)&PopCB, 512);
}
