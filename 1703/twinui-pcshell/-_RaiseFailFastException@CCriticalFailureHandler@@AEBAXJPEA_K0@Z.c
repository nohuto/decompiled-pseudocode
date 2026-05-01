/*
 * XREFs of ?_RaiseFailFastException@CCriticalFailureHandler@@AEBAXJPEA_K0@Z @ 0x18017878C
 * Callers:
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1801781F0 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 * Callees:
 *     ?_RaiseFailFastExceptionInvalidOXID@CCriticalFailureHandler@@AEBAXPEAU_EXCEPTION_RECORD@@PEAU_CONTEXT@@K@Z @ 0x180178884 (-_RaiseFailFastExceptionInvalidOXID@CCriticalFailureHandler@@AEBAXPEAU_EXCEPTION_RECORD@@PEAU_CO.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     memset @ 0x180194E50 (memset.c)
 */

void __fastcall CCriticalFailureHandler::_RaiseFailFastException(
        CCriticalFailureHandler *this,
        int a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  ULONG_PTR v5; // rbx
  int v7; // ecx
  _EXCEPTION_RECORD pExceptionRecord; // [rsp+28h] [rbp-59h] BYREF

  v5 = a2;
  memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
  pExceptionRecord.ExceptionCode = dword_1802431F4;
  v7 = 1;
  pExceptionRecord.NumberParameters = 1;
  pExceptionRecord.ExceptionFlags = 1;
  pExceptionRecord.ExceptionInformation[0] = v5;
  if ( a3 )
  {
    v7 = 2;
    pExceptionRecord.ExceptionInformation[1] = *a3;
    pExceptionRecord.NumberParameters = 2;
  }
  if ( a4 )
  {
    pExceptionRecord.ExceptionInformation[2] = *a4;
    pExceptionRecord.NumberParameters = v7 + 1;
  }
  if ( (_DWORD)v5 == -2147418094 || (_DWORD)v5 == -2147022986 )
    CCriticalFailureHandler::_RaiseFailFastExceptionInvalidOXID(
      (CCriticalFailureHandler *)&CRVPrivate::cfhImmersiveShellStartup,
      &pExceptionRecord,
      0LL,
      1u);
  else
    RaiseFailFastException(&pExceptionRecord, 0LL, 1u);
}
