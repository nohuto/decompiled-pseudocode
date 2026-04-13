/*
 * XREFs of ?MakePublishWindowsTipService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800832D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x180073C6C (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??0PublishWindowsTipService@Actions@CreativeFramework@@QEAA@PEB_W0@Z @ 0x180082EC4 (--0PublishWindowsTipService@Actions@CreativeFramework@@QEAA@PEB_W0@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180097394 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall CreativeFramework::Actions::MakePublishWindowsTipService(_QWORD *a1, __int64 a2, __int64 **a3)
{
  void **v5; // rax
  wchar_t *v6; // r14
  void **v7; // rax
  wchar_t *v8; // rdi
  _DWORD *v9; // rbx
  void *v11[3]; // [rsp+48h] [rbp-29h] BYREF
  unsigned __int64 v12; // [rsp+60h] [rbp-11h]
  void *v13[6]; // [rsp+68h] [rbp-9h] BYREF

  v5 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>(v13, a3, (char *)L"ctx.containerPath");
  v6 = (wchar_t *)v5;
  if ( (unsigned __int64)v5[3] >= 8 )
    v6 = (wchar_t *)*v5;
  v7 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>(v11, a3, (char *)L"ctx.contentId");
  v8 = (wchar_t *)v7;
  if ( (unsigned __int64)v7[3] >= 8 )
    v8 = (wchar_t *)*v7;
  v9 = operator new(0x58uLL);
  if ( v9 )
  {
    v9[2] = 1;
    v9[3] = 1;
    *(_QWORD *)v9 = &std::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>::`vftable';
    if ( v9 != (_DWORD *)-16LL )
      CreativeFramework::Actions::PublishWindowsTipService::PublishWindowsTipService(
        (CreativeFramework::Actions::PublishWindowsTipService *)(v9 + 4),
        v8,
        v6);
  }
  else
  {
    v9 = 0LL;
  }
  *a1 = v9 + 4;
  a1[1] = v9;
  if ( v12 >= 8 )
    operator delete(v11[0]);
  v12 = 7LL;
  v11[2] = 0LL;
  LOWORD(v11[0]) = 0;
  if ( v13[3] >= (void *)8 )
    operator delete(v13[0]);
  return a1;
}
