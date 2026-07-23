/*
 * XREFs of sub_1800FEC20 @ 0x1800FEC20
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800FE028 @ 0x1800FE028 (sub_1800FE028.c)
 */

__int64 __fastcall sub_1800FEC20(__int64 a1)
{
  __int64 v2; // rax
  _RTL_RUN_ONCE *v3; // rcx
  __int64 v4; // rax

  v2 = 368LL;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
    v2 = 136LL;
  v3 = (_RTL_RUN_ONCE *)(v2 + a1);
  v4 = 208LL;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
    v4 = 36LL;
  sub_1800FE028(v3, *(_WORD *)(v4 + a1) == 0xFFFF, 1);
  return 0LL;
}
