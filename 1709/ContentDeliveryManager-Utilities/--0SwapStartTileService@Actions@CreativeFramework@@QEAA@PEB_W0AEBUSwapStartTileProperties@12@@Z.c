/*
 * XREFs of ??0SwapStartTileService@Actions@CreativeFramework@@QEAA@PEB_W0AEBUSwapStartTileProperties@12@@Z @ 0x180074DB0
 * Callers:
 *     ?MakeSwapStartTileService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180075D60 (-MakeSwapStartTileService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Actions@C.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18005B1D8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18005B3D8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 */

// Hidden C++ exception states: #wind=8
CreativeFramework::Actions::SwapStartTileService *__fastcall CreativeFramework::Actions::SwapStartTileService::SwapStartTileService(
        CreativeFramework::Actions::SwapStartTileService *this,
        wchar_t *a2,
        wchar_t *a3,
        void **a4)
{
  _QWORD *v7; // rcx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r8

  *(_QWORD *)this = &CreativeFramework::Actions::SwapStartTileService::`vftable';
  v7 = (_QWORD *)((char *)this + 8);
  v7[3] = 7LL;
  v7[2] = 0LL;
  *(_WORD *)v7 = 0;
  if ( *a2 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a2[v8] );
  }
  else
  {
    v8 = 0LL;
  }
  std::wstring::assign(v7, (char *)a2, v8);
  *((_QWORD *)this + 8) = 7LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_WORD *)this + 20) = 0;
  if ( *a3 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a3[v9] );
  }
  else
  {
    v9 = 0LL;
  }
  std::wstring::assign((_QWORD *)this + 5, (char *)a3, v9);
  *((_QWORD *)this + 12) = 7LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_WORD *)this + 36) = 0;
  std::wstring::assign((void **)this + 9, a4 + 20, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  *((_QWORD *)this + 16) = 7LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_WORD *)this + 52) = 0;
  std::wstring::assign((void **)this + 13, a4 + 12, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  *((_QWORD *)this + 20) = 7LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_WORD *)this + 68) = 0;
  std::wstring::assign((void **)this + 17, a4 + 16, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  *((_QWORD *)this + 24) = 7LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_WORD *)this + 84) = 0;
  std::wstring::assign((void **)this + 21, a4, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  *((_QWORD *)this + 28) = 7LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_WORD *)this + 100) = 0;
  std::wstring::assign((void **)this + 25, a4 + 8, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  *((_QWORD *)this + 32) = 7LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_WORD *)this + 116) = 0;
  std::wstring::assign((void **)this + 29, a4 + 4, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  return this;
}
