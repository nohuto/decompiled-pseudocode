/*
 * XREFs of ?MakePublishSystemStateService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180083530
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetOptionalParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x180073B34 (--$GetOptionalParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x180073C6C (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$?0V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V01@@?$_Ref_count_obj@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@$$QEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@0@Z @ 0x180083628 (--$-0V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V01@@-$_Ref_count_obj@VPub.c)
 *     ??2@YAPEAX_K@Z @ 0x180097394 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall CreativeFramework::Actions::MakePublishSystemStateService(_QWORD *a1, __int64 a2, __int64 **a3)
{
  _QWORD *v5; // rsi
  void **v6; // rbx
  void *v7; // rax
  __int64 v8; // rcx
  void *v10[3]; // [rsp+38h] [rbp-70h] BYREF
  unsigned __int64 v11; // [rsp+50h] [rbp-58h]
  void *v12[6]; // [rsp+58h] [rbp-50h] BYREF

  v5 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v12, a3, (char *)L"systemStateData");
  v6 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>(v10, a3, (char *)L"systemState");
  v7 = operator new(0x48uLL);
  if ( v7 )
    v8 = std::_Ref_count_obj<CreativeFramework::Actions::PublishSystemStateService>::_Ref_count_obj<CreativeFramework::Actions::PublishSystemStateService>(
           v7,
           v6,
           v5);
  else
    v8 = 0LL;
  *a1 = v8 + 16;
  a1[1] = v8;
  if ( v11 >= 8 )
    operator delete(v10[0]);
  v11 = 7LL;
  v10[2] = 0LL;
  LOWORD(v10[0]) = 0;
  if ( v12[3] >= (void *)8 )
    operator delete(v12[0]);
  return a1;
}
