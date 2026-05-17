/*
 * XREFs of sub_180030EF0 @ 0x180030EF0
 * Callers:
 *     sub_180030CC8 @ 0x180030CC8 (sub_180030CC8.c)
 *     sub_180030E7C @ 0x180030E7C (sub_180030E7C.c)
 *     sub_1800E82D0 @ 0x1800E82D0 (sub_1800E82D0.c)
 *     sub_1800FA6F0 @ 0x1800FA6F0 (sub_1800FA6F0.c)
 *     sub_1800FB548 @ 0x1800FB548 (sub_1800FB548.c)
 * Callees:
 *     _wcsicmp @ 0x18008CAD0 (_wcsicmp.c)
 */

char __fastcall sub_180030EF0(wchar_t *String1, wchar_t *String2)
{
  char v2; // bl
  const wchar_t *v4; // rdi
  __int64 v5; // rax

  v2 = 0;
  v4 = String1;
  if ( String1 && String2 )
  {
    while ( *v4 )
    {
      if ( !wcsicmp(v4, String2) )
        return 1;
      v5 = -1LL;
      do
        ++v5;
      while ( v4[v5] );
      v4 += v5 + 1;
      if ( !v4 )
        return v2;
    }
  }
  return v2;
}
