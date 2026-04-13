/*
 * XREFs of ??$make_shared@VTaskbarPinService@Actions@CreativeFramework@@PEB_W_N@std@@YA?AV?$shared_ptr@VTaskbarPinService@Actions@CreativeFramework@@@0@$$QEAPEB_W$$QEA_N@Z @ 0x18007EB5C
 * Callers:
 *     ?MakePinToTaskbarService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x18007E7A0 (-MakePinToTaskbarService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Actions@Cr.c)
 *     ?MakeUnpinFromTaskbarService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x18007E980 (-MakeUnpinFromTaskbarService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Action.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18005B3D8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180097394 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall std::make_shared<CreativeFramework::Actions::TaskbarPinService,wchar_t const *,bool>(
        _QWORD *a1,
        char **a2,
        char *a3)
{
  unsigned __int64 v6; // rdi
  _DWORD *v7; // rbx
  char v8; // r15
  char *v9; // rdx
  __int64 v10; // rax

  v6 = 0LL;
  v7 = operator new(0x80uLL);
  if ( v7 )
  {
    v7[2] = 1;
    v7[3] = 1;
    *(_QWORD *)v7 = &std::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>::`vftable';
    if ( v7 != (_DWORD *)-16LL )
    {
      v8 = *a3;
      v9 = *a2;
      *((_QWORD *)v7 + 2) = &CreativeFramework::Actions::TaskbarPinService::`vftable';
      *((_QWORD *)v7 + 6) = 7LL;
      *((_QWORD *)v7 + 5) = 0LL;
      *((_WORD *)v7 + 12) = 0;
      *((_QWORD *)v7 + 10) = 7LL;
      *((_QWORD *)v7 + 9) = 0LL;
      *((_WORD *)v7 + 28) = 0;
      *((_QWORD *)v7 + 14) = 7LL;
      *((_QWORD *)v7 + 13) = 0LL;
      *((_WORD *)v7 + 44) = 0;
      if ( *(_WORD *)v9 )
      {
        v10 = -1LL;
        do
          ++v10;
        while ( *(_WORD *)&v9[2 * v10] );
        v6 = v10;
      }
      std::wstring::assign((_QWORD *)v7 + 11, v9, v6);
      *((_BYTE *)v7 + 120) = v8;
    }
  }
  else
  {
    v7 = 0LL;
  }
  a1[1] = v7;
  *a1 = v7 + 4;
  return a1;
}
