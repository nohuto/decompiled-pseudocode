/*
 * XREFs of InitSecurityCookie @ 0x1800D2800
 * Callers:
 *     LdrpInitialize @ 0x180078E20 (LdrpInitialize.c)
 * Callees:
 *     LdrpGenRandom @ 0x180022BB8 (LdrpGenRandom.c)
 *     LdrInitSecurityCookie @ 0x180022E04 (LdrInitSecurityCookie.c)
 *     ZwDelayExecution @ 0x1800A0740 (ZwDelayExecution.c)
 */

__int64 InitSecurityCookie()
{
  __int64 result; // rax
  __int64 v1; // rax
  signed __int32 v2[8]; // [rsp+0h] [rbp-38h] BYREF

  result = (unsigned int)_InterlockedIncrement(&SecurityCookieInitCount);
  if ( (_DWORD)result == 1 )
  {
    v1 = LdrpGenRandom();
    result = LdrInitSecurityCookie(0, 0, &_security_cookie, v1 ^ (unsigned int)dword_18016F358, 0LL);
    _InterlockedOr(v2, 0);
    SecurityCookieInitialized = 1;
  }
  else
  {
    while ( !SecurityCookieInitialized )
      result = ZwDelayExecution();
  }
  return result;
}
