/*
 * XREFs of sub_180047438 @ 0x180047438
 * Callers:
 *     sub_180044B58 @ 0x180044B58 (sub_180044B58.c)
 *     sub_180078B20 @ 0x180078B20 (sub_180078B20.c)
 * Callees:
 *     sub_180045280 @ 0x180045280 (sub_180045280.c)
 *     _wcsicmp @ 0x1800976A0 (_wcsicmp.c)
 */

char __fastcall sub_180047438(wchar_t *String1, wchar_t *String2, unsigned int a3)
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
      if ( (int)sub_180045280(String1, a3, &v10) >= 0 )
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
