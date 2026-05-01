/*
 * XREFs of ?GetLastActivationTimestamp@CWin32ApplicationView@@UEAAJPEA_K@Z @ 0x18007F900
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWin32ApplicationView::GetLastActivationTimestamp(CWin32ApplicationView *this, unsigned __int64 *a2)
{
  unsigned __int64 v3; // rdi
  int v4; // eax
  unsigned int v5; // ebx
  unsigned __int64 v7; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int64 UnbiasedTime; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v10; // [rsp+48h] [rbp+10h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0LL;
  *a2 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(**((_QWORD **)this + 24) + 40LL))(
         *((_QWORD *)this + 24),
         &v10);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = v10;
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
      (void *)0x205,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
