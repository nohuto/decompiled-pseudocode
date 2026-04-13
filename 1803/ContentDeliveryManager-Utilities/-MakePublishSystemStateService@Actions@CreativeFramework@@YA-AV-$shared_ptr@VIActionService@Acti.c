/*
 * XREFs of ?MakePublishSystemStateService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x18008EAC0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetOptionalParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x18007E61C (--$GetOptionalParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x18007E74C (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$make_shared@VPublishSystemStateService@Actions@CreativeFramework@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V45@@std@@YA?AV?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@0@$$QEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@0@Z @ 0x18008EBE4 (--$make_shared@VPublishSystemStateService@Actions@CreativeFramework@@V-$basic_string@_WU-$char_t.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall CreativeFramework::Actions::MakePublishSystemStateService(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v5; // rbx
  void **v6; // rax
  _QWORD *v7; // rax
  volatile signed __int32 *v8; // rbx
  _BYTE v10[8]; // [rsp+28h] [rbp-70h] BYREF
  volatile signed __int32 *v11; // [rsp+30h] [rbp-68h]
  void *v12[3]; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v13; // [rsp+50h] [rbp-48h]
  void *v14[4]; // [rsp+58h] [rbp-40h] BYREF

  v5 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v14, a3, (char *)L"systemStateData");
  v6 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>(v12, a3, (char *)L"systemState");
  v7 = (_QWORD *)std::make_shared<CreativeFramework::Actions::PublishSystemStateService,std::wstring,std::wstring>(
                   v10,
                   v6,
                   v5);
  *a1 = *v7;
  a1[1] = v7[1];
  *v7 = 0LL;
  v7[1] = 0LL;
  v8 = v11;
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  if ( v13 >= 8 )
    operator delete(v12[0]);
  v13 = 7LL;
  v12[2] = 0LL;
  LOWORD(v12[0]) = 0;
  if ( v14[3] >= (void *)8 )
    operator delete(v14[0]);
  return a1;
}
