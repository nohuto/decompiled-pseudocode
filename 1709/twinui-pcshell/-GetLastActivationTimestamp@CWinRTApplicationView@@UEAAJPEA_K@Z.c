/*
 * XREFs of ?GetLastActivationTimestamp@CWinRTApplicationView@@UEAAJPEA_K@Z @ 0x1800831B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWinRTApplicationView::GetLastActivationTimestamp(CWinRTApplicationView *this, unsigned __int64 *a2)
{
  unsigned __int64 v3; // rdi
  int v4; // eax
  unsigned int v5; // ebx
  unsigned __int64 v7; // rbx
  unsigned __int64 UnbiasedTime; // [rsp+20h] [rbp-58h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v10[16]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+40h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v3 = 0LL;
  *a2 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 23) + 80LL))(*((_QWORD *)this + 23), v10);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = v11;
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    QueryUnbiasedInterruptTime(&UnbiasedTime);
    if ( v7 )
    {
      v3 = UnbiasedTime;
      if ( *(_QWORD *)&SystemTimeAsFileTime >= v7 )
      {
        if ( *(_QWORD *)&SystemTimeAsFileTime - v7 < UnbiasedTime )
          v3 = v7 + UnbiasedTime - *(_QWORD *)&SystemTimeAsFileTime;
        else
          v3 = 1LL;
      }
    }
    *a2 = v3;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x123,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
