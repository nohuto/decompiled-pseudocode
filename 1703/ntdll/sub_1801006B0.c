/*
 * XREFs of sub_1801006B0 @ 0x1801006B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetSuiteMask @ 0x18000FC90 (RtlGetSuiteMask.c)
 */

__int64 __fastcall sub_1801006B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = RtlGetSuiteMask(a1, a2, a3, a4);
  if ( (result & 0x10000) != 0 )
    dword_180158684 |= 6u;
  return result;
}
