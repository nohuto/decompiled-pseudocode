/*
 * XREFs of RaiseException @ 0x1C00AB320
 * Callers:
 *     _raise_exc_ex @ 0x1C00AB3E4 (_raise_exc_ex.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     RtlRaiseException_0 @ 0x1C00AB7B4 (RtlRaiseException_0.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 */

void __fastcall RaiseException(DWORD a1, char a2, __int64 a3, const void *a4)
{
  _EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  HIDWORD(ExceptionRecord.ExceptionRecord) = 0;
  ExceptionRecord.ExceptionCode = a1;
  *(_QWORD *)&ExceptionRecord.ExceptionFlags = a2 & 1;
  ExceptionRecord.ExceptionAddress = &RaiseException;
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
  RtlRaiseException_0(&ExceptionRecord);
}
