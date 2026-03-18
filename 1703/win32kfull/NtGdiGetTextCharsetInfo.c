/*
 * XREFs of NtGdiGetTextCharsetInfo @ 0x1C00E0860
 * Callers:
 *     <none>
 * Callees:
 *     GreGetTextCharsetInfo @ 0x1C00E08F4 (GreGetTextCharsetInfo.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiGetTextCharsetInfo(HDC a1, unsigned __int64 a2)
{
  __int64 result; // rax

  result = GreGetTextCharsetInfo(a1);
  if ( (_DWORD)result != -1 && a2 )
  {
    if ( a2 >= W32UserProbeAddress )
      a2 = W32UserProbeAddress;
    *(_OWORD *)a2 = 0uLL;
    *(_QWORD *)(a2 + 16) = 0LL;
  }
  return result;
}
