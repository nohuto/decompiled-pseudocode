/*
 * XREFs of _GetWOWClass @ 0x1C01C3038
 * Callers:
 *     NtUserGetWOWClass @ 0x1C01DAE90 (NtUserGetWOWClass.c)
 * Callees:
 *     GetClassPtr @ 0x1C0035DD0 (GetClassPtr.c)
 *     RtlStringCchCopyW @ 0x1C003767C (RtlStringCchCopyW.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

_QWORD *__fastcall GetWOWClass(__int64 a1, const wchar_t *a2)
{
  __int64 ClassPtr; // rdi
  __int64 ThreadWin32Thread; // rsi
  unsigned __int16 Atom; // ax
  _QWORD *result; // rax
  __int64 v8; // rcx
  wchar_t pszDest[256]; // [rsp+40h] [rbp-228h] BYREF

  ClassPtr = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( RtlStringCchCopyW(pszDest, 0x100uLL, a2) < 0 )
    Atom = 0;
  else
    Atom = UserFindAtom(pszDest);
  if ( Atom )
    ClassPtr = GetClassPtr(Atom, *(_QWORD *)(ThreadWin32Thread + 376), a1);
  if ( ClassPtr )
  {
    result = *(_QWORD **)ClassPtr;
    v8 = *(_QWORD *)(ThreadWin32Thread + 408);
    if ( v8 == *(_QWORD *)(*(_QWORD *)ClassPtr + 16LL) )
      return result;
    for ( result = (_QWORD *)result[9]; result; result = (_QWORD *)*result )
    {
      if ( v8 == result[2] )
        return result;
    }
  }
  UserSetLastError(1411LL);
  return 0LL;
}
