/*
 * XREFs of HvlpCountFlushVaList @ 0x140159E70
 * Callers:
 *     HvlpFlushRangeListTb @ 0x140159DCC (HvlpFlushRangeListTb.c)
 *     HvlpFlushRangeListTbEx @ 0x14022E700 (HvlpFlushRangeListTbEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlpCountFlushVaList(unsigned int a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // r8

  if ( (HvlpFlags & 0x2000) == 0 )
    return a1;
  result = 0LL;
  if ( a1 )
  {
    v3 = a1;
    do
    {
      if ( (*a2 & 0xC00LL) != 0 )
        LODWORD(result) = (*a2 & 0x3FF) + result;
      result = (unsigned int)(result + 1);
      ++a2;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
