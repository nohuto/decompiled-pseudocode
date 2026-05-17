/*
 * XREFs of sub_1800DBE70 @ 0x1800DBE70
 * Callers:
 *     sub_1800CD0D8 @ 0x1800CD0D8 (sub_1800CD0D8.c)
 * Callees:
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 */

__int64 __fastcall sub_1800DBE70(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  signed __int64 v5; // [rsp+78h] [rbp+20h]

  if ( qword_18015B240 )
  {
    *a3 = qword_18015B240;
  }
  else
  {
    result = ZwOpenKey();
    if ( (int)result < 0 )
      return result;
    if ( _InterlockedCompareExchange64(&qword_18015B240, v5, 0LL) )
      ZwClose();
    *a3 = qword_18015B240;
  }
  return 0LL;
}
