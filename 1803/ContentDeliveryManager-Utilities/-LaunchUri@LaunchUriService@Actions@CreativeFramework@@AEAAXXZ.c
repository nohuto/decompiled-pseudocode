/*
 * XREFs of ?LaunchUri@LaunchUriService@Actions@CreativeFramework@@AEAAXXZ @ 0x180084A58
 * Callers:
 *     ?Invoke@LaunchUriService@Actions@CreativeFramework@@UEAAXXZ @ 0x180084A50 (-Invoke@LaunchUriService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001B314 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180029864 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18004ED0C (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_ptr_t@UIConten.c)
 *     ??$WaitForCompletion@_NUtype@?$MapToSmartType@EX@details@wil@@@wil@@YA?AUtype@?$MapToSmartType@EX@details@0@PEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x18004F24C (--$WaitForCompletion@_NUtype@-$MapToSmartType@EX@details@wil@@@wil@@YA-AUtype@-$MapToSmartType@E.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180062B1C (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180062D20 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180084278 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C1147 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
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
  int v11; // r8d
  wil::details::in1diag3 *v12; // rcx
  const WCHAR *v13; // rsi
  const WCHAR *v14; // r14
  unsigned int v15; // eax
  wil::details::in1diag3 *v16; // rcx
  const WCHAR *v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // [rsp+38h] [rbp-D0h] BYREF
  void (__fastcall ***v22)(__int64, GUID *, __int64 *); // [rsp+40h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+48h] [rbp-C0h] BYREF
  UINT32 applicationUserModelIdLength[2]; // [rsp+50h] [rbp-B8h] BYREF
  const WCHAR *v25; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v26[2]; // [rsp+60h] [rbp-A8h] BYREF
  void *v27[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v28; // [rsp+80h] [rbp-88h]
  unsigned __int64 v29; // [rsp+88h] [rbp-80h]
  void *v30[3]; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int64 v31; // [rsp+A8h] [rbp-60h]
  _BYTE v32[24]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v33; // [rsp+C8h] [rbp-40h]
  WCHAR applicationUserModelId[136]; // [rsp+D8h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+220h] [rbp+118h]

  v26[1] = -2LL;
  wil::ActivateInstance<ContentManagement::IContentManagementBroker>((__int64)v26);
  v23 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v26[0] + 88LL))(v26[0], &v23);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x75,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchuri.cpp",
      (const char *)(unsigned int)v2);
LABEL_35:
    wil::details::in1diag3::Throw_Hr(
      v12,
      (void *)0x7E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchuri.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_36;
  }
  v3 = 7LL;
  v29 = 7LL;
  v28 = 0LL;
  LOWORD(v27[0]) = 0;
  v4 = -1LL;
  if ( *((_BYTE *)this + 113) && v27 != this + 5 )
  {
    std::wstring::assign(v27, this + 5, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
    v3 = v29;
  }
  v22 = 0LL;
  v5 = v27;
  if ( v3 >= 8 )
    v5 = (void **)v27[0];
  *(_QWORD *)applicationUserModelIdLength = v5;
  v6 = (const WCHAR *)(this + 1);
  if ( (unsigned __int64)this[4] >= 8 )
    v6 = *(const WCHAR **)v6;
  v25 = v6;
  v7 = v23;
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
         (__int64)v32,
         (const WCHAR **)applicationUserModelIdLength);
  v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v30, &v25);
  v22 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, void (__fastcall ****)(__int64, GUID *, __int64 *)))(*(_QWORD *)v7 + 48LL))(
          v7,
          *(_QWORD *)(v9 + 24),
          *(_QWORD *)(v8 + 24),
          &v22);
  v12 = retaddr;
  if ( v10 < 0 )
    goto LABEL_35;
  wil::WaitForCompletion<bool,wil::details::MapToSmartType<unsigned char,void>::type>((__int64)&v21, v22, v11);
  if ( !*((_BYTE *)this + 112) )
    goto LABEL_25;
  v13 = (const WCHAR *)(this + 9);
  if ( (unsigned __int64)this[12] >= 8 )
    v13 = *(const WCHAR **)v13;
  v14 = (const WCHAR *)(this + 5);
  if ( (unsigned __int64)this[8] >= 8 )
    v14 = *(const WCHAR **)v14;
  memset_0(applicationUserModelId, 0, 0x104uLL);
  applicationUserModelIdLength[0] = 130;
  v15 = FormatApplicationUserModelId(v14, v13, applicationUserModelIdLength, applicationUserModelId);
  v16 = retaddr;
  if ( v15 )
  {
LABEL_36:
    wil::details::in1diag3::_Throw_Win32(
      v16,
      (void *)0x8E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchuri.cpp",
      (const char *)v15);
    JUMPOUT(0x180084DABLL);
  }
  v31 = 7LL;
  v30[2] = 0LL;
  LOWORD(v30[0]) = 0;
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
  std::wstring::assign(v30, (char *)applicationUserModelId, v4);
  v17 = (const WCHAR *)v30;
  if ( v31 >= 8 )
    v17 = (const WCHAR *)v30[0];
  v25 = v17;
  v18 = v23;
  v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v32, &v25);
  v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, void *, _QWORD))(*(_QWORD *)v18 + 56LL))(
          v18,
          *(_QWORD *)(v19 + 24),
          this[13],
          *((unsigned int *)this + 29));
  if ( v20 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x86,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchuri.cpp",
      (const char *)(unsigned int)v20);
  v33 = 0LL;
  if ( v31 >= 8 )
    operator delete(v30[0]);
LABEL_25:
  if ( v22 )
    ((void (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *)))(*v22)[2])(v22);
  if ( v29 >= 8 )
    operator delete(v27[0]);
  v29 = 7LL;
  v28 = 0LL;
  LOWORD(v27[0]) = 0;
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v26[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v26[0] + 16LL))(v26[0]);
}
