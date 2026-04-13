/*
 * XREFs of ?MakeUnpinFromTaskbarService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x18007E980
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetOptionalParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x180073B34 (--$GetOptionalParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x180073C6C (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$make_shared@VTaskbarPinService@Actions@CreativeFramework@@PEB_W_N@std@@YA?AV?$shared_ptr@VTaskbarPinService@Actions@CreativeFramework@@@0@$$QEAPEB_W$$QEA_N@Z @ 0x18007EB5C (--$make_shared@VTaskbarPinService@Actions@CreativeFramework@@PEB_W_N@std@@YA-AV-$shared_ptr@VTas.c)
 *     ??$?0PEB_WPEB_W_N@?$_Ref_count_obj@VTaskbarPinService@Actions@CreativeFramework@@@std@@QEAA@$$QEAPEB_W0$$QEA_N@Z @ 0x18007EC44 (--$-0PEB_WPEB_W_N@-$_Ref_count_obj@VTaskbarPinService@Actions@CreativeFramework@@@std@@QEAA@$$QE.c)
 *     ??2@YAPEAX_K@Z @ 0x180097394 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall CreativeFramework::Actions::MakeUnpinFromTaskbarService(_QWORD *a1, __int64 a2, __int64 **a3)
{
  void **v5; // rax
  _QWORD *v6; // rax
  volatile signed __int32 *v7; // rbx
  void **v8; // rax
  void **v9; // rax
  void **v10; // rax
  __int64 v11; // rcx
  char v13; // [rsp+28h] [rbp-79h] BYREF
  char v14[7]; // [rsp+29h] [rbp-78h] BYREF
  void **v15; // [rsp+30h] [rbp-71h] BYREF
  int v16; // [rsp+38h] [rbp-69h]
  void **v17; // [rsp+40h] [rbp-61h] BYREF
  _QWORD v18[2]; // [rsp+48h] [rbp-59h] BYREF
  char v19[8]; // [rsp+58h] [rbp-49h] BYREF
  volatile signed __int32 *v20; // [rsp+60h] [rbp-41h]
  void *v21[3]; // [rsp+68h] [rbp-39h] BYREF
  unsigned __int64 v22; // [rsp+80h] [rbp-21h]
  void *v23[3]; // [rsp+88h] [rbp-19h] BYREF
  unsigned __int64 v24; // [rsp+A0h] [rbp-1h]
  void *v25[3]; // [rsp+A8h] [rbp+7h] BYREF
  unsigned __int64 v26; // [rsp+C0h] [rbp+1Fh]

  v18[1] = -2LL;
  v16 = 0;
  CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v21, a3, (char *)L"applicationId");
  if ( v21[2] )
  {
    v13 = 0;
    v5 = v21;
    if ( v22 >= 8 )
      v5 = (void **)v21[0];
    v15 = v5;
    v6 = (_QWORD *)std::make_shared<CreativeFramework::Actions::TaskbarPinService,wchar_t const *,bool>(v19, &v15, &v13);
    *a1 = *v6;
    a1[1] = v6[1];
    *v6 = 0LL;
    v6[1] = 0LL;
    v7 = v20;
    if ( v20 )
    {
      if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
        if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      }
    }
  }
  else
  {
    v14[0] = 0;
    v8 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>(v25, a3, (char *)L"packageRelativeAppId");
    if ( (unsigned __int64)v8[3] >= 8 )
      v8 = (void **)*v8;
    v17 = v8;
    v9 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>(v23, a3, (char *)L"packageFamilyName");
    if ( (unsigned __int64)v9[3] >= 8 )
      v9 = (void **)*v9;
    v18[0] = v9;
    v10 = (void **)operator new(0x80uLL);
    v15 = v10;
    if ( v10 )
      v11 = std::_Ref_count_obj<CreativeFramework::Actions::TaskbarPinService>::_Ref_count_obj<CreativeFramework::Actions::TaskbarPinService>(
              v10,
              v18,
              &v17,
              v14);
    else
      v11 = 0LL;
    *a1 = v11 + 16;
    a1[1] = v11;
    if ( v24 >= 8 )
      operator delete(v23[0]);
    v24 = 7LL;
    v23[2] = 0LL;
    LOWORD(v23[0]) = 0;
    if ( v26 >= 8 )
      operator delete(v25[0]);
    v26 = 7LL;
    v25[2] = 0LL;
    LOWORD(v25[0]) = 0;
  }
  if ( v22 >= 8 )
    operator delete(v21[0]);
  return a1;
}
