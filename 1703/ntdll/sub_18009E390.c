/*
 * XREFs of sub_18009E390 @ 0x18009E390
 * Callers:
 *     sub_18009E840 @ 0x18009E840 (sub_18009E840.c)
 * Callees:
 *     RtlRaiseException @ 0x180030AC0 (RtlRaiseException.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

void __fastcall sub_18009E390(DWORD a1, char a2, __int64 a3, const void *a4)
{
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  HIDWORD(ExceptionRecord.ExceptionRecord) = 0;
  ExceptionRecord.ExceptionCode = a1;
  *(_QWORD *)&ExceptionRecord.ExceptionFlags = a2 & 1;
  ExceptionRecord.ExceptionAddress = &sub_18009E390;
  if ( a4 )
  {
    if ( (unsigned int)a3 > 0xF )
      a3 = 15LL;
    ExceptionRecord.NumberParameters = a3;
    if ( (_DWORD)a3 )
      memmove(ExceptionRecord.ExceptionInformation, a4, 8 * a3);
  }
  else
  {
    ExceptionRecord.NumberParameters = 0;
  }
  RtlRaiseException(&ExceptionRecord);
}
