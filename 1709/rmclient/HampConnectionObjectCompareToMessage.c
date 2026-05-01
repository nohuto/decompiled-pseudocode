/*
 * XREFs of HampConnectionObjectCompareToMessage @ 0x18000D780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HampConnectionObjectCompareToMessage(_QWORD *a1, __int64 a2)
{
  if ( *a1 >= *(_QWORD *)(a2 + 48) )
    return *a1 > *(_QWORD *)(a2 + 48);
  else
    return 0xFFFFFFFFLL;
}
