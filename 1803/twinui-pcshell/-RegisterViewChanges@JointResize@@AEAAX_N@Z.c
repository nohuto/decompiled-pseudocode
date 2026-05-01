/*
 * XREFs of ?RegisterViewChanges@JointResize@@AEAAX_N@Z @ 0x1802E9FEC
 * Callers:
 *     ?Cleanup@JointResize@@AEAAXXZ @ 0x1802E8CF4 (-Cleanup@JointResize@@AEAAXXZ.c)
 *     ?OnArrangedWindowBorderEnter@JointResize@@UEAAXPEAUHWND__@@HI@Z @ 0x1802E9800 (-OnArrangedWindowBorderEnter@JointResize@@UEAAXPEAUHWND__@@HI@Z.c)
 *     ?OnArrangedWindowSizeStarted@JointResize@@UEAAJPEAUIApplicationView@@UtagRECT@@HI@Z @ 0x1802E9A30 (-OnArrangedWindowSizeStarted@JointResize@@UEAAJPEAUIApplicationView@@UtagRECT@@HI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall JointResize::RegisterViewChanges(JointResize *this, char a2)
{
  _DWORD *v2; // rbx
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (_DWORD *)((char *)this + 424);
  if ( a2 )
  {
    if ( !*v2 )
      (*(void (__fastcall **)(_QWORD, char *, _DWORD *))(**((_QWORD **)this + 17) + 88LL))(
        *((_QWORD *)this + 17),
        (char *)this + 96,
        v2);
  }
  else if ( *v2 )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, JointResize *))(**((_QWORD **)this + 17) + 96LL))(
           *((_QWORD *)this + 17),
           (unsigned int)*v2,
           this);
    if ( v3 >= 0 )
      *v2 = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        495LL,
        (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
        (const char *)(unsigned int)v3);
  }
}
