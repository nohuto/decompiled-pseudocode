/*
 * XREFs of ?UpdateCurrentTime@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18011CF44
 * Callers:
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x180014D80 (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180015304 (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::UpdateCurrentTime(LARGE_INTEGER *this)
{
  LARGE_INTEGER *v1; // rdi
  LARGE_INTEGER *v3; // rsi
  __int64 v4; // rbx
  unsigned __int64 v5; // rbx
  unsigned __int64 QuadPart; // rbx
  ULONG_PTR v7; // rax
  unsigned __int64 v8; // rbx
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-69h] BYREF

  v1 = this + 3692;
  v3 = this + 3690;
  v4 = (_QWORD)(this + 3692) << 32;
  if ( (this[3690].QuadPart ^ ((unsigned __int64)&this[3692] | v4)) != this[3692].QuadPart )
  {
    memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    v5 = v1->QuadPart ^ ((unsigned __int64)v1 | v4);
    pExceptionRecord.ExceptionInformation[0] = (int)HIDWORD(v3->QuadPart);
    pExceptionRecord.ExceptionInformation[1] = v3->LowPart;
    pExceptionRecord.ExceptionInformation[2] = SHIDWORD(v5);
    pExceptionRecord.ExceptionInformation[3] = (unsigned int)v5;
    pExceptionRecord.ExceptionCode = -2003304320;
    pExceptionRecord.NumberParameters = 4;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  this[3691] = *v3;
  QueryPerformanceCounter(v3);
  QuadPart = this[3691].QuadPart;
  if ( v3->QuadPart < QuadPart )
  {
    memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionInformation[0] = (int)HIDWORD(v3->QuadPart);
    pExceptionRecord.ExceptionInformation[1] = v3->LowPart;
    pExceptionRecord.ExceptionInformation[2] = SHIDWORD(QuadPart);
    v7 = (unsigned int)QuadPart;
    v8 = QuadPart - v3->QuadPart;
    pExceptionRecord.ExceptionInformation[3] = v7;
    pExceptionRecord.ExceptionInformation[4] = g_qpcFrequency.HighPart;
    pExceptionRecord.ExceptionInformation[5] = g_qpcFrequency.LowPart;
    pExceptionRecord.ExceptionCode = -2003304293;
    pExceptionRecord.NumberParameters = 8;
    pExceptionRecord.ExceptionInformation[6] = (int)((1000 * v8 / g_qpcFrequency.QuadPart) >> 32);
    pExceptionRecord.ExceptionInformation[7] = (unsigned int)(1000 * v8 / g_qpcFrequency.QuadPart);
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  v1->QuadPart = v3->QuadPart ^ ((unsigned __int64)v1 | ((_QWORD)v1 << 32));
}
