/*
 * XREFs of ndisGetWakeUpPatternSize @ 0x1C004B140
 * Callers:
 *     ndisQueryWakeUpPatternList @ 0x1C004CB98 (ndisQueryWakeUpPatternList.c)
 *     ndisCreateWakeUpPatternEntry @ 0x1C00D4AFC (ndisCreateWakeUpPatternEntry.c)
 *     ndisXlateWakeUpPatternListToWolPatternList @ 0x1C00D8740 (ndisXlateWakeUpPatternListToWolPatternList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisGetWakeUpPatternSize(unsigned int *a1)
{
  unsigned int v1; // r8d
  __int64 v2; // rdx

  v1 = a1[3] + a1[4];
  v2 = a1[2];
  if ( v2 + 24 > (unsigned __int64)v1 )
    return (unsigned int)(v2 + 24);
  return v1;
}
