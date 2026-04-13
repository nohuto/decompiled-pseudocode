/*
 * XREFs of ??0PublishWindowsTipService@Actions@CreativeFramework@@QEAA@PEB_W0@Z @ 0x180082EC4
 * Callers:
 *     ?MakePublishWindowsTipService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800832D0 (-MakePublishWindowsTipService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Actio.c)
 * Callees:
 *     ?OriginateError@details@wil@@YAXW4FailureType@2@J@Z @ 0x180002708 (-OriginateError@details@wil@@YAXW4FailureType@2@J@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18005B3D8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreativeFramework::Actions::PublishWindowsTipService::PublishWindowsTipService(
        CreativeFramework::Actions::PublishWindowsTipService *this,
        wchar_t *a2,
        wchar_t *a3)
{
  __int64 v4; // rbx
  _QWORD *v5; // rcx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rdx
  char v9; // al
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (__int64)this;
  *(_QWORD *)this = &CreativeFramework::Actions::PublishWindowsTipService::`vftable';
  v5 = (_QWORD *)((char *)this + 8);
  v5[3] = 7LL;
  v5[2] = 0LL;
  *(_WORD *)v5 = 0;
  v6 = -1LL;
  if ( *a2 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a2[v7] );
  }
  else
  {
    v7 = 0LL;
  }
  std::wstring::assign(v5, (char *)a2, v7);
  *(_QWORD *)(v4 + 64) = 7LL;
  *(_QWORD *)(v4 + 56) = 0LL;
  *(_WORD *)(v4 + 40) = 0;
  if ( *a3 )
  {
    do
      ++v6;
    while ( a3[v6] );
  }
  else
  {
    v6 = 0LL;
  }
  std::wstring::assign((_QWORD *)(v4 + 40), (char *)a3, v6);
  v8 = *(_QWORD *)(v4 + 24);
  if ( v8 - 1 > 0xFF )
  {
    wil::details::OriginateError();
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x16,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\publishwindowstip.cpp",
      (const char *)0x80070057LL);
    __debugbreak();
  }
  if ( v8 > 0x100 || (v9 = 0, !*(_QWORD *)(v4 + 56)) )
    v9 = 1;
  if ( v9 )
  {
    v4 = 2147942487LL;
    wil::details::OriginateError();
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x17,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\publishwindowstip.cpp",
      (const char *)0x80070057LL);
  }
  return v4;
}
