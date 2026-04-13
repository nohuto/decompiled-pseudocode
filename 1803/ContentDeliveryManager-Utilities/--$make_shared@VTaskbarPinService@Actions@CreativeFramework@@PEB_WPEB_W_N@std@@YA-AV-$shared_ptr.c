/*
 * XREFs of ??$make_shared@VTaskbarPinService@Actions@CreativeFramework@@PEB_WPEB_W_N@std@@YA?AV?$shared_ptr@VTaskbarPinService@Actions@CreativeFramework@@@0@$$QEAPEB_W0$$QEA_N@Z @ 0x18008A2E0
 * Callers:
 *     ?MakePinToTaskbarService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180089B70 (-MakePinToTaskbarService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Actions@Cr.c)
 *     ?MakeUnpinFromTaskbarService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180089D90 (-MakeUnpinFromTaskbarService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Action.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180062D20 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800A4410 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall std::make_shared<CreativeFramework::Actions::TaskbarPinService,wchar_t const *,wchar_t const *,bool>(
        _QWORD *a1,
        char **a2,
        char **a3,
        char *a4)
{
  _DWORD *v8; // rbx
  char v9; // r12
  char *v10; // r15
  char *v11; // rdx
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r8

  v8 = operator new(0x80uLL);
  if ( v8 )
  {
    v8[2] = 1;
    v8[3] = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>::`vftable';
    v9 = *a4;
    v10 = *a3;
    v11 = *a2;
    *((_QWORD *)v8 + 2) = &CreativeFramework::Actions::TaskbarPinService::`vftable';
    *((_QWORD *)v8 + 6) = 7LL;
    *((_QWORD *)v8 + 5) = 0LL;
    *((_WORD *)v8 + 12) = 0;
    v12 = -1LL;
    if ( *(_WORD *)v11 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( *(_WORD *)&v11[2 * v13] );
    }
    else
    {
      v13 = 0LL;
    }
    std::wstring::assign((_QWORD *)v8 + 3, v11, v13);
    *((_QWORD *)v8 + 10) = 7LL;
    *((_QWORD *)v8 + 9) = 0LL;
    *((_WORD *)v8 + 28) = 0;
    if ( *(_WORD *)v10 )
    {
      do
        ++v12;
      while ( *(_WORD *)&v10[2 * v12] );
    }
    else
    {
      v12 = 0LL;
    }
    std::wstring::assign((_QWORD *)v8 + 7, v10, v12);
    *((_QWORD *)v8 + 14) = 7LL;
    *((_QWORD *)v8 + 13) = 0LL;
    *((_WORD *)v8 + 44) = 0;
    *((_BYTE *)v8 + 120) = v9;
  }
  else
  {
    v8 = 0LL;
  }
  a1[1] = v8;
  *a1 = v8 + 4;
  return a1;
}
