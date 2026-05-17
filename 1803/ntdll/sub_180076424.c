/*
 * XREFs of sub_180076424 @ 0x180076424
 * Callers:
 *     sub_180076270 @ 0x180076270 (sub_180076270.c)
 *     sub_1800763CC @ 0x1800763CC (sub_1800763CC.c)
 * Callees:
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x18009AE60 (ZwCreateKey.c)
 */

__int64 __fastcall sub_180076424(_QWORD *a1, __int64 a2, char a3)
{
  __int64 result; // rax
  int v5; // [rsp+40h] [rbp-38h] BYREF
  __int64 v6; // [rsp+48h] [rbp-30h]
  void *v7; // [rsp+50h] [rbp-28h]
  int v8; // [rsp+58h] [rbp-20h]
  __int128 v9; // [rsp+60h] [rbp-18h]
  __int64 v10; // [rsp+98h] [rbp+20h] BYREF

  v5 = 48;
  v6 = 0LL;
  v8 = 576;
  v7 = &unk_1801107B0;
  v9 = 0LL;
  if ( a3 )
    result = ZwCreateKey(&v10, a2, &v5, 0LL, 0LL, 0, 0LL);
  else
    result = ZwOpenKey(&v10, a2, &v5);
  if ( (int)result >= 0 )
  {
    *a1 = v10;
    return 0LL;
  }
  return result;
}
