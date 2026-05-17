/*
 * XREFs of sub_180004DBC @ 0x180004DBC
 * Callers:
 *     sub_180087CD0 @ 0x180087CD0 (sub_180087CD0.c)
 * Callees:
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1800A56A0 (ZwCreateKey.c)
 */

__int64 __fastcall sub_180004DBC(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v5; // [rsp+40h] [rbp-30h] BYREF
  __int64 v6; // [rsp+48h] [rbp-28h]
  __int64 v7; // [rsp+50h] [rbp-20h]
  int v8; // [rsp+58h] [rbp-18h]
  __int128 v9; // [rsp+60h] [rbp-10h]
  char v10; // [rsp+88h] [rbp+18h] BYREF

  if ( a2 == 1 )
  {
    v6 = a1;
    v7 = a3;
    v5 = 48;
    v8 = 64;
    v9 = 0LL;
    return ZwOpenKey(a4, 0x10000LL, &v5);
  }
  else if ( a2 == 2 )
  {
    v6 = a1;
    v7 = a3;
    v5 = 48;
    v8 = 192;
    v9 = 0LL;
    return ZwCreateKey(a4, 131078LL, &v5, 0LL, 0LL, 0, &v10);
  }
  else
  {
    return 3221225485LL;
  }
}
