/*
 * XREFs of ?UninitializeStartExperienceManager@XamlLauncher@@AEAAXXZ @ 0x18022A3D4
 * Callers:
 *     ?UnsubscribeFromServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z @ 0x18022A580 (-UnsubscribeFromServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall XamlLauncher::UninitializeStartExperienceManager(XamlLauncher *this)
{
  IUnknown **v1; // rdi
  __int64 v3; // rcx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (IUnknown **)((char *)this + 104);
  v3 = *((_QWORD *)this + 13);
  if ( v3 )
  {
    if ( *((_QWORD *)this + 18) )
    {
      v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 160LL))(v3, *((_QWORD *)this + 18));
      if ( v4 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          563LL,
          (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
          (const char *)(unsigned int)v4);
      *((_QWORD *)this + 18) = 0LL;
    }
    if ( *((_QWORD *)this + 19) )
    {
      v5 = ((__int64 (__fastcall *)(IUnknown *, _QWORD))(*v1)->lpVtbl[7].AddRef)(*v1, *((_QWORD *)this + 19));
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          569LL,
          (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
          (const char *)(unsigned int)v5);
      *((_QWORD *)this + 19) = 0LL;
    }
    if ( *((_QWORD *)this + 20) )
    {
      v6 = ((__int64 (__fastcall *)(IUnknown *, _QWORD))(*v1)->lpVtbl[8].Release)(*v1, *((_QWORD *)this + 20));
      if ( v6 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          575LL,
          (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
          (const char *)(unsigned int)v6);
      *((_QWORD *)this + 20) = 0LL;
    }
    if ( *((_QWORD *)this + 21) )
    {
      v7 = ((__int64 (__fastcall *)(IUnknown *, _QWORD))(*v1)->lpVtbl[9].AddRef)(*v1, *((_QWORD *)this + 21));
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          581LL,
          (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
          (const char *)(unsigned int)v7);
      *((_QWORD *)this + 21) = 0LL;
    }
    if ( *((_QWORD *)this + 22) )
    {
      v8 = ((__int64 (__fastcall *)(IUnknown *, _QWORD))(*v1)->lpVtbl[8].QueryInterface)(*v1, *((_QWORD *)this + 22));
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          587LL,
          (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
          (const char *)(unsigned int)v8);
      *((_QWORD *)this + 22) = 0LL;
    }
    IUnknown_SetSite(*v1, 0LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v1);
  }
}
