/*
 * XREFs of ??0AddTileToCollectionService@Actions@CreativeFramework@@QEAA@PEB_WAEBUPinToStartProperties@12@@Z @ 0x180076568
 * Callers:
 *     ?MakeAddTileToCollectionService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800776E0 (-MakeAddTileToCollectionService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Act.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180018B48 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18005B1D8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?GetFriendlySubscriptionNameFromPlacementId@SubscribedContentUtils@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W@Z @ 0x1800743EC (-GetFriendlySubscriptionNameFromPlacementId@SubscribedContentUtils@CreativeFramework@@YA-AV-$bas.c)
 *     ?GetHashedTileAlias@AddTileToCollectionService@Actions@CreativeFramework@@AEAA?AVHString@Wrappers@WRL@Microsoft@@PEB_W0@Z @ 0x180076A3C (-GetHashedTileAlias@AddTileToCollectionService@Actions@CreativeFramework@@AEAA-AVHString@Wrapper.c)
 *     ?compare@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBAHPEB_W@Z @ 0x180077C28 (-compare@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBAHPEB_W@Z.c)
 *     ??$GetActivationFactory@UITargetedContentUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsInternal@@@wil@@YA?AV?$com_ptr_t@UITargetedContentUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180078198 (--$GetActivationFactory@UITargetedContentUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsI.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
CreativeFramework::Actions::AddTileToCollectionService *__fastcall CreativeFramework::Actions::AddTileToCollectionService::AddTileToCollectionService(
        CreativeFramework::Actions::AddTileToCollectionService *this,
        wchar_t *a2,
        void **a3)
{
  char *v6; // rcx
  _QWORD *v7; // rdi
  _QWORD *v8; // r14
  __int64 v9; // rcx
  const WCHAR *v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v18; // [rsp+38h] [rbp-59h] BYREF
  int v19; // [rsp+40h] [rbp-51h]
  HSTRING string; // [rsp+48h] [rbp-49h] BYREF
  __int64 v21; // [rsp+50h] [rbp-41h] BYREF
  const WCHAR *v22[3]; // [rsp+58h] [rbp-39h] BYREF
  void *v23[3]; // [rsp+70h] [rbp-21h] BYREF
  unsigned __int64 v24; // [rsp+88h] [rbp-9h]
  _BYTE v25[24]; // [rsp+90h] [rbp-1h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v22[1] = (const WCHAR *)-2LL;
  v22[2] = (const WCHAR *)this;
  v19 = 0;
  *(_QWORD *)this = &CreativeFramework::Actions::AddTileToCollectionService::`vftable';
  v6 = (char *)this + 16;
  *((_QWORD *)v6 + 3) = 7LL;
  *((_QWORD *)v6 + 2) = 0LL;
  *(_WORD *)v6 = 0;
  std::wstring::assign((void **)v6, a3, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  *((_QWORD *)this + 9) = 7LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_WORD *)this + 24) = 0;
  *((_QWORD *)this + 13) = 7LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_WORD *)this + 40) = 0;
  std::wstring::assign((void **)this + 10, a3 + 8, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  v7 = (_QWORD *)((char *)this + 112);
  *((_QWORD *)this + 17) = 7LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_WORD *)this + 56) = 0;
  std::wstring::assign((void **)this + 14, a3 + 12, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  v8 = (_QWORD *)((char *)this + 144);
  *((_QWORD *)this + 21) = 7LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_WORD *)this + 72) = 0;
  std::wstring::assign((void **)this + 18, a3 + 16, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 46) = *((_DWORD *)a3 + 40);
  *((_BYTE *)this + 8) = (unsigned int)std::wstring::compare(a3 + 4, L"hidden") == 0;
  if ( *((_QWORD *)this + 21) >= 8uLL )
    v8 = (_QWORD *)*v8;
  if ( *((_QWORD *)this + 17) >= 8uLL )
    v7 = (_QWORD *)*v7;
  CreativeFramework::Actions::AddTileToCollectionService::GetHashedTileAlias(v9, &string, v7, v8);
  CreativeFramework::SubscribedContentUtils::GetFriendlySubscriptionNameFromPlacementId(v23, (char *)a2);
  wil::GetActivationFactory<WindowsInternal::Shell::UnifiedTile::ITargetedContentUnifiedTileIdentifierFactory>(&v21);
  v18 = 0LL;
  v19 = 1;
  v10 = (const WCHAR *)v23;
  if ( v24 >= 8 )
    v10 = (const WCHAR *)v23[0];
  v22[0] = v10;
  v11 = v21;
  v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v25, v22);
  v18 = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, HSTRING, __int64 *))(*(_QWORD *)v11 + 48LL))(
          v11,
          *(_QWORD *)(v12 + 24),
          string,
          &v18);
  if ( v13 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x205,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v13);
  v26 = 0LL;
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v24 >= 8 )
    operator delete(v23[0]);
  v24 = 7LL;
  v23[2] = 0LL;
  LOWORD(v23[0]) = 0;
  WindowsDeleteString(string);
  string = 0LL;
  v14 = v18;
  v15 = 0LL;
  v18 = 0LL;
  v16 = *((_QWORD *)this + 22);
  *((_QWORD *)this + 22) = v14;
  if ( v16 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    v15 = v18;
  }
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return this;
}
