/*
 * XREFs of ?GetQPCTime@CPartitionScheduler@@IEAAXPEA_K@Z @ 0x1800C95B8
 * Callers:
 *     ?GetAbsoluteTime@CPartitionScheduler@@IEAA_KXZ @ 0x1800C9560 (-GetAbsoluteTime@CPartitionScheduler@@IEAA_KXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

void __fastcall CPartitionScheduler::GetQPCTime(LARGE_INTEGER *this, unsigned __int64 *a2)
{
  LARGE_INTEGER *v2; // rdi
  LARGE_INTEGER *v4; // rsi
  __int64 v5; // rbx
  unsigned __int64 QuadPart; // rbx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-79h] BYREF

  v2 = this + 6;
  v4 = this + 4;
  v5 = (_QWORD)(this + 6) << 32;
  if ( (this[4].QuadPart ^ ((unsigned __int64)&this[6] | v5)) != this[6].QuadPart )
  {
    memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    v9 = v2->QuadPart ^ ((unsigned __int64)v2 | v5);
    pExceptionRecord.ExceptionInformation[0] = (int)HIDWORD(v4->QuadPart);
    pExceptionRecord.ExceptionInformation[1] = v4->LowPart;
    pExceptionRecord.ExceptionInformation[2] = SHIDWORD(v9);
    pExceptionRecord.ExceptionInformation[3] = (unsigned int)v9;
    pExceptionRecord.ExceptionCode = -2003304320;
    pExceptionRecord.NumberParameters = 4;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  this[5] = *v4;
  QueryPerformanceCounter(v4);
  QuadPart = this[5].QuadPart;
  if ( v4->QuadPart < QuadPart )
  {
    memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionInformation[0] = (int)HIDWORD(v4->QuadPart);
    pExceptionRecord.ExceptionInformation[1] = v4->LowPart;
    pExceptionRecord.ExceptionInformation[2] = SHIDWORD(QuadPart);
    pExceptionRecord.ExceptionInformation[3] = (unsigned int)QuadPart;
    pExceptionRecord.ExceptionCode = -2003304293;
    pExceptionRecord.NumberParameters = 4;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  v8 = v4->QuadPart;
  v2->QuadPart = v4->QuadPart ^ ((unsigned __int64)v2 | ((_QWORD)v2 << 32));
  *a2 = v8;
}
