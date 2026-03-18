/*
 * XREFs of ZwTranslateFilePath @ 0x140181000
 * Callers:
 *     ExpSetBootEntry @ 0x140759AFC (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x14075A2BC (ExpSetDriverEntry.c)
 *     BiTranslateFilePath @ 0x14077CCC8 (BiTranslateFilePath.c)
 *     SiBootEntryGetNtFilePath @ 0x14077D748 (SiBootEntryGetNtFilePath.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwTranslateFilePath(
        PFILE_PATH InputFilePath,
        ULONG OutputType,
        PFILE_PATH OutputFilePath,
        ULONG OutputFilePathLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(InputFilePath, *(_QWORD *)&OutputType, OutputFilePath);
}
