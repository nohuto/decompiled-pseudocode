/*
 * XREFs of ?InitializeNotificationTemplate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ @ 0x180091474
 * Callers:
 *     ??0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@@Z @ 0x18008A714 (--0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV-$map@V-$.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x180048F50 (-Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180062B1C (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180062D20 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@std@@@std@@@2@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x18007E288 (-find@-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator_ea_18007E288.c)
 *     ??$?8_WU?$char_traits@_W@std@@V?$allocator@_W@1@@std@@YA_NAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@PEB_W@Z @ 0x180086484 (--$-8_WU-$char_traits@_W@std@@V-$allocator@_W@1@@std@@YA_NAEBV-$basic_string@_WU-$char_traits@_W.c)
 *     ??A?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@QEAAAEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@$$QEAV21@@Z @ 0x180093270 (--A-$map@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V12@U-$less@V-$basic_s.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CreativeFramework::NotificationManager::ToastHelpers::InitializeNotificationTemplate(void **this)
{
  unsigned __int64 v2; // rdi
  void *v3; // rbx
  void **v4; // rax
  __int64 v5; // rsi
  char *v6; // rbx
  const char *v7; // rdx
  int v8; // eax
  void *v9; // rbx
  void **v10; // rax
  wil::details::in1diag3 *v11; // rcx
  void **v12; // rax
  char *v13; // rdx
  _QWORD v14[2]; // [rsp+48h] [rbp-49h] BYREF
  void *v15[2]; // [rsp+58h] [rbp-39h] BYREF
  __int64 v16; // [rsp+68h] [rbp-29h]
  unsigned __int64 v17; // [rsp+70h] [rbp-21h]
  void *v18[2]; // [rsp+78h] [rbp-19h] BYREF
  __int64 v19; // [rsp+88h] [rbp-9h]
  unsigned __int64 v20; // [rsp+90h] [rbp-1h]
  char *v21[3]; // [rsp+98h] [rbp+7h] BYREF
  unsigned __int64 v22; // [rsp+B0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v14[1] = -2LL;
  v17 = 7LL;
  v2 = 0LL;
  v16 = 0LL;
  LOWORD(v15[0]) = 0;
  std::wstring::assign(v15, (char *)L"templateType", aTemplatetype[0] != 0 ? 0xC : 0);
  v3 = this[4];
  if ( (void *)*std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::find(
                  (__int64)(this + 4),
                  v14,
                  v15) == v3 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xB9,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)0x80070057LL);
    goto LABEL_28;
  }
  if ( v17 >= 8 )
    operator delete(v15[0]);
  v17 = 7LL;
  v16 = 0LL;
  LOWORD(v15[0]) = 0;
  std::wstring::assign(v15, (char *)L"templateType", aTemplatetype[0] != 0 ? 0xC : 0);
  v4 = (void **)std::map<std::wstring,std::wstring>::operator[](this + 4, v15);
  v22 = 7LL;
  v21[2] = 0LL;
  LOWORD(v21[0]) = 0;
  v5 = -1LL;
  std::wstring::assign((void **)v21, v4, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  if ( v17 >= 8 )
    operator delete(v15[0]);
  v17 = 7LL;
  v16 = 0LL;
  LOWORD(v15[0]) = 0;
  v6 = (char *)&unk_18017A9A0;
  while ( !std::operator==<wchar_t>(v21, *((_WORD **)v6 + 1)) )
  {
    v6 += 24;
    if ( v6 == (char *)&std::invalid_argument `RTTI Type Descriptor' )
    {
      v7 = (const char *)v21;
      if ( v22 >= 8 )
        v7 = v21[0];
      wil::details::in1diag3::Throw_HrIfMsg(
        retaddr,
        (void *)0xCF,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)0x80070057LL,
        this[2] == 0LL,
        (__int64)"%ls",
        v7);
      goto LABEL_24;
    }
  }
  v8 = *(_DWORD *)v6;
  *((_DWORD *)this + 12) = *(_DWORD *)v6;
  if ( v8 == 6 )
  {
    v20 = 7LL;
    v19 = 0LL;
    LOWORD(v18[0]) = 0;
    std::wstring::assign(v18, (char *)L"customSchema", aCustomschema[0] != 0 ? 0xC : 0);
    v9 = this[4];
    v10 = (void **)std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::find(
                     (__int64)(this + 4),
                     v14,
                     v18);
    v11 = retaddr;
    if ( *v10 != v9 )
    {
      if ( v20 >= 8 )
        operator delete(v18[0]);
      v20 = 7LL;
      v19 = 0LL;
      LOWORD(v18[0]) = 0;
      std::wstring::assign(v18, (char *)L"customSchema", aCustomschema[0] != 0 ? 0xC : 0);
      v12 = (void **)std::map<std::wstring,std::wstring>::operator[](this + 4, v18);
      if ( this != v12 )
        std::wstring::assign(this, v12, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v20 >= 8 )
        operator delete(v18[0]);
      goto LABEL_24;
    }
LABEL_28:
    wil::details::in1diag3::Throw_Hr(
      v11,
      (void *)0xC4,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)0x80070057LL);
    JUMPOUT(0x18009175DLL);
  }
  v13 = (char *)*((_QWORD *)v6 + 2);
  if ( *(_WORD *)v13 )
  {
    do
      ++v5;
    while ( *(_WORD *)&v13[2 * v5] );
    v2 = v5;
  }
  std::wstring::assign(this, v13, v2);
LABEL_24:
  if ( v22 >= 8 )
    operator delete(v21[0]);
}
