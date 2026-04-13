/*
 * XREFs of ??0SetDefaultApplicationService@Actions@CreativeFramework@@QEAA@PEB_W00@Z @ 0x180079544
 * Callers:
 *     ?MakeSetDefaultApplicationService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800796D0 (-MakeSetDefaultApplicationService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@A.c)
 * Callees:
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800166CC (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DB1C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18005B3D8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
CreativeFramework::Actions::SetDefaultApplicationService *__fastcall CreativeFramework::Actions::SetDefaultApplicationService::SetDefaultApplicationService(
        CreativeFramework::Actions::SetDefaultApplicationService *this,
        wchar_t *a2,
        wchar_t *a3,
        wchar_t *a4)
{
  _QWORD *v7; // rcx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r8
  const WCHAR *v11; // rdi
  __int64 v12; // rax
  wchar_t **v13; // rbx
  unsigned int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *(_QWORD *)this = &CreativeFramework::Actions::SetDefaultApplicationService::`vftable';
  v7 = (_QWORD *)((char *)this + 8);
  v7[3] = 7LL;
  v8 = 0LL;
  v7[2] = 0LL;
  *(_WORD *)v7 = 0;
  if ( *a2 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a2[v9] );
  }
  else
  {
    v9 = 0LL;
  }
  std::wstring::assign(v7, (char *)a2, v9);
  *((_QWORD *)this + 8) = 7LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_WORD *)this + 20) = 0;
  if ( *a3 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( a3[v10] );
  }
  else
  {
    v10 = 0LL;
  }
  std::wstring::assign((_QWORD *)this + 5, (char *)a3, v10);
  v11 = (const WCHAR *)((char *)this + 72);
  *((_QWORD *)this + 12) = 7LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_WORD *)this + 36) = 0;
  if ( *a4 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( a4[v12] );
    v8 = v12;
  }
  std::wstring::assign((_QWORD *)this + 9, (char *)a4, v8);
  if ( *((_QWORD *)this + 12) >= 8uLL )
    v11 = *(const WCHAR **)v11;
  v13 = &off_18015C710;
  while ( CompareStringOrdinal(*v13, -1, v11, -1, 1) != 2 )
  {
    v13 += 2;
    if ( v13 == &off_18015C730 )
    {
      v14 = wil::verify_hresult<long>(0x80070057);
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x26,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\defaultapplicationhelpers.cpp",
        (const char *)v14);
      __debugbreak();
    }
  }
  *((_DWORD *)this + 26) = *((_DWORD *)v13 + 2);
  return this;
}
