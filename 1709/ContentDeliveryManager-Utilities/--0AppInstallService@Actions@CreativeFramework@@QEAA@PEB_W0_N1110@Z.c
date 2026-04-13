/*
 * XREFs of ??0AppInstallService@Actions@CreativeFramework@@QEAA@PEB_W0_N1110@Z @ 0x180072A9C
 * Callers:
 *     ?MakeAppInstallService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180073100 (-MakeAppInstallService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Actions@Crea.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18005B3D8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
CreativeFramework::Actions::AppInstallService *__fastcall CreativeFramework::Actions::AppInstallService::AppInstallService(
        CreativeFramework::Actions::AppInstallService *this,
        wchar_t *a2,
        wchar_t *a3,
        char a4,
        bool a5,
        bool a6,
        bool a7,
        wchar_t *Src)
{
  _QWORD *v11; // rcx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r8

  *(_QWORD *)this = &CreativeFramework::Actions::AppInstallService::`vftable';
  v11 = (_QWORD *)((char *)this + 8);
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
  *((_QWORD *)this + 8) = 7LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_WORD *)this + 20) = 0;
  if ( *a3 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( a3[v14] );
  }
  else
  {
    v14 = 0LL;
  }
  std::wstring::assign((_QWORD *)this + 5, (char *)a3, v14);
  *((_BYTE *)this + 72) = a4;
  *((_BYTE *)this + 73) = a6;
  *((_BYTE *)this + 74) = a5;
  *((_BYTE *)this + 75) = a7;
  *((_QWORD *)this + 13) = 7LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_WORD *)this + 40) = 0;
  *((_QWORD *)this + 17) = 7LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_WORD *)this + 56) = 0;
  if ( *Src )
  {
    do
      ++v12;
    while ( Src[v12] );
  }
  else
  {
    v12 = 0LL;
  }
  std::wstring::assign((_QWORD *)this + 14, (char *)Src, v12);
  *((_QWORD *)this + 21) = 7LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_WORD *)this + 72) = 0;
  *((_QWORD *)this + 25) = 7LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_WORD *)this + 88) = 0;
  return this;
}
