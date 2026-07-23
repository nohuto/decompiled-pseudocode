/*
 * XREFs of EtwpAddInstanceIdToLogFileName @ 0x180065624
 * Callers:
 *     EtwpFlushUmLogger @ 0x180060D00 (EtwpFlushUmLogger.c)
 *     EtwpInitLoggerContext @ 0x180065218 (EtwpInitLoggerContext.c)
 *     EtwpUpdateUmLogger @ 0x180109CFC (EtwpUpdateUmLogger.c)
 * Callees:
 *     RtlCreateUnicodeString @ 0x18004EE70 (RtlCreateUnicodeString.c)
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 *     StringCchCopyW @ 0x18008FB00 (StringCchCopyW.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     StringCchPrintfW @ 0x1800DD958 (StringCchPrintfW.c)
 */

__int64 __fastcall EtwpAddInstanceIdToLogFileName(__int64 a1, int a2, _UNICODE_STRING *a3)
{
  int UniqueProcess; // ecx
  wchar_t *v7; // rdx
  __int64 result; // rax
  wchar_t pszDest[1024]; // [rsp+30h] [rbp-818h] BYREF

  RtlInitUnicodeString(a3, 0LL);
  UniqueProcess = (int)NtCurrentTeb()->ClientId.UniqueProcess;
  *(_DWORD *)(a1 + 100) = UniqueProcess;
  if ( a2 == 1 )
  {
    v7 = *(wchar_t **)(a1 + 136);
  }
  else
  {
    if ( *(_WORD *)(a1 + 130) > 0x800u )
      LODWORD(result) = StringCchCopyW(pszDest, 0x400uLL, *(STRSAFE_LPCWSTR *)(a1 + 136));
    else
      LODWORD(result) = StringCchPrintfW(pszDest, 0x400uLL, L"%s_%d", *(_QWORD *)(a1 + 136), UniqueProcess);
    if ( (int)result < 0 )
      return (unsigned __int16)result;
    v7 = pszDest;
  }
  if ( RtlCreateUnicodeString(a3, v7) )
    return 0LL;
  else
    return 8LL;
}
