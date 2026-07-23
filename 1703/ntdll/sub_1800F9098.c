/*
 * XREFs of sub_1800F9098 @ 0x1800F9098
 * Callers:
 *     sub_1800F8C24 @ 0x1800F8C24 (sub_1800F8C24.c)
 * Callees:
 *     sub_1800059EC @ 0x1800059EC (sub_1800059EC.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     sub_1800F8CC0 @ 0x1800F8CC0 (sub_1800F8CC0.c)
 *     sub_1800F8D00 @ 0x1800F8D00 (sub_1800F8D00.c)
 */

__int64 __fastcall sub_1800F9098(void *a1, ULONG_PTR a2, ULONG_PTR a3)
{
  NTSTATUS v4; // ebx
  _QWORD *v5; // [rsp+20h] [rbp-28h] BYREF
  _DWORD v6[4]; // [rsp+28h] [rbp-20h] BYREF

  if ( qword_180159A08 )
    return 3221225994LL;
  v4 = sub_1800F8D00(a1, a2, a3, &v5);
  if ( v4 >= 0 && _InterlockedCompareExchange64(&qword_180159A08, (signed __int64)v5, 0LL) )
  {
    sub_1800F8CC0(v5);
    return 3221225994LL;
  }
  if ( v4 >= 0 && dword_18015C018 == 3 )
  {
    v6[0] = 1;
    v6[1] = 0x8000000;
    v6[2] = 0x8000000;
    sub_1800059EC((__int64)sub_1800F9140, (__int64)v6, 0);
  }
  return (unsigned int)v4;
}
