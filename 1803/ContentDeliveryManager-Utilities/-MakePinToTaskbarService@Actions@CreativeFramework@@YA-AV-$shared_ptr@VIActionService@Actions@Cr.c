/*
 * XREFs of ?MakePinToTaskbarService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180089B70
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetOptionalParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x18007E61C (--$GetOptionalParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x18007E74C (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$make_shared@VTaskbarPinService@Actions@CreativeFramework@@PEB_W_N@std@@YA?AV?$shared_ptr@VTaskbarPinService@Actions@CreativeFramework@@@0@$$QEAPEB_W$$QEA_N@Z @ 0x18008A1F8 (--$make_shared@VTaskbarPinService@Actions@CreativeFramework@@PEB_W_N@std@@YA-AV-$shared_ptr@VTas.c)
 *     ??$make_shared@VTaskbarPinService@Actions@CreativeFramework@@PEB_WPEB_W_N@std@@YA?AV?$shared_ptr@VTaskbarPinService@Actions@CreativeFramework@@@0@$$QEAPEB_W0$$QEA_N@Z @ 0x18008A2E0 (--$make_shared@VTaskbarPinService@Actions@CreativeFramework@@PEB_WPEB_W_N@std@@YA-AV-$shared_ptr.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall CreativeFramework::Actions::MakePinToTaskbarService(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  void **v5; // rax
  _QWORD *v6; // rax
  volatile signed __int32 *v7; // rdi
  void **v8; // rax
  void **v9; // rax
  _QWORD *v10; // rax
  volatile signed __int32 *v11; // rdi
  char v13; // [rsp+28h] [rbp-69h] BYREF
  char v14[7]; // [rsp+29h] [rbp-68h] BYREF
  void **v15; // [rsp+30h] [rbp-61h] BYREF
  void **v16; // [rsp+38h] [rbp-59h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-51h] BYREF
  _BYTE v18[8]; // [rsp+50h] [rbp-41h] BYREF
  volatile signed __int32 *v19; // [rsp+58h] [rbp-39h]
  _BYTE v20[8]; // [rsp+60h] [rbp-31h] BYREF
  volatile signed __int32 *v21; // [rsp+68h] [rbp-29h]
  void *v22[3]; // [rsp+70h] [rbp-21h] BYREF
  unsigned __int64 v23; // [rsp+88h] [rbp-9h]
  void *v24[3]; // [rsp+90h] [rbp-1h] BYREF
  unsigned __int64 v25; // [rsp+A8h] [rbp+17h]
  void *v26[3]; // [rsp+B0h] [rbp+1Fh] BYREF
  unsigned __int64 v27; // [rsp+C8h] [rbp+37h]

  v17[1] = -2LL;
  CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v22, a3, (char *)L"applicationId");
  if ( v22[2] )
  {
    v13 = 1;
    v5 = v22;
    if ( v23 >= 8 )
      v5 = (void **)v22[0];
    v15 = v5;
    v6 = (_QWORD *)std::make_shared<CreativeFramework::Actions::TaskbarPinService,wchar_t const *,bool>(v18, &v15, &v13);
    *a1 = *v6;
    a1[1] = v6[1];
    *v6 = 0LL;
    v6[1] = 0LL;
    v7 = v19;
    if ( v19 )
    {
      if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
        if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      }
    }
  }
  else
  {
    v14[0] = 1;
    v8 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>(v26, a3, (char *)L"packageRelativeAppId");
    if ( (unsigned __int64)v8[3] >= 8 )
      v8 = (void **)*v8;
    v16 = v8;
    v9 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>(v24, a3, (char *)L"packageFamilyName");
    if ( (unsigned __int64)v9[3] >= 8 )
      v9 = (void **)*v9;
    v17[0] = v9;
    v10 = (_QWORD *)std::make_shared<CreativeFramework::Actions::TaskbarPinService,wchar_t const *,wchar_t const *,bool>(
                      v20,
                      v17,
                      &v16,
                      v14);
    *a1 = *v10;
    a1[1] = v10[1];
    *v10 = 0LL;
    v10[1] = 0LL;
    v11 = v21;
    if ( v21 )
    {
      if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
        if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
      }
    }
    if ( v25 >= 8 )
      operator delete(v24[0]);
    v25 = 7LL;
    v24[2] = 0LL;
    LOWORD(v24[0]) = 0;
    if ( v27 >= 8 )
      operator delete(v26[0]);
    v27 = 7LL;
    v26[2] = 0LL;
    LOWORD(v26[0]) = 0;
  }
  if ( v23 >= 8 )
    operator delete(v22[0]);
  return a1;
}
