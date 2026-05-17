/*
 * XREFs of RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit @ 0x180102C60
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetSuiteMask @ 0x180007D20 (RtlGetSuiteMask.c)
 */

__int64 __fastcall RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = RtlGetSuiteMask(a1, a2);
  if ( (result & 0x10000) != 0 )
    RtlpHpAppCompatFlags |= 6u;
  return result;
}
