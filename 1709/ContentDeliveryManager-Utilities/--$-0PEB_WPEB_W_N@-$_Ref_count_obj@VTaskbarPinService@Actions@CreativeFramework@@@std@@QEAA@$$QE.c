/*
 * XREFs of ??$?0PEB_WPEB_W_N@?$_Ref_count_obj@VTaskbarPinService@Actions@CreativeFramework@@@std@@QEAA@$$QEAPEB_W0$$QEA_N@Z @ 0x18007EC44
 * Callers:
 *     ?MakePinToTaskbarService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x18007E7A0 (-MakePinToTaskbarService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Actions@Cr.c)
 *     ?MakeUnpinFromTaskbarService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x18007E980 (-MakeUnpinFromTaskbarService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Action.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18005B3D8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::_Ref_count_obj<CreativeFramework::Actions::TaskbarPinService>::_Ref_count_obj<CreativeFramework::Actions::TaskbarPinService>(
        __int64 a1,
        char **a2,
        char **a3,
        char *a4)
{
  __int64 v5; // rbx
  char v6; // r14
  char *v7; // rbp
  char *v8; // rdx
  _QWORD *v9; // rcx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r8

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>::`vftable';
  v5 = a1 + 16;
  if ( a1 != -16 )
  {
    v6 = *a4;
    v7 = *a3;
    v8 = *a2;
    *(_QWORD *)v5 = &CreativeFramework::Actions::TaskbarPinService::`vftable';
    v9 = (_QWORD *)(a1 + 24);
    *(_QWORD *)(v5 + 32) = 7LL;
    *(_QWORD *)(v5 + 24) = 0LL;
    *(_WORD *)(v5 + 8) = 0;
    v10 = -1LL;
    if ( *(_WORD *)v8 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( *(_WORD *)&v8[2 * v11] );
    }
    else
    {
      v11 = 0LL;
    }
    std::wstring::assign(v9, v8, v11);
    *(_QWORD *)(v5 + 64) = 7LL;
    *(_QWORD *)(v5 + 56) = 0LL;
    *(_WORD *)(v5 + 40) = 0;
    if ( *(_WORD *)v7 )
    {
      do
        ++v10;
      while ( *(_WORD *)&v7[2 * v10] );
    }
    else
    {
      v10 = 0LL;
    }
    std::wstring::assign((_QWORD *)(v5 + 40), v7, v10);
    *(_QWORD *)(v5 + 96) = 7LL;
    *(_QWORD *)(v5 + 88) = 0LL;
    *(_WORD *)(v5 + 72) = 0;
    *(_BYTE *)(v5 + 104) = v6;
  }
  return a1;
}
