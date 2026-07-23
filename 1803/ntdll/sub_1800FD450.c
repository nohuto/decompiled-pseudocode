/*
 * XREFs of sub_1800FD450 @ 0x1800FD450
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800FC6F0 @ 0x1800FC6F0 (sub_1800FC6F0.c)
 */

__int64 __fastcall sub_1800FD450(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx

  v2 = 60LL;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    v2 = 208LL;
  v3 = 352LL;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    v3 = 368LL;
  sub_1800FC6F0((_RTL_RUN_ONCE *)(a1 + v3), *(_WORD *)(v2 + a1) == 0xFFFF, 1);
  return 0LL;
}
