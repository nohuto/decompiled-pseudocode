/*
 * XREFs of sub_180105C3C @ 0x180105C3C
 * Callers:
 *     sub_180062598 @ 0x180062598 (sub_180062598.c)
 * Callees:
 *     sub_180062724 @ 0x180062724 (sub_180062724.c)
 */

__int64 __fastcall sub_180105C3C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax

  v4 = sub_180062724(a1, 8 * ((a2 + 1) << *(_DWORD *)(a1 + 72)) - 1, 8 * (a3 << *(_DWORD *)(a1 + 72)));
  if ( v4 == -1 )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 16) + ((v4 / 8) >> *(_DWORD *)(a1 + 72) << *(_DWORD *)(a1 + 72));
}
