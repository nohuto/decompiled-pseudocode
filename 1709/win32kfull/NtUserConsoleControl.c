/*
 * XREFs of NtUserConsoleControl @ 0x1C0090350
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C000AC04 (UserSetLastStatus.c)
 *     xxxConsoleControl @ 0x1C0090464 (xxxConsoleControl.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     _W32ExceptionHandler @ 0x1C02267D0 (_W32ExceptionHandler.c)
 */

__int64 __fastcall NtUserConsoleControl(unsigned int a1, volatile void *a2, unsigned int a3)
{
  SIZE_T v3; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  SIZE_T v9; // rsi
  _BYTE Src[24]; // [rsp+30h] [rbp-38h] BYREF

  v3 = a3;
  memset(Src, 0, sizeof(Src));
  EnterCrit(0LL, 1LL);
  if ( a1 <= 6 )
  {
    if ( (unsigned int)v3 <= 0x18 )
    {
      if ( a2 && (_DWORD)v3 )
      {
        v9 = v3;
        ProbeForRead(a2, v3, 2u);
        memmove(Src, (const void *)a2, v3);
        v8 = xxxConsoleControl(a1, Src, (unsigned int)v3);
        ProbeForWrite(a2, v9, 2u);
        memmove((void *)a2, Src, v9);
      }
      else
      {
        v8 = -1073741811;
      }
    }
    else
    {
      v8 = -1073741811;
    }
  }
  else
  {
    v8 = -1073741823;
    UserSetLastStatus(-1073741811, 1);
  }
  UserSessionSwitchLeaveCrit(v7, v6);
  return v8;
}
