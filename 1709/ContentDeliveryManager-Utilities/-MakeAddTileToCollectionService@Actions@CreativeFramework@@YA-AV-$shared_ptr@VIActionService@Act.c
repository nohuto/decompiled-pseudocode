/*
 * XREFs of ?MakeAddTileToCollectionService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800776E0
 * Callers:
 *     <none>
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18005B3D8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??$GetOptionalParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x180073B34 (--$GetOptionalParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x180073C6C (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??0AddTileToCollectionService@Actions@CreativeFramework@@QEAA@PEB_WAEBUPinToStartProperties@12@@Z @ 0x180076568 (--0AddTileToCollectionService@Actions@CreativeFramework@@QEAA@PEB_WAEBUPinToStartProperties@12@@.c)
 *     ??2@YAPEAX_K@Z @ 0x180097394 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=19
_QWORD *__fastcall CreativeFramework::Actions::MakeAddTileToCollectionService(_QWORD *a1, __int64 a2, __int64 **a3)
{
  const WCHAR *v5; // rax
  unsigned __int64 v6; // rbx
  bool v7; // di
  const WCHAR *v8; // rax
  bool v9; // si
  int v10; // r12d
  void **v11; // rax
  unsigned __int64 v12; // r8
  void **v13; // rax
  unsigned __int64 v14; // r8
  _QWORD *v15; // rax
  unsigned __int64 v16; // r8
  void **v17; // rax
  unsigned __int64 v18; // r8
  void **v19; // rax
  void **v20; // rax
  wchar_t *v21; // rdi
  _DWORD *v22; // rbx
  void *v24[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v26; // [rsp+68h] [rbp-98h]
  void *v27[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v28; // [rsp+80h] [rbp-80h]
  unsigned __int64 v29; // [rsp+88h] [rbp-78h]
  void *v30[3]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v31; // [rsp+A8h] [rbp-58h]
  void *v32; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v33; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v34; // [rsp+C8h] [rbp-38h]
  void *v35; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v36; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v37; // [rsp+E8h] [rbp-18h]
  void *v38; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v39; // [rsp+100h] [rbp+0h]
  unsigned __int64 v40; // [rsp+108h] [rbp+8h]
  void *v41; // [rsp+110h] [rbp+10h] BYREF
  __int64 v42; // [rsp+120h] [rbp+20h]
  unsigned __int64 v43; // [rsp+128h] [rbp+28h]
  int v44; // [rsp+130h] [rbp+30h]

  v5 = (const WCHAR *)CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v24, a3, (char *)L"createIfNeeded");
  if ( *((_QWORD *)v5 + 3) >= 8uLL )
    v5 = *(const WCHAR **)v5;
  v6 = -1LL;
  v7 = CompareStringOrdinal(v5, -1, L"true", -1, 1) == 2;
  if ( v26 >= 8 )
    operator delete(v24[0]);
  v8 = (const WCHAR *)CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v24, a3, (char *)L"keepOnRevert");
  if ( *((_QWORD *)v8 + 3) >= 8uLL )
    v8 = *(const WCHAR **)v8;
  v9 = CompareStringOrdinal(v8, -1, L"true", -1, 1) == 2;
  if ( v26 >= 8 )
    operator delete(v24[0]);
  v10 = v7 | 2;
  if ( !v9 )
    v10 = v7;
  v11 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>(v27, a3, (char *)L"collectionId");
  if ( (unsigned __int64)v11[3] >= 8 )
    v11 = (void **)*v11;
  v31 = 7LL;
  v30[2] = 0LL;
  LOWORD(v30[0]) = 0;
  if ( *(_WORD *)v11 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( *((_WORD *)v11 + v12) );
  }
  else
  {
    v12 = 0LL;
  }
  std::wstring::assign(v30, (char *)v11, v12);
  if ( v29 >= 8 )
    operator delete(v27[0]);
  v29 = 7LL;
  v28 = 0LL;
  LOWORD(v27[0]) = 0;
  v13 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>(v24, a3, (char *)L"templateType");
  if ( (unsigned __int64)v13[3] >= 8 )
    v13 = (void **)*v13;
  v34 = 7LL;
  v33 = 0LL;
  LOWORD(v32) = 0;
  if ( *(_WORD *)v13 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( *((_WORD *)v13 + v14) );
  }
  else
  {
    v14 = 0LL;
  }
  std::wstring::assign(&v32, (char *)v13, v14);
  if ( v26 >= 8 )
    operator delete(v24[0]);
  v26 = 7LL;
  v25 = 0LL;
  LOWORD(v24[0]) = 0;
  v15 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v27, a3, (char *)L"displayName");
  if ( v15[3] >= 8uLL )
    v15 = (_QWORD *)*v15;
  v37 = 7LL;
  v36 = 0LL;
  LOWORD(v35) = 0;
  if ( *(_WORD *)v15 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *((_WORD *)v15 + v16) );
  }
  else
  {
    v16 = 0LL;
  }
  std::wstring::assign(&v35, (char *)v15, v16);
  if ( v29 >= 8 )
    operator delete(v27[0]);
  v29 = 7LL;
  v28 = 0LL;
  LOWORD(v27[0]) = 0;
  v17 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>(v24, a3, (char *)L"ctx.contentId");
  if ( (unsigned __int64)v17[3] >= 8 )
    v17 = (void **)*v17;
  v40 = 7LL;
  v39 = 0LL;
  LOWORD(v38) = 0;
  if ( *(_WORD *)v17 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( *((_WORD *)v17 + v18) );
  }
  else
  {
    v18 = 0LL;
  }
  std::wstring::assign(&v38, (char *)v17, v18);
  if ( v26 >= 8 )
    operator delete(v24[0]);
  v26 = 7LL;
  v25 = 0LL;
  LOWORD(v24[0]) = 0;
  v19 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>(v27, a3, (char *)L"ctx.containerPath");
  if ( (unsigned __int64)v19[3] >= 8 )
    v19 = (void **)*v19;
  v43 = 7LL;
  v42 = 0LL;
  LOWORD(v41) = 0;
  if ( *(_WORD *)v19 )
  {
    do
      ++v6;
    while ( *((_WORD *)v19 + v6) );
  }
  else
  {
    v6 = 0LL;
  }
  std::wstring::assign(&v41, (char *)v19, v6);
  if ( v29 >= 8 )
    operator delete(v27[0]);
  v44 = v10;
  v20 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>(v24, a3, (char *)L"ctx.placementId");
  v21 = (wchar_t *)v20;
  if ( (unsigned __int64)v20[3] >= 8 )
    v21 = (wchar_t *)*v20;
  v22 = operator new(0xD0uLL);
  if ( v22 )
  {
    v22[2] = 1;
    v22[3] = 1;
    *(_QWORD *)v22 = &std::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>::`vftable';
    if ( v22 != (_DWORD *)-16LL )
      CreativeFramework::Actions::AddTileToCollectionService::AddTileToCollectionService(
        (CreativeFramework::Actions::AddTileToCollectionService *)(v22 + 4),
        v21,
        v30);
  }
  else
  {
    v22 = 0LL;
  }
  *a1 = v22 + 4;
  a1[1] = v22;
  if ( v26 >= 8 )
    operator delete(v24[0]);
  v26 = 7LL;
  v25 = 0LL;
  LOWORD(v24[0]) = 0;
  if ( v43 >= 8 )
    operator delete(v41);
  v43 = 7LL;
  v42 = 0LL;
  LOWORD(v41) = 0;
  if ( v40 >= 8 )
    operator delete(v38);
  v40 = 7LL;
  v39 = 0LL;
  LOWORD(v38) = 0;
  if ( v37 >= 8 )
    operator delete(v35);
  v37 = 7LL;
  v36 = 0LL;
  LOWORD(v35) = 0;
  if ( v34 >= 8 )
    operator delete(v32);
  v34 = 7LL;
  v33 = 0LL;
  LOWORD(v32) = 0;
  if ( v31 >= 8 )
    operator delete(v30[0]);
  return a1;
}
