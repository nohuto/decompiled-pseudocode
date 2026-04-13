/*
 * XREFs of ?MakeSwapStartTileService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180075D60
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x1800333AC (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180033540 (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ??$GetOptionalParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x180073B34 (--$GetOptionalParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??0SwapStartTileService@Actions@CreativeFramework@@QEAA@PEB_W0AEBUSwapStartTileProperties@12@@Z @ 0x180074DB0 (--0SwapStartTileService@Actions@CreativeFramework@@QEAA@PEB_W0AEBUSwapStartTileProperties@12@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180097394 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall CreativeFramework::Actions::MakeSwapStartTileService(_QWORD *a1, __int64 a2, __int64 **a3)
{
  void **v5; // rdi
  void **v6; // rdi
  void **v7; // rdi
  void **v8; // rdi
  void **v9; // rdi
  void **v10; // rdi
  wchar_t *v11; // rax
  wchar_t *v12; // rsi
  wchar_t *v13; // rax
  wchar_t *v14; // rdi
  _DWORD *v15; // rbx
  void *v17[3]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v18; // [rsp+58h] [rbp-A8h]
  void *v19[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+70h] [rbp-90h]
  unsigned __int64 v21; // [rsp+78h] [rbp-88h]
  void *v22[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v23; // [rsp+90h] [rbp-70h]
  unsigned __int64 v24; // [rsp+98h] [rbp-68h]
  void *v25[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v26; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v27; // [rsp+B8h] [rbp-48h]
  void *v28[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v29; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v30; // [rsp+D8h] [rbp-28h]
  void *v31[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v32; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v33; // [rsp+F8h] [rbp-8h]
  void *v34[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v35; // [rsp+110h] [rbp+10h]
  unsigned __int64 v36; // [rsp+118h] [rbp+18h]
  void *v37[3]; // [rsp+120h] [rbp+20h] BYREF
  unsigned __int64 v38; // [rsp+138h] [rbp+38h]

  v21 = 7LL;
  v20 = 0LL;
  LOWORD(v19[0]) = 0;
  v24 = 7LL;
  v23 = 0LL;
  LOWORD(v22[0]) = 0;
  v27 = 7LL;
  v26 = 0LL;
  LOWORD(v25[0]) = 0;
  v30 = 7LL;
  v29 = 0LL;
  LOWORD(v28[0]) = 0;
  v33 = 7LL;
  v32 = 0LL;
  LOWORD(v31[0]) = 0;
  v36 = 7LL;
  v35 = 0LL;
  LOWORD(v34[0]) = 0;
  v5 = (void **)CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v17, a3, (char *)L"ctx.containerPath");
  if ( v25 != v5 )
  {
    if ( v27 >= 8 )
      operator delete(v25[0]);
    v27 = 7LL;
    v26 = 0LL;
    LOWORD(v25[0]) = 0;
    std::wstring::_Assign_rv(v25, v5);
  }
  if ( v18 >= 8 )
    operator delete(v17[0]);
  v6 = (void **)CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v17, a3, (char *)L"ctx.contentId");
  if ( v22 != v6 )
  {
    if ( v24 >= 8 )
      operator delete(v22[0]);
    v24 = 7LL;
    v23 = 0LL;
    LOWORD(v22[0]) = 0;
    std::wstring::_Assign_rv(v22, v6);
  }
  if ( v18 >= 8 )
    operator delete(v17[0]);
  v7 = (void **)CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v17, a3, (char *)L"ctx.placementId");
  if ( v19 != v7 )
  {
    if ( v21 >= 8 )
      operator delete(v19[0]);
    v21 = 7LL;
    v20 = 0LL;
    LOWORD(v19[0]) = 0;
    std::wstring::_Assign_rv(v19, v7);
  }
  if ( v18 >= 8 )
    operator delete(v17[0]);
  v8 = (void **)CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v17, a3, (char *)L"applicationId");
  if ( v34 != v8 )
  {
    if ( v36 >= 8 )
      operator delete(v34[0]);
    v36 = 7LL;
    v35 = 0LL;
    LOWORD(v34[0]) = 0;
    std::wstring::_Assign_rv(v34, v8);
  }
  if ( v18 >= 8 )
    operator delete(v17[0]);
  v9 = (void **)CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v17, a3, (char *)L"packageFamilyName");
  if ( v28 != v9 )
  {
    if ( v30 >= 8 )
      operator delete(v28[0]);
    v30 = 7LL;
    v29 = 0LL;
    LOWORD(v28[0]) = 0;
    std::wstring::_Assign_rv(v28, v9);
  }
  if ( v18 >= 8 )
    operator delete(v17[0]);
  v10 = (void **)CreativeFramework::Actions::GetOptionalParameter<std::wstring>(
                   v17,
                   a3,
                   (char *)L"packageRelativeAppId");
  if ( v31 != v10 )
  {
    if ( v33 >= 8 )
      operator delete(v31[0]);
    v33 = 7LL;
    v32 = 0LL;
    LOWORD(v31[0]) = 0;
    std::wstring::_Assign_rv(v31, v10);
  }
  if ( v18 >= 8 )
    operator delete(v17[0]);
  v11 = (wchar_t *)CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v17, a3, (char *)L"newTileId");
  v12 = v11;
  if ( *((_QWORD *)v11 + 3) >= 8uLL )
    v12 = *(wchar_t **)v11;
  v13 = (wchar_t *)CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v37, a3, (char *)L"oldTileId");
  v14 = v13;
  if ( *((_QWORD *)v13 + 3) >= 8uLL )
    v14 = *(wchar_t **)v13;
  v15 = operator new(0x118uLL);
  if ( v15 )
  {
    v15[2] = 1;
    v15[3] = 1;
    *(_QWORD *)v15 = &std::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>::`vftable';
    if ( v15 != (_DWORD *)-16LL )
      CreativeFramework::Actions::SwapStartTileService::SwapStartTileService(
        (CreativeFramework::Actions::SwapStartTileService *)(v15 + 4),
        v14,
        v12,
        v19);
  }
  else
  {
    v15 = 0LL;
  }
  *a1 = v15 + 4;
  a1[1] = v15;
  if ( v38 >= 8 )
    operator delete(v37[0]);
  v38 = 7LL;
  v37[2] = 0LL;
  LOWORD(v37[0]) = 0;
  if ( v18 >= 8 )
    operator delete(v17[0]);
  v18 = 7LL;
  v17[2] = 0LL;
  LOWORD(v17[0]) = 0;
  if ( v36 >= 8 )
    operator delete(v34[0]);
  v36 = 7LL;
  v35 = 0LL;
  LOWORD(v34[0]) = 0;
  if ( v33 >= 8 )
    operator delete(v31[0]);
  v33 = 7LL;
  v32 = 0LL;
  LOWORD(v31[0]) = 0;
  if ( v30 >= 8 )
    operator delete(v28[0]);
  v30 = 7LL;
  v29 = 0LL;
  LOWORD(v28[0]) = 0;
  if ( v27 >= 8 )
    operator delete(v25[0]);
  v27 = 7LL;
  v26 = 0LL;
  LOWORD(v25[0]) = 0;
  if ( v24 >= 8 )
    operator delete(v22[0]);
  v24 = 7LL;
  v23 = 0LL;
  LOWORD(v22[0]) = 0;
  std::wstring::_Tidy(v19, 1, 0LL);
  return a1;
}
