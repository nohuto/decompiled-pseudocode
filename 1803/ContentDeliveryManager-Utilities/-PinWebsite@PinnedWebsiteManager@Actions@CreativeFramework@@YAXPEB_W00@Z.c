/*
 * XREFs of ?PinWebsite@PinnedWebsiteManager@Actions@CreativeFramework@@YAXPEB_W00@Z @ 0x180090C4C
 * Callers:
 *     wil::details::functor_wrapper_void__lambda_62158d46a05af21ae3d227fe228597be__&___ptr64_::Run @ 0x18008A6D0 (wil--details--functor_wrapper_void__lambda_62158d46a05af21ae3d227fe228597be__-___ptr64_--Run.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180018CBC (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001B314 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18002982C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18004F8D4 (--$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foun.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180062D20 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?CopyFavicon@PinnedWebsiteManager@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V45@@Z @ 0x180090568 (-CopyFavicon@PinnedWebsiteManager@Actions@CreativeFramework@@YA-AV-$basic_string@_WU-$char_trait.c)
 *     ??$GetActivationFactory@UIPinnedWebsitesStatics@Taskbar@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIPinnedWebsitesStatics@Taskbar@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180090E4C (--$GetActivationFactory@UIPinnedWebsitesStatics@Taskbar@Internal@Windows@@@wil@@YA-AV-$com_ptr_t.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CreativeFramework::Actions::PinnedWebsiteManager::PinWebsite(
        const WCHAR *this,
        const wchar_t *a2,
        wchar_t *a3,
        const wchar_t *a4)
{
  unsigned __int64 v5; // r8
  const WCHAR *v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // r14
  int v11; // eax
  DWORD v12; // edx
  int v13; // r8d
  signed int v14; // eax
  unsigned int v15; // eax
  int v16[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+40h] [rbp-C8h] BYREF
  const WCHAR *v18; // [rsp+48h] [rbp-C0h] BYREF
  const WCHAR *v19; // [rsp+50h] [rbp-B8h] BYREF
  const WCHAR *v20; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v21[5]; // [rsp+60h] [rbp-A8h] BYREF
  void *v22[3]; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v23; // [rsp+A0h] [rbp-68h]
  _BYTE v24[32]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v25[32]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v26[32]; // [rsp+E8h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+38h]

  v21[4] = -2LL;
  v20 = this;
  v19 = a2;
  v21[3] = 7LL;
  v21[2] = 0LL;
  LOWORD(v21[0]) = 0;
  if ( *a3 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a3[v5] );
  }
  else
  {
    v5 = 0LL;
  }
  std::wstring::assign(v21, (char *)a3, v5);
  CreativeFramework::Actions::PinnedWebsiteManager::CopyFavicon(v22, (__int64)v21);
  wil::GetActivationFactory<Windows::Internal::Taskbar::IPinnedWebsitesStatics>(&v17);
  *(_QWORD *)v16 = 0LL;
  v6 = (const WCHAR *)v22;
  if ( v23 >= 8 )
    v6 = (const WCHAR *)v22[0];
  v18 = v6;
  v7 = v17;
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v24, &v19);
  v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v25, &v20);
  v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v26, &v18);
  *(_QWORD *)v16 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int *))(*(_QWORD *)v7 + 56LL))(
          v7,
          *(_QWORD *)(v10 + 24),
          *(_QWORD *)(v9 + 24),
          *(_QWORD *)(v8 + 24),
          v16);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x66,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_19;
  }
  v14 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncAction *>(
          *(void (__fastcall ****)(__int64, GUID *, __int64 *))v16,
          v12,
          v13);
  if ( v14 >= 0 )
    goto LABEL_11;
  if ( v14 != -2147024713 )
  {
LABEL_19:
    v15 = wil::verify_hresult<long>(v14);
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x72,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)v15);
    JUMPOUT(0x180090E49LL);
  }
  wil::details::in1diag3::Log_Hr(
    retaddr,
    (void *)0x6E,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
    (const char *)0x800700B7LL);
LABEL_11:
  if ( *(_QWORD *)v16 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v16 + 16LL))(*(_QWORD *)v16);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v23 >= 8 )
    operator delete(v22[0]);
}
