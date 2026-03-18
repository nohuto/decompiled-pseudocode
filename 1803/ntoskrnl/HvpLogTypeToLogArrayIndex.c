/*
 * XREFs of HvpLogTypeToLogArrayIndex @ 0x140499C3C
 * Callers:
 *     CmpInitializeActualFileSizes @ 0x140498B08 (CmpInitializeActualFileSizes.c)
 *     HvWriteLogFile @ 0x140499A0C (HvWriteLogFile.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x140499B4C (HvTruncateCurrentLogFileIfRequired.c)
 *     CmpFlushHive @ 0x14049D2A8 (CmpFlushHive.c)
 *     CmpDoFileSetSizeEx @ 0x140566A0C (CmpDoFileSetSizeEx.c)
 *     HvSwapLogFiles @ 0x14057DB90 (HvSwapLogFiles.c)
 *     HvIsCurrentLogSwappable @ 0x140581BCC (HvIsCurrentLogSwappable.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x1405839A4 (HvTruncateAllLogFilesIfRequired.c)
 *     HvResetLogFileStatusAll @ 0x140583A34 (HvResetLogFileStatusAll.c)
 *     HvpPerformLogFileRecovery @ 0x1406F86F4 (HvpPerformLogFileRecovery.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpLogTypeToLogArrayIndex(int a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( a1 == 4 || a1 == 1 )
    return 0LL;
  return result;
}
