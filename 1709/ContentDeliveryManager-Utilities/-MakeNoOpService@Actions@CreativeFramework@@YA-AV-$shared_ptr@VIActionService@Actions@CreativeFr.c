/*
 * XREFs of ?MakeNoOpService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800715D0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180097394 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall CreativeFramework::Actions::MakeNoOpService(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rdx

  v2 = operator new(0x18uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>::`vftable';
    if ( v2 != (_DWORD *)-16LL )
      *((_QWORD *)v2 + 2) = &CreativeFramework::Actions::NoOpService::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 4;
  a1[1] = v3;
  return a1;
}
