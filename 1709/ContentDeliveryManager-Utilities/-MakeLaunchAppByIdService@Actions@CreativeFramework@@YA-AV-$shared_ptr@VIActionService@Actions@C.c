/*
 * XREFs of ?MakeLaunchAppByIdService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x18007A780
 * Callers:
 *     <none>
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18005B3D8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x180073C6C (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??2@YAPEAX_K@Z @ 0x180097394 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall CreativeFramework::Actions::MakeLaunchAppByIdService(_QWORD *a1, __int64 a2, __int64 **a3)
{
  unsigned __int64 v4; // rdi
  void **v5; // rax
  char *v6; // rsi
  _DWORD *v7; // rbx
  __int64 v8; // rax
  void *v10[6]; // [rsp+40h] [rbp-58h] BYREF

  v4 = 0LL;
  v5 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>(v10, a3, (char *)L"packageFamilyName");
  v6 = (char *)v5;
  if ( (unsigned __int64)v5[3] >= 8 )
    v6 = (char *)*v5;
  v7 = operator new(0x38uLL);
  if ( v7 )
  {
    v7[2] = 1;
    v7[3] = 1;
    *(_QWORD *)v7 = &std::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>::`vftable';
    if ( v7 != (_DWORD *)-16LL )
    {
      *((_QWORD *)v7 + 2) = &CreativeFramework::Actions::LaunchAppByIdService::`vftable';
      *((_QWORD *)v7 + 6) = 7LL;
      *((_QWORD *)v7 + 5) = 0LL;
      *((_WORD *)v7 + 12) = 0;
      if ( *(_WORD *)v6 )
      {
        v8 = -1LL;
        do
          ++v8;
        while ( *(_WORD *)&v6[2 * v8] );
        v4 = v8;
      }
      std::wstring::assign((_QWORD *)v7 + 3, v6, v4);
    }
  }
  else
  {
    v7 = 0LL;
  }
  *a1 = v7 + 4;
  a1[1] = v7;
  if ( v10[3] >= (void *)8 )
    operator delete(v10[0]);
  return a1;
}
