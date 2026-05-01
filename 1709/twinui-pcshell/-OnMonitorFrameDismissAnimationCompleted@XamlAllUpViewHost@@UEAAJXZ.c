/*
 * XREFs of ?OnMonitorFrameDismissAnimationCompleted@XamlAllUpViewHost@@UEAAJXZ @ 0x180159820
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x18015CB30 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 */

__int64 __fastcall XamlAllUpViewHost::OnMonitorFrameDismissAnimationCompleted(XamlAllUpViewHost *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( ++*((_QWORD *)this + 22) == (__int64)(*((_QWORD *)this + 19) - *((_QWORD *)this + 18)) >> 3 )
  {
    v1 = CMultitaskingViewHostBase<IAllUpViewHost>::DismissView((char *)this - 128);
    v2 = v1;
    if ( v1 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x219,
        (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
        (const char *)(unsigned int)v1);
    return v2;
  }
  else
  {
    return 0LL;
  }
}
