/*
 * XREFs of ?MakeSetDefaultApplicationService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800796D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x180073C6C (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??0SetDefaultApplicationService@Actions@CreativeFramework@@QEAA@PEB_W00@Z @ 0x180079544 (--0SetDefaultApplicationService@Actions@CreativeFramework@@QEAA@PEB_W00@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180097394 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall CreativeFramework::Actions::MakeSetDefaultApplicationService(_QWORD *a1, __int64 a2, __int64 **a3)
{
  void **v5; // rax
  wchar_t *v6; // r15
  void **v7; // rax
  wchar_t *v8; // rsi
  void **v9; // rax
  wchar_t *v10; // rdi
  _DWORD *v11; // rbx
  void *v13[3]; // [rsp+48h] [rbp-49h] BYREF
  unsigned __int64 v14; // [rsp+60h] [rbp-31h]
  void *v15[3]; // [rsp+68h] [rbp-29h] BYREF
  unsigned __int64 v16; // [rsp+80h] [rbp-11h]
  void *v17[6]; // [rsp+88h] [rbp-9h] BYREF

  v5 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>(v17, a3, (char *)L"category");
  v6 = (wchar_t *)v5;
  if ( (unsigned __int64)v5[3] >= 8 )
    v6 = (wchar_t *)*v5;
  v7 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>(v15, a3, (char *)L"packageRelativeAppId");
  v8 = (wchar_t *)v7;
  if ( (unsigned __int64)v7[3] >= 8 )
    v8 = (wchar_t *)*v7;
  v9 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>(v13, a3, (char *)L"packageFamilyName");
  v10 = (wchar_t *)v9;
  if ( (unsigned __int64)v9[3] >= 8 )
    v10 = (wchar_t *)*v9;
  v11 = operator new(0x80uLL);
  if ( v11 )
  {
    v11[2] = 1;
    v11[3] = 1;
    *(_QWORD *)v11 = &std::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>::`vftable';
    if ( v11 != (_DWORD *)-16LL )
      CreativeFramework::Actions::SetDefaultApplicationService::SetDefaultApplicationService(
        (CreativeFramework::Actions::SetDefaultApplicationService *)(v11 + 4),
        v10,
        v8,
        v6);
  }
  else
  {
    v11 = 0LL;
  }
  *a1 = v11 + 4;
  a1[1] = v11;
  if ( v14 >= 8 )
    operator delete(v13[0]);
  v14 = 7LL;
  v13[2] = 0LL;
  LOWORD(v13[0]) = 0;
  if ( v16 >= 8 )
    operator delete(v15[0]);
  v16 = 7LL;
  v15[2] = 0LL;
  LOWORD(v15[0]) = 0;
  if ( v17[3] >= (void *)8 )
    operator delete(v17[0]);
  return a1;
}
