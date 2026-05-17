/*
 * XREFs of sub_1800D4CE4 @ 0x1800D4CE4
 * Callers:
 *     sub_180082F40 @ 0x180082F40 (sub_180082F40.c)
 *     sub_1800D57D0 @ 0x1800D57D0 (sub_1800D57D0.c)
 * Callees:
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 *     _wcsicmp @ 0x18008CAD0 (_wcsicmp.c)
 *     sub_1800D4C00 @ 0x1800D4C00 (sub_1800D4C00.c)
 *     sub_1800D5854 @ 0x1800D5854 (sub_1800D5854.c)
 */

__int64 __fastcall sub_1800D4CE4(__int64 a1)
{
  __int64 *v3; // rdi
  _QWORD *v4; // rbp
  int v5; // r14d
  __int64 v6; // rbx

  if ( !byte_18016F298 )
    return 0LL;
  v3 = (__int64 *)qword_18015B590;
  while ( v3 != &qword_18015B590 )
  {
    v4 = (_QWORD *)v3[5];
    v5 = 0;
    v3 = (__int64 *)*v3;
    if ( *v4 )
    {
      v6 = (__int64)v4;
      do
      {
        if ( (*(_BYTE *)(v6 + 8) & 1) == 0 && !wcsicmp(*(const wchar_t **)(a1 + 96), *(const wchar_t **)v6) )
        {
          if ( (dword_18015D498 & 4) != 0 )
            DbgPrint(
              "AVRF: pid 0x%X: found dll descriptor for `%ws' with verified exports \n",
              LODWORD(NtCurrentTeb()->ClientId.UniqueProcess),
              *(_QWORD *)(a1 + 96));
          if ( sub_1800D4C00(v6, a1) )
            *(_DWORD *)(v6 + 8) |= 1u;
        }
        v6 = (__int64)&v4[4 * (unsigned int)++v5];
      }
      while ( *(_QWORD *)v6 );
    }
  }
  return sub_1800D5854(a1);
}
