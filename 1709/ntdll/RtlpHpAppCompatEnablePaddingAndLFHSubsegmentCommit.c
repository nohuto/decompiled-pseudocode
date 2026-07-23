/*
 * XREFs of RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit @ 0x180102C60
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetSuiteMask @ 0x180007D20 (RtlGetSuiteMask.c)
 */

ULONG RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit()
{
  ULONG result; // eax

  result = RtlGetSuiteMask();
  if ( (result & 0x10000) != 0 )
    RtlpHpAppCompatFlags |= 6u;
  return result;
}
