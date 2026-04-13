/*
 * XREFs of ?MakeAppUninstallService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800736C0
 * Callers:
 *     <none>
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18005B3D8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x180073C6C (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??2@YAPEAX_K@Z @ 0x180097394 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall CreativeFramework::Actions::MakeAppUninstallService(_QWORD *a1)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rax
  char *v4; // rsi
  _DWORD *v5; // rbx
  __int64 v6; // rax
  void *v8[6]; // [rsp+40h] [rbp-58h] BYREF

  v2 = 0LL;
  v3 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>(v8);
  v4 = (char *)v3;
  if ( *(_QWORD *)(v3 + 24) >= 8uLL )
    v4 = *(char **)v3;
  v5 = operator new(0x38uLL);
  if ( v5 )
  {
    v5[2] = 1;
    v5[3] = 1;
    *(_QWORD *)v5 = &std::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>::`vftable';
    if ( v5 != (_DWORD *)-16LL )
    {
      *((_QWORD *)v5 + 2) = &CreativeFramework::Actions::AppUninstallService::`vftable';
      *((_QWORD *)v5 + 6) = 7LL;
      *((_QWORD *)v5 + 5) = 0LL;
      *((_WORD *)v5 + 12) = 0;
      if ( *(_WORD *)v4 )
      {
        v6 = -1LL;
        do
          ++v6;
        while ( *(_WORD *)&v4[2 * v6] );
        v2 = v6;
      }
      std::wstring::assign((_QWORD *)v5 + 3, v4, v2);
    }
  }
  else
  {
    v5 = 0LL;
  }
  *a1 = v5 + 4;
  a1[1] = v5;
  if ( v8[3] >= (void *)8 )
    operator delete(v8[0]);
  return a1;
}
