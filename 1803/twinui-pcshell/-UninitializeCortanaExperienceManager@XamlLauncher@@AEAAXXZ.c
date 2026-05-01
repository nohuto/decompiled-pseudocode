/*
 * XREFs of ?UninitializeCortanaExperienceManager@XamlLauncher@@AEAAXXZ @ 0x18022A208
 * Callers:
 *     ?UnsubscribeFromServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z @ 0x18022A580 (-UnsubscribeFromServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall XamlLauncher::UninitializeCortanaExperienceManager(XamlLauncher *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)this + 23) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 14) + 224LL))(
           *((_QWORD *)this + 14),
           *((_QWORD *)this + 23));
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        801LL,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v2);
    *((_QWORD *)this + 23) = 0LL;
  }
  if ( *((_QWORD *)this + 24) )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 14) + 240LL))(
           *((_QWORD *)this + 14),
           *((_QWORD *)this + 24));
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        807LL,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v3);
    *((_QWORD *)this + 24) = 0LL;
  }
  if ( *((_QWORD *)this + 25) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 14) + 272LL))(
           *((_QWORD *)this + 14),
           *((_QWORD *)this + 25));
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        813LL,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v4);
    *((_QWORD *)this + 25) = 0LL;
  }
  if ( *((_QWORD *)this + 26) )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 14) + 288LL))(
           *((_QWORD *)this + 14),
           *((_QWORD *)this + 26));
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        819LL,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v5);
    *((_QWORD *)this + 26) = 0LL;
  }
  if ( *((_QWORD *)this + 27) )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 14) + 176LL))(
           *((_QWORD *)this + 14),
           *((_QWORD *)this + 27));
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        825LL,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v6);
    *((_QWORD *)this + 27) = 0LL;
  }
  if ( *((_QWORD *)this + 28) )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 14) + 208LL))(
           *((_QWORD *)this + 14),
           *((_QWORD *)this + 28));
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        831LL,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v7);
    *((_QWORD *)this + 28) = 0LL;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 14);
}
