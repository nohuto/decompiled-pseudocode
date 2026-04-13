/*
 * XREFs of wil::details::functor_wrapper_other__lambda_a111f9909dcb1fbe287f852ebd02ec50__&___ptr64_std::shared_ptr_CreativeFramework::Actions::PinWebsiteToTaskbarService___::Run @ 0x18008A520
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x18007E74C (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$?0PEB_WPEB_WPEB_W@?$_Ref_count_obj@VPinWebsiteToTaskbarService@Actions@CreativeFramework@@@std@@QEAA@$$QEAPEB_W00@Z @ 0x18008A410 (--$-0PEB_WPEB_WPEB_W@-$_Ref_count_obj@VPinWebsiteToTaskbarService@Actions@CreativeFramework@@@st.c)
 *     ??2@YAPEAX_K@Z @ 0x1800A4410 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall wil::details::functor_wrapper_other__lambda_a111f9909dcb1fbe287f852ebd02ec50______ptr64_std::shared_ptr_CreativeFramework::Actions::PinWebsiteToTaskbarService___::Run(
        __int64 a1)
{
  _QWORD **v2; // rbx
  void **v3; // rax
  void **v4; // rax
  void **v5; // rax
  char *v6; // rax
  __int64 v7; // rdi
  _QWORD *v8; // rax
  volatile signed __int32 *v9; // rbx
  void **v11; // [rsp+30h] [rbp-61h] BYREF
  void **v12; // [rsp+38h] [rbp-59h] BYREF
  char *v13[3]; // [rsp+40h] [rbp-51h] BYREF
  void *v14[3]; // [rsp+58h] [rbp-39h] BYREF
  unsigned __int64 v15; // [rsp+70h] [rbp-21h]
  void *v16[3]; // [rsp+78h] [rbp-19h] BYREF
  unsigned __int64 v17; // [rsp+90h] [rbp-1h]
  void *v18[6]; // [rsp+98h] [rbp+7h] BYREF

  v13[1] = (char *)-2LL;
  v2 = *(_QWORD ***)(a1 + 8);
  v3 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>(v18, *v2, (char *)L"icon");
  if ( (unsigned __int64)v3[3] >= 8 )
    v3 = (void **)*v3;
  v11 = v3;
  v4 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>(v16, *v2, (char *)L"uri");
  if ( (unsigned __int64)v4[3] >= 8 )
    v4 = (void **)*v4;
  v12 = v4;
  v5 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>(v14, *v2, (char *)L"title");
  if ( (unsigned __int64)v5[3] >= 8 )
    v5 = (void **)*v5;
  v13[0] = (char *)v5;
  v6 = (char *)operator new(0x78uLL);
  v13[2] = v6;
  if ( v6 )
    v7 = std::_Ref_count_obj<CreativeFramework::Actions::PinWebsiteToTaskbarService>::_Ref_count_obj<CreativeFramework::Actions::PinWebsiteToTaskbarService>(
           (__int64)v6,
           v13,
           (char **)&v12,
           (char **)&v11);
  else
    v7 = 0LL;
  if ( v15 >= 8 )
    operator delete(v14[0]);
  v15 = 7LL;
  v14[2] = 0LL;
  LOWORD(v14[0]) = 0;
  if ( v17 >= 8 )
    operator delete(v16[0]);
  v17 = 7LL;
  v16[2] = 0LL;
  LOWORD(v16[0]) = 0;
  if ( v18[3] >= (void *)8 )
    operator delete(v18[0]);
  v8 = *(_QWORD **)(a1 + 16);
  v9 = (volatile signed __int32 *)v8[1];
  v8[1] = v7;
  *v8 = v7 + 16;
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  return 0LL;
}
