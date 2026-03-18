/*
 * XREFs of HvpLogTypeToLogArrayIndex @ 0x1404E5FD4
 * Callers:
 *     CmpFlushHive @ 0x1404DD950 (CmpFlushHive.c)
 *     HvWriteLogFile @ 0x1404E3F18 (HvWriteLogFile.c)
 *     CmpInitializeActualFileSizes @ 0x1404E5ADC (CmpInitializeActualFileSizes.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x1404E5C44 (HvTruncateCurrentLogFileIfRequired.c)
 *     CmpDoFileSetSizeEx @ 0x1404E657C (CmpDoFileSetSizeEx.c)
 *     HvIsCurrentLogSwappable @ 0x1404E6A78 (HvIsCurrentLogSwappable.c)
 *     HvSwapLogFiles @ 0x1404E6ABC (HvSwapLogFiles.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x14059D944 (HvTruncateAllLogFilesIfRequired.c)
 *     HvResetLogFileStatusAll @ 0x14059D9E8 (HvResetLogFileStatusAll.c)
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
