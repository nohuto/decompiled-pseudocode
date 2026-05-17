/*
 * XREFs of sub_1800F52EC @ 0x1800F52EC
 * Callers:
 *     sub_1800F5394 @ 0x1800F5394 (sub_1800F5394.c)
 * Callees:
 *     sub_18006E310 @ 0x18006E310 (sub_18006E310.c)
 *     sub_18006E330 @ 0x18006E330 (sub_18006E330.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 */

__int64 __fastcall sub_1800F52EC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // [rsp+78h] [rbp+18h] BYREF

  v5 = 0LL;
  if ( !qword_18015C788 && (int)sub_18006E330(0x20019u, 0, a3, a4, (__int64)&v5) >= 0 )
  {
    if ( (int)ZwOpenKey() >= 0 && _InterlockedCompareExchange64(&qword_18015C788, 0LL, 0LL) )
      ZwClose();
    sub_18006E310(v5);
  }
  return qword_18015C788;
}
