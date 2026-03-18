/*
 * XREFs of _GetWOWClass @ 0x1C01C5D54
 * Callers:
 *     NtUserGetWOWClass @ 0x1C01E70E0 (NtUserGetWOWClass.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     GetClassPtr @ 0x1C0072FE0 (GetClassPtr.c)
 *     RtlStringCchCopyW @ 0x1C009DD08 (RtlStringCchCopyW.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

_QWORD *__fastcall GetWOWClass(__int64 a1, const wchar_t *a2, __int64 a3, __int64 a4)
{
  __int64 ClassPtr; // rdi
  __int64 ThreadWin32Thread; // rsi
  __int64 v7; // rdx
  unsigned __int16 Atom; // ax
  _QWORD *result; // rax
  __int64 v10; // rcx
  wchar_t pszDest[256]; // [rsp+40h] [rbp-228h] BYREF

  ClassPtr = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, a3, a4);
  if ( RtlStringCchCopyW(pszDest, 0x100uLL, a2) < 0 )
    Atom = 0;
  else
    Atom = UserFindAtom(pszDest);
  if ( Atom )
    ClassPtr = GetClassPtr(Atom, *(_QWORD *)(ThreadWin32Thread + 400));
  if ( ClassPtr )
  {
    result = *(_QWORD **)ClassPtr;
    v10 = *(_QWORD *)(ThreadWin32Thread + 432);
    if ( v10 == *(_QWORD *)(*(_QWORD *)ClassPtr + 16LL) )
      return result;
    for ( result = (_QWORD *)result[9]; result; result = (_QWORD *)*result )
    {
      if ( v10 == result[2] )
        return result;
    }
  }
  UserSetLastError(1411LL, v7);
  return 0LL;
}
