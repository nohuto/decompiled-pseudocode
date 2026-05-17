/*
 * XREFs of sub_18006AFAC @ 0x18006AFAC
 * Callers:
 *     sub_18006AC08 @ 0x18006AC08 (sub_18006AC08.c)
 *     RtlAddGrowableFunctionTable @ 0x18006AD20 (RtlAddGrowableFunctionTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18006AFAC(unsigned __int64 a1, __int64 a2)
{
  if ( a1 < *(_QWORD *)(a2 - 56) )
    return 0xFFFFFFFFLL;
  else
    return a1 >= *(_QWORD *)(a2 - 48);
}
