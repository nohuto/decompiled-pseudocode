/*
 * XREFs of sub_18008A858 @ 0x18008A858
 * Callers:
 *     sub_18008A7B4 @ 0x18008A7B4 (sub_18008A7B4.c)
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1800A55E0 (ZwQueryValueKey.c)
 */

__int64 sub_18008A858()
{
  __int64 result; // rax
  __int64 v1; // [rsp+30h] [rbp-9h] BYREF
  _BYTE v2[8]; // [rsp+38h] [rbp-1h] BYREF
  int v3; // [rsp+40h] [rbp+7h] BYREF
  __int64 v4; // [rsp+48h] [rbp+Fh]
  void *v5; // [rsp+50h] [rbp+17h]
  int v6; // [rsp+58h] [rbp+1Fh]
  __int128 v7; // [rsp+60h] [rbp+27h]
  _BYTE v8[8]; // [rsp+70h] [rbp+37h] BYREF
  int v9; // [rsp+78h] [rbp+3Fh]
  int v10; // [rsp+7Ch] [rbp+43h]

  v1 = 0LL;
  v4 = 0LL;
  v5 = &unk_1801108A0;
  v3 = 48;
  v6 = 64;
  v7 = 0LL;
  result = ZwOpenKey(&v1, 1LL, &v3);
  if ( (int)result >= 0 )
  {
    result = ZwQueryValueKey(v1, &unk_180110890, 2LL, v8, 20, v2);
    if ( (int)result >= 0 && v9 == 4 )
    {
      if ( v10 )
        dword_18015BFDC |= 0x10u;
      else
        dword_18015BFDC |= 8u;
    }
  }
  if ( v1 )
    return ZwClose(v1);
  return result;
}
