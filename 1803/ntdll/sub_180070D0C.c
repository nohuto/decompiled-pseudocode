/*
 * XREFs of sub_180070D0C @ 0x180070D0C
 * Callers:
 *     sub_180035C74 @ 0x180035C74 (sub_180035C74.c)
 *     sub_180070B90 @ 0x180070B90 (sub_180070B90.c)
 * Callees:
 *     sub_180035D8C @ 0x180035D8C (sub_180035D8C.c)
 *     _wcsicmp @ 0x18008CAD0 (_wcsicmp.c)
 */

char __fastcall sub_180070D0C(wchar_t *String1, wchar_t *String2, unsigned int a3)
{
  char v3; // bl
  const wchar_t *v5; // rdi
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v5 = String1;
  v6 = 0LL;
  if ( String1 )
  {
    if ( String2 )
    {
      v7 = a3;
      if ( (int)sub_180035D8C(String1, a3, &v10) >= 0 )
      {
        if ( v7 )
        {
          while ( v5 && *v5 )
          {
            if ( !wcsicmp(v5, String2) )
              return 1;
            v8 = -1LL;
            do
              ++v8;
            while ( v5[v8] );
            v6 += v8 + 1;
            v5 += v8 + 1;
            if ( v6 >= v7 )
              return v3;
          }
        }
      }
    }
  }
  return v3;
}
