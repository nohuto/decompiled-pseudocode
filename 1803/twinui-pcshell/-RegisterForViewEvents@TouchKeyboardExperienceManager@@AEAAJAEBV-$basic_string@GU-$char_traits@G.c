/*
 * XREFs of ?RegisterForViewEvents@TouchKeyboardExperienceManager@@AEAAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180240F6C
 * Callers:
 *     _lambda_65c0f5c4ae095b6c4d2379132d65e3aa_::operator() @ 0x1800A1A4C (_lambda_65c0f5c4ae095b6c4d2379132d65e3aa_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180097C34 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180103888 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIViewWrapper.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::RegisterForViewEvents(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  char *v7; // rdi
  char *v8; // rax
  char *v9; // rbx
  const WCHAR *v10; // rax
  const WCHAR *v11; // rsi
  __int64 v12; // r15
  unsigned __int64 v13; // rcx
  UINT32 v14; // ebx
  int v15; // eax
  __int64 v17; // [rsp+30h] [rbp-50h] BYREF
  __int128 v18; // [rsp+38h] [rbp-48h] BYREF
  __int64 v19; // [rsp+48h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v19 = -2LL;
  v17 = 0LL;
  v4 = a1[38];
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  v5 = (*(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v4 + 24LL))(
         v4,
         &SID_ViewEventDispatcher,
         &GUID_f5ef6433_2dc3_4aeb_b387_7c6cba1c012e,
         &v17);
  v6 = v5;
  if ( v5 >= 0 )
  {
    *(_QWORD *)&v18 = TouchKeyboardExperienceManager::OnViewEvent;
    DWORD2(v18) = 0;
    hstringHeader.Reserved.Reserved1 = a1;
    *(_OWORD *)&hstringHeader.Reserved.Reserved2[8] = v18;
    v7 = 0LL;
    v8 = (char *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v9 = v8;
    if ( v8 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>>((__int64)v8);
      *(HSTRING_HEADER *)(v9 + 16) = hstringHeader;
      *(_QWORD *)v9 = off_180338DA8;
      v7 = v9;
    }
    *(_QWORD *)&v18 = v7;
    v10 = (const WCHAR *)std::wstring::c_str(a2);
    v11 = v10;
    v12 = v17;
    v13 = -1LL;
    do
      ++v13;
    while ( v10[v13] );
    v14 = -1;
    if ( v13 > 0xFFFFFFFF )
      RaiseException(0xC000000D, 1u, 0, 0LL);
    else
      v14 = v13;
    WindowsCreateStringReference(
      v11,
      v14,
      (HSTRING_HEADER *)&hstringHeader.Reserved.Reserved2[8],
      (HSTRING *)&hstringHeader);
    v15 = (*(__int64 (__fastcall **)(__int64, char *, PVOID, _QWORD, _QWORD *))(*(_QWORD *)v12 + 48LL))(
            v12,
            v7,
            hstringHeader.Reserved.Reserved1,
            0LL,
            a1 + 30);
    v6 = v15;
    if ( v15 >= 0 )
      v6 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x663,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v15);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x65C,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  return v6;
}
