/*
 * XREFs of sub_1800F287C @ 0x1800F287C
 * Callers:
 *     sub_1800F2924 @ 0x1800F2924 (sub_1800F2924.c)
 * Callees:
 *     sub_18006F918 @ 0x18006F918 (sub_18006F918.c)
 *     sub_18006F938 @ 0x18006F938 (sub_18006F938.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 */

__int64 __fastcall sub_1800F287C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // [rsp+78h] [rbp+18h] BYREF

  v5 = 0LL;
  if ( !qword_18015D7B0 && (int)sub_18006F938(0x20019u, 0, a3, a4, (__int64)&v5) >= 0 )
  {
    if ( (int)ZwOpenKey() >= 0 && _InterlockedCompareExchange64(&qword_18015D7B0, 0LL, 0LL) )
      ZwClose();
    sub_18006F918(v5);
  }
  return qword_18015D7B0;
}
