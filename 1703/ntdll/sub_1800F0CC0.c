/*
 * XREFs of sub_1800F0CC0 @ 0x1800F0CC0
 * Callers:
 *     sub_1800EF700 @ 0x1800EF700 (sub_1800EF700.c)
 * Callees:
 *     sub_18000C298 @ 0x18000C298 (sub_18000C298.c)
 *     sub_180095A28 @ 0x180095A28 (sub_180095A28.c)
 *     sub_1800FDD7C @ 0x1800FDD7C (sub_1800FDD7C.c)
 *     sub_180102C90 @ 0x180102C90 (sub_180102C90.c)
 */

__int64 __fastcall sub_1800F0CC0(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v5; // ecx
  __int64 (__fastcall *v6)(); // rcx
  __int64 v7; // rcx

  v2 = 144LL;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
    v2 = 32LL;
  if ( *(_DWORD *)(a2 + 16) )
  {
    v5 = *(_DWORD *)(v2 + a1);
    if ( v5 )
      sub_180095A28(v5, a1, 0LL, 7);
    v6 = sub_1801005E0;
  }
  else
  {
    v6 = *(__int64 (__fastcall **)())a2;
    if ( !*(_QWORD *)a2 )
      goto LABEL_9;
  }
  *(_DWORD *)(v2 + a1) = (unsigned __int16)sub_1800FDD7C(v6);
LABEL_9:
  if ( *(_DWORD *)(a1 + 16) != -571548178 && *(_DWORD *)(a2 + 12) )
  {
    v7 = *(_BYTE *)(a1 + 386) == 2 ? *(_QWORD *)(a1 + 376) : 0LL;
    if ( v7 || ((sub_18000C298(a1), *(_BYTE *)(a1 + 386) != 2) ? (v7 = 0LL) : (v7 = *(_QWORD *)(a1 + 376)), v7) )
      sub_180102C90(v7, a2);
  }
  return 0LL;
}
