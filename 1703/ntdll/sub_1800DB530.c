/*
 * XREFs of sub_1800DB530 @ 0x1800DB530
 * Callers:
 *     sub_180088F00 @ 0x180088F00 (sub_180088F00.c)
 *     sub_1800DC010 @ 0x1800DC010 (sub_1800DC010.c)
 * Callees:
 *     DbgPrint @ 0x18005FEF0 (DbgPrint.c)
 *     _wcsicmp @ 0x1800976A0 (_wcsicmp.c)
 *     sub_1800DB44C @ 0x1800DB44C (sub_1800DB44C.c)
 *     sub_1800DC094 @ 0x1800DC094 (sub_1800DC094.c)
 */

__int64 __fastcall sub_1800DB530(__int64 a1)
{
  __int64 *v3; // rdi
  _QWORD *v4; // rbp
  int v5; // r14d
  __int64 v6; // rbx

  if ( !byte_18016B281 )
    return 0LL;
  v3 = (__int64 *)qword_18015A570;
  while ( v3 != &qword_18015A570 )
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
          if ( (dword_18015C494 & 4) != 0 )
            DbgPrint(
              "AVRF: pid 0x%X: found dll descriptor for `%ws' with verified exports \n",
              LODWORD(NtCurrentTeb()->ClientId.UniqueProcess),
              *(_QWORD *)(a1 + 96));
          if ( sub_1800DB44C(v6, a1) )
            *(_DWORD *)(v6 + 8) |= 1u;
        }
        v6 = (__int64)&v4[4 * (unsigned int)++v5];
      }
      while ( *(_QWORD *)v6 );
    }
  }
  return sub_1800DC094(a1);
}
