/*
 * XREFs of HvpLogTypeToLogArrayIndex @ 0x1404D3C0C
 * Callers:
 *     CmpDoFileSetSizeEx @ 0x14043B560 (CmpDoFileSetSizeEx.c)
 *     HvSwapLogFiles @ 0x14045816C (HvSwapLogFiles.c)
 *     HvIsCurrentLogSwappable @ 0x14045BE38 (HvIsCurrentLogSwappable.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x14045DE44 (HvTruncateAllLogFilesIfRequired.c)
 *     HvResetLogFileStatusAll @ 0x14045DEE8 (HvResetLogFileStatusAll.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x1404D39B0 (HvTruncateCurrentLogFileIfRequired.c)
 *     CmpInitializeActualFileSizes @ 0x1404D3A34 (CmpInitializeActualFileSizes.c)
 *     HvWriteLogFile @ 0x1404D3CF0 (HvWriteLogFile.c)
 *     CmpFlushHive @ 0x1404D6DE0 (CmpFlushHive.c)
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
