/*
 * XREFs of ?LaunchUri@LaunchUriService@Actions@CreativeFramework@@AEAAXXZ @ 0x180079A48
 * Callers:
 *     ?Invoke@LaunchUriService@Actions@CreativeFramework@@UEAAXXZ @ 0x180079A40 (-Invoke@LaunchUriService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180018B48 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800261F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18004B110 (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_ptr_t@UIConten.c)
 *     ??$WaitForCompletion@_NUtype@?$MapToSmartType@EX@details@wil@@@wil@@YA?AUtype@?$MapToSmartType@EX@details@0@PEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x18004B48C (--$WaitForCompletion@_NUtype@-$MapToSmartType@EX@details@wil@@@wil@@YA-AUtype@-$MapToSmartType@E.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18005B1D8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18005B3D8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18007932C (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800B4307 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall CreativeFramework::Actions::LaunchUriService::LaunchUri(void **this)
{
  int v2; // eax
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  void **v5; // rax
  const WCHAR *v6; // rax
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 v9; // r15
  int v10; // eax
  DWORD v11; // edx
  int v12; // r8d
  const WCHAR *v13; // rsi
  const WCHAR *v14; // r14
  unsigned int v15; // eax
  const WCHAR *v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rax
  int v19; // eax
  void (__fastcall ***v20)(__int64, GUID *, __int64 *); // [rsp+38h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C8h] BYREF
  UINT32 applicationUserModelIdLength[2]; // [rsp+48h] [rbp-C0h] BYREF
  const WCHAR *v23; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v24[2]; // [rsp+58h] [rbp-B0h] BYREF
  void *v25[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+78h] [rbp-90h]
  unsigned __int64 v27; // [rsp+80h] [rbp-88h]
  void *v28[3]; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v29; // [rsp+A0h] [rbp-68h]
  _BYTE v30[24]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v31; // [rsp+C0h] [rbp-48h]
  WCHAR applicationUserModelId[136]; // [rsp+C8h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+210h] [rbp+108h]

  v24[1] = -2LL;
  wil::ActivateInstance<ContentManagement::IContentManagementBroker>((__int64)v24);
  v21 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v24[0] + 88LL))(v24[0], &v21);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x75,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchuri.cpp",
      (const char *)(unsigned int)v2);
    __debugbreak();
  }
  v3 = 7LL;
  v27 = 7LL;
  v26 = 0LL;
  LOWORD(v25[0]) = 0;
  v4 = -1LL;
  if ( *((_BYTE *)this + 113) && v25 != this + 5 )
  {
    std::wstring::assign(v25, this + 5, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
    v3 = v27;
  }
  v20 = 0LL;
  v5 = v25;
  if ( v3 >= 8 )
    v5 = (void **)v25[0];
  *(_QWORD *)applicationUserModelIdLength = v5;
  v6 = (const WCHAR *)(this + 1);
  if ( (unsigned __int64)this[4] >= 8 )
    v6 = *(const WCHAR **)v6;
  v23 = v6;
  v7 = v21;
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
         (__int64)v30,
         (const WCHAR **)applicationUserModelIdLength);
  v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v28, &v23);
  v20 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, void (__fastcall ****)(__int64, GUID *, __int64 *)))(*(_QWORD *)v7 + 48LL))(
          v7,
          *(_QWORD *)(v9 + 24),
          *(_QWORD *)(v8 + 24),
          &v20);
  if ( v10 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x7E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchuri.cpp",
      (const char *)(unsigned int)v10);
  wil::WaitForCompletion<bool,wil::details::MapToSmartType<unsigned char,void>::type>(v20, v11, v12);
  if ( *((_BYTE *)this + 112) )
  {
    v13 = (const WCHAR *)(this + 9);
    if ( (unsigned __int64)this[12] >= 8 )
      v13 = *(const WCHAR **)v13;
    v14 = (const WCHAR *)(this + 5);
    if ( (unsigned __int64)this[8] >= 8 )
      v14 = *(const WCHAR **)v14;
    memset_0(applicationUserModelId, 0, 0x104uLL);
    applicationUserModelIdLength[0] = 130;
    v15 = FormatApplicationUserModelId(v14, v13, applicationUserModelIdLength, applicationUserModelId);
    if ( v15 )
    {
      wil::details::in1diag3::_Throw_Win32(
        retaddr,
        (void *)0x8E,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchuri.cpp",
        (const char *)v15);
      __debugbreak();
    }
    v29 = 7LL;
    v28[2] = 0LL;
    LOWORD(v28[0]) = 0;
    if ( applicationUserModelId[0] )
    {
      do
        ++v4;
      while ( applicationUserModelId[v4] );
    }
    else
    {
      v4 = 0LL;
    }
    std::wstring::assign(v28, (char *)applicationUserModelId, v4);
    v16 = (const WCHAR *)v28;
    if ( v29 >= 8 )
      v16 = (const WCHAR *)v28[0];
    v23 = v16;
    v17 = v21;
    v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v30, &v23);
    v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, void *, _QWORD))(*(_QWORD *)v17 + 56LL))(
            v17,
            *(_QWORD *)(v18 + 24),
            this[13],
            *((unsigned int *)this + 29));
    if ( v19 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x86,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchuri.cpp",
        (const char *)(unsigned int)v19);
    v31 = 0LL;
    if ( v29 >= 8 )
      operator delete(v28[0]);
  }
  if ( v20 )
    ((void (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *)))(*v20)[2])(v20);
  if ( v27 >= 8 )
    operator delete(v25[0]);
  v27 = 7LL;
  v26 = 0LL;
  LOWORD(v25[0]) = 0;
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v24[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v24[0] + 16LL))(v24[0]);
}
