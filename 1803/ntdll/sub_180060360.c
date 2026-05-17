/*
 * XREFs of sub_180060360 @ 0x180060360
 * Callers:
 *     sub_180060204 @ 0x180060204 (sub_180060204.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180060360(__int64 a1)
{
  _QWORD *v1; // rdx
  unsigned __int64 v2; // rax

  if ( *(_DWORD *)(a1 + 16) != -571548178 || (*(_BYTE *)(a1 + 20) & 1) != 0 )
    return 0LL;
  v1 = *(_QWORD **)(a1 + 184);
  v2 = v1[1] >> *(_BYTE *)(a1 + 123);
  if ( v2 <= 8 )
    v2 = 8LL;
  if ( v1[2] + v1[3] > v2 )
    return sub_1800603AC(a1, 0LL);
  else
    return 0LL;
}
