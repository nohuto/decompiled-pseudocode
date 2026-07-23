/*
 * XREFs of sub_1801006B0 @ 0x1801006B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetSuiteMask @ 0x18000FC90 (RtlGetSuiteMask.c)
 */

ULONG sub_1801006B0()
{
  ULONG result; // eax

  result = RtlGetSuiteMask();
  if ( (result & 0x10000) != 0 )
    dword_180158684 |= 6u;
  return result;
}
