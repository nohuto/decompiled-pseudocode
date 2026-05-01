/*
 * XREFs of ?EnableShellWindowManagementBehavior@ViewPresentationMediator@@UEAAJKK@Z @ 0x1801F61F0
 * Callers:
 *     ?OnChannelSever@ViewPresentationMediator@@UEAAXXZ @ 0x1801F6500 (-OnChannelSever@ViewPresentationMediator@@UEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewPresentationMediator::EnableShellWindowManagementBehavior(
        ViewPresentationMediator *this,
        int a2,
        int a3)
{
  int v4; // ebx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)this + 50) = a2;
  *((_DWORD *)this + 51) = a3;
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 24LL))(*((_QWORD *)this + 11));
  if ( v4 == -2147019873 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 128LL))(*((_QWORD *)this + 12));
    v4 = v5;
    if ( v5 >= 0 )
      v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 11) + 24LL))(
             *((_QWORD *)this + 11),
             *((unsigned int *)this + 50),
             *((unsigned int *)this + 51));
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        211LL,
        (__int64)"pcshell\\twinui\\viewpresentationmediator\\lib\\viewpresentationmediator.cpp",
        (const char *)(unsigned int)v5);
  }
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD8,
      (__int64)"pcshell\\twinui\\viewpresentationmediator\\lib\\viewpresentationmediator.cpp",
      (const char *)(unsigned int)v4);
  return (unsigned int)v4;
}
