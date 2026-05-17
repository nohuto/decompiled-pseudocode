/*
 * XREFs of sub_180074D74 @ 0x180074D74
 * Callers:
 *     RtlAddGrowableFunctionTable @ 0x180074B10 (RtlAddGrowableFunctionTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180074D74(unsigned __int64 a1, __int64 a2)
{
  if ( a1 < *(_QWORD *)(a2 - 56) )
    return 0xFFFFFFFFLL;
  else
    return a1 >= *(_QWORD *)(a2 - 48);
}
