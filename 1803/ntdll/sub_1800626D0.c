/*
 * XREFs of sub_1800626D0 @ 0x1800626D0
 * Callers:
 *     sub_18005E6EC @ 0x18005E6EC (sub_18005E6EC.c)
 *     sub_180062598 @ 0x180062598 (sub_180062598.c)
 * Callees:
 *     sub_180062724 @ 0x180062724 (sub_180062724.c)
 */

__int64 __fastcall sub_1800626D0(__int64 a1, __int64 a2)
{
  if ( sub_180062724(a1, 8 * (a2 << *(_DWORD *)(a1 + 72)), 8 * (1LL << *(_DWORD *)(a1 + 72))) == -1 )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 16) + (a2 << *(_DWORD *)(a1 + 72));
}
