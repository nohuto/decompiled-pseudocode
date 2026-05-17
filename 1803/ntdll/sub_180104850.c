/*
 * XREFs of sub_180104850 @ 0x180104850
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetSuiteMask @ 0x18005A990 (RtlGetSuiteMask.c)
 */

__int64 sub_180104850()
{
  __int64 result; // rax

  result = RtlGetSuiteMask();
  if ( (result & 0x10000) != 0 )
    dword_180159760 |= 6u;
  return result;
}
