/*
 * XREFs of HampConnectionObjectCompareToObject @ 0x18000D7A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HampConnectionObjectCompareToObject(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 >= *(_QWORD *)(a2 + 48) )
    return v2 > *(_QWORD *)(a2 + 48);
  else
    return 0xFFFFFFFFLL;
}
