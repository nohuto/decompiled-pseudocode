/*
 * XREFs of ?WindowCreated@XamlExplorerHostWindow@@UEAAXXZ @ 0x180201C40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x1801F9514 (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?GetForCurrentThread@CoreWindow@Core@UI@Windows@@SAPE$AAV1234@XZ @ 0x180200B38 (-GetForCurrentThread@CoreWindow@Core@UI@Windows@@SAPE$AAV1234@XZ.c)
 *     ?get@ViewModel@__ITaskViewTimelinePublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAVTaskViewTimelineViewModel@3456@XZ @ 0x180215D94 (-get@ViewModel@__ITaskViewTimelinePublicNonVirtuals@Switcher@Experiences@ComposableShell@Windows.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall XamlExplorerHostWindow::WindowCreated(XamlExplorerHostWindow *this)
{
  RTL_SRWLOCK *v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  void **v6; // r9
  __int64 v7; // rbx
  __int64 (__fastcall ***v8)(_QWORD, _QWORD, _QWORD); // r14
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rbx
  __int64 v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF
  RTL_SRWLOCK *v16; // [rsp+78h] [rbp+10h]
  __int64 (__fastcall ***v17)(_QWORD, _QWORD, _QWORD); // [rsp+80h] [rbp+18h]
  __int64 v18; // [rsp+88h] [rbp+20h]

  v2 = (RTL_SRWLOCK *)((char *)this + 96);
  AcquireSRWLockExclusive((PSRWLOCK)this + 12);
  v16 = v2;
  v7 = Windows::UI::Core::CoreWindow::GetForCurrentThread(v4, v3, v5, v6);
  v17 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v7;
  v8 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))__abi_winrt_ptr_ctor(v7);
  v17 = v8;
  __abi_winrt_ptr_dtor(v7);
  v15 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  v9 = (**v8)(v8, &GUID_45d64a29_a63e_4cb6_b498_5781d298cb4f, &v15);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      84LL,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostwindow.cpp",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  v10 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v15 + 24LL))(v15, (char *)this + 88);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      85LL,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostwindow.cpp",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
  if ( *((_DWORD *)this + 20) != 1 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 7) + 32LL))(
            *((_QWORD *)this + 7),
            *((_QWORD *)this + 11),
            0LL);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        90LL,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostwindow.cpp",
        (const char *)(unsigned int)v11);
      __debugbreak();
    }
  }
  v12 = WindowsInternal::ComposableShell::Experiences::Switcher::__ITaskViewTimelinePublicNonVirtuals::ViewModel::get(v8);
  v18 = v12;
  __abi_winrt_ptr_assign((__int64 *)this + 9, v12);
  __abi_winrt_ptr_dtor(v12);
  v13 = *((_QWORD *)this + 6);
  if ( v13 )
  {
    (*(void (__fastcall **)(__int64, XamlExplorerHostWindow *))(*(_QWORD *)v13 + 24LL))(v13, this);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 6);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  __abi_winrt_ptr_dtor((__int64)v8);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
