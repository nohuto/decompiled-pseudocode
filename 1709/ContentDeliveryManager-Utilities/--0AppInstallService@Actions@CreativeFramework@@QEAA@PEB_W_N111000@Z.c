/*
 * XREFs of ??0AppInstallService@Actions@CreativeFramework@@QEAA@PEB_W_N111000@Z @ 0x180072BE8
 * Callers:
 *     ?MakeAppInstallService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180073100 (-MakeAppInstallService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Actions@Crea.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18005B3D8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 */

// Hidden C++ exception states: #wind=7
CreativeFramework::Actions::AppInstallService *__fastcall CreativeFramework::Actions::AppInstallService::AppInstallService(
        CreativeFramework::Actions::AppInstallService *this,
        wchar_t *a2,
        char a3,
        char a4,
        bool a5,
        bool a6,
        wchar_t *Src,
        wchar_t *a8,
        wchar_t *a9)
{
  unsigned __int64 v10; // rbx
  _QWORD *v11; // rcx
  __int64 v12; // rdi
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r8

  *(_QWORD *)this = &CreativeFramework::Actions::AppInstallService::`vftable';
  *((_QWORD *)this + 4) = 7LL;
  v10 = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_WORD *)this + 4) = 0;
  *((_QWORD *)this + 8) = 7LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_WORD *)this + 20) = 0;
  *((_BYTE *)this + 72) = a3;
  *((_BYTE *)this + 73) = a5;
  *((_BYTE *)this + 74) = a4;
  *((_BYTE *)this + 75) = a6;
  v11 = (_QWORD *)((char *)this + 80);
  v11[3] = 7LL;
  v11[2] = 0LL;
  *(_WORD *)v11 = 0;
  v12 = -1LL;
  if ( *a2 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( a2[v13] );
  }
  else
  {
    v13 = 0LL;
  }
  std::wstring::assign(v11, (char *)a2, v13);
  *((_QWORD *)this + 17) = 7LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_WORD *)this + 56) = 0;
  if ( *Src )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( Src[v14] );
  }
  else
  {
    v14 = 0LL;
  }
  std::wstring::assign((_QWORD *)this + 14, (char *)Src, v14);
  *((_QWORD *)this + 21) = 7LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_WORD *)this + 72) = 0;
  *((_QWORD *)this + 25) = 7LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_WORD *)this + 88) = 0;
  if ( a8 )
  {
    if ( *a8 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a8[v15] );
    }
    else
    {
      v15 = 0LL;
    }
    std::wstring::assign((_QWORD *)this + 18, (char *)a8, v15);
  }
  if ( a9 )
  {
    if ( *a9 )
    {
      do
        ++v12;
      while ( a9[v12] );
      v10 = v12;
    }
    std::wstring::assign((_QWORD *)this + 22, (char *)a9, v10);
  }
  return this;
}
