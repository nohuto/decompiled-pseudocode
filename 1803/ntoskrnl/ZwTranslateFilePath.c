/*
 * XREFs of ZwTranslateFilePath @ 0x1401AAC40
 * Callers:
 *     ExpSetBootEntry @ 0x1407C0A28 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1407C11E8 (ExpSetDriverEntry.c)
 *     BiTranslateFilePath @ 0x1407E579C (BiTranslateFilePath.c)
 *     SiBootEntryGetNtFilePath @ 0x1407E6144 (SiBootEntryGetNtFilePath.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwTranslateFilePath(
        PFILE_PATH InputFilePath,
        ULONG OutputType,
        PFILE_PATH OutputFilePath,
        ULONG OutputFilePathLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(InputFilePath);
}
