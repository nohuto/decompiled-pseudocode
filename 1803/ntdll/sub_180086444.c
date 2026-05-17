/*
 * XREFs of sub_180086444 @ 0x180086444
 * Callers:
 *     RtlCopyContext @ 0x1800862F0 (RtlCopyContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180086444(__int64 a1, int a2)
{
  __int64 v2; // rax

  v2 = 0LL;
  if ( (a2 & 0x10000) == 0 )
  {
    if ( (a2 & 0x100000) != 0 )
    {
      a1 += 48LL;
    }
    else if ( (a2 & 0x200000) == 0 )
    {
      if ( (a2 & 0x400000) != 0 )
        return a1;
      return v2;
    }
  }
  return a1;
}
