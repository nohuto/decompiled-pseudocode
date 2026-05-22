/*
 * XREFs of ?GetThreadDesktopName@@YAHPEA_WK@Z @ 0x18002E37C
 * Callers:
 *     ?RuntimeClassInitialize@InputServiceProxy@@QEAAJPEAUIInputServiceProxyOwner@@@Z @ 0x180025A1C (-RuntimeClassInitialize@InputServiceProxy@@QEAAJPEAUIInputServiceProxyOwner@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

__int64 __fastcall GetThreadDesktopName(wchar_t *a1)
{
  DWORD CurrentThreadId; // eax
  HDESK ThreadDesktop; // rax
  __int64 v4; // rcx
  signed __int64 v5; // r8
  unsigned int v6; // edx
  wchar_t v7; // ax
  signed __int64 v8; // r8
  wchar_t v9; // ax
  wchar_t *v10; // rax
  DWORD nLengthNeeded[4]; // [rsp+30h] [rbp-238h] BYREF
  _BYTE pvInfo[528]; // [rsp+40h] [rbp-228h] BYREF

  CurrentThreadId = GetCurrentThreadId();
  ThreadDesktop = GetThreadDesktop(CurrentThreadId);
  if ( ThreadDesktop && GetUserObjectInformationW(ThreadDesktop, 2, pvInfo, 0x208u, nLengthNeeded) )
  {
    v4 = 260LL;
    v5 = pvInfo - (_BYTE *)a1;
    v6 = 1;
    do
    {
      if ( v4 == -2147483386 )
        break;
      v7 = *(wchar_t *)((char *)a1 + v5);
      if ( !v7 )
        break;
      *a1++ = v7;
      --v4;
    }
    while ( v4 );
  }
  else
  {
    v4 = 260LL;
    v8 = (char *)&sourceString - (char *)a1;
    do
    {
      if ( v4 == -2147483386 )
        break;
      v9 = *(wchar_t *)((char *)a1 + v8);
      if ( !v9 )
        break;
      *a1++ = v9;
      --v4;
    }
    while ( v4 );
    v6 = 0;
  }
  v10 = a1 - 1;
  if ( v4 )
    v10 = a1;
  *v10 = 0;
  return v6;
}
