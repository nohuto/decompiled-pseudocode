/*
 * XREFs of ?MakePinToStartService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800763B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetOptionalParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x180073B34 (--$GetOptionalParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x180073C6C (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$?0PEB_WPEB_WPEB_W_N@?$_Ref_count_obj@VPinToStartService@Actions@CreativeFramework@@@std@@QEAA@$$QEAPEB_W00$$QEA_N@Z @ 0x180078FC4 (--$-0PEB_WPEB_WPEB_W_N@-$_Ref_count_obj@VPinToStartService@Actions@CreativeFramework@@@std@@QEAA.c)
 *     ??2@YAPEAX_K@Z @ 0x180097394 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall CreativeFramework::Actions::MakePinToStartService(_QWORD *a1, __int64 a2, __int64 **a3)
{
  const WCHAR *v5; // rax
  _QWORD *v6; // rax
  void **v7; // rax
  void **v8; // rax
  void *v9; // rax
  __int64 started; // rcx
  bool v12; // [rsp+38h] [rbp-89h] BYREF
  int v13; // [rsp+3Ch] [rbp-85h]
  _QWORD *v14; // [rsp+40h] [rbp-81h] BYREF
  void **v15; // [rsp+48h] [rbp-79h] BYREF
  _QWORD v16[3]; // [rsp+50h] [rbp-71h] BYREF
  void *v17[3]; // [rsp+68h] [rbp-59h] BYREF
  unsigned __int64 v18; // [rsp+80h] [rbp-41h]
  void *v19[3]; // [rsp+88h] [rbp-39h] BYREF
  unsigned __int64 v20; // [rsp+A0h] [rbp-21h]
  void *v21[3]; // [rsp+A8h] [rbp-19h] BYREF
  unsigned __int64 v22; // [rsp+C0h] [rbp-1h]
  void *v23[6]; // [rsp+C8h] [rbp+7h] BYREF

  v16[1] = -2LL;
  v13 = 0;
  v5 = (const WCHAR *)CreativeFramework::Actions::GetOptionalParameter<std::wstring>(
                        v23,
                        a3,
                        (char *)L"useExistingTile");
  if ( *((_QWORD *)v5 + 3) >= 8uLL )
    v5 = *(const WCHAR **)v5;
  v12 = CompareStringOrdinal(v5, -1, L"true", -1, 1) == 2;
  v6 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v21, a3, (char *)L"pinnedTileSize");
  if ( v6[3] >= 8uLL )
    v6 = (_QWORD *)*v6;
  v14 = v6;
  v7 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>(v19, a3, (char *)L"packageRelativeAppId");
  if ( (unsigned __int64)v7[3] >= 8 )
    v7 = (void **)*v7;
  v15 = v7;
  v8 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>(v17, a3, (char *)L"packageFamilyName");
  if ( (unsigned __int64)v8[3] >= 8 )
    v8 = (void **)*v8;
  v16[0] = v8;
  v9 = operator new(0x80uLL);
  v16[2] = v9;
  if ( v9 )
    started = std::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>(
                (_DWORD)v9,
                (unsigned int)v16,
                (unsigned int)&v15,
                (unsigned int)&v14,
                (__int64)&v12);
  else
    started = 0LL;
  *a1 = started + 16;
  a1[1] = started;
  if ( v18 >= 8 )
    operator delete(v17[0]);
  v18 = 7LL;
  v17[2] = 0LL;
  LOWORD(v17[0]) = 0;
  if ( v20 >= 8 )
    operator delete(v19[0]);
  v20 = 7LL;
  v19[2] = 0LL;
  LOWORD(v19[0]) = 0;
  if ( v22 >= 8 )
    operator delete(v21[0]);
  v22 = 7LL;
  v21[2] = 0LL;
  LOWORD(v21[0]) = 0;
  if ( v23[3] >= (void *)8 )
    operator delete(v23[0]);
  return a1;
}
