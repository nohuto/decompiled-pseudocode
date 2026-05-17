/*
 * XREFs of sub_1800E21DC @ 0x1800E21DC
 * Callers:
 *     sub_1800912E0 @ 0x1800912E0 (sub_1800912E0.c)
 * Callees:
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 */

__int64 __fastcall sub_1800E21DC(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  signed __int64 v5; // [rsp+78h] [rbp+20h]

  if ( qword_18015A1F8 )
  {
    *a3 = qword_18015A1F8;
  }
  else
  {
    result = ZwOpenKey();
    if ( (int)result < 0 )
      return result;
    if ( _InterlockedCompareExchange64(&qword_18015A1F8, v5, 0LL) )
      ZwClose();
    *a3 = qword_18015A1F8;
  }
  return 0LL;
}
