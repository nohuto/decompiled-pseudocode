/*
 * XREFs of HampConnectionObjectCompareToObject @ 0x180006600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HampConnectionObjectCompareToObject(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rax

  v2 = *(_QWORD *)(a2 + 48);
  v3 = *(_QWORD *)(a1 + 48);
  if ( v3 < v2 )
    return 0xFFFFFFFFLL;
  else
    return v3 > v2;
}
