/*
 * XREFs of ??0AddTileToCollectionService@Actions@CreativeFramework@@QEAA@PEB_WAEBUPinToStartProperties@12@@Z @ 0x1800811B8
 * Callers:
 *     ??$make_shared@VAddTileToCollectionService@Actions@CreativeFramework@@PEB_WAEAUPinToStartProperties@23@@std@@YA?AV?$shared_ptr@VAddTileToCollectionService@Actions@CreativeFramework@@@0@$$QEAPEB_WAEAUPinToStartProperties@Actions@CreativeFramework@@@Z @ 0x180083564 (--$make_shared@VAddTileToCollectionService@Actions@CreativeFramework@@PEB_WAEAUPinToStartPropert.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001B314 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180062B1C (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?GetFriendlySubscriptionNameFromPlacementId@SubscribedContentUtils@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W@Z @ 0x18007F01C (-GetFriendlySubscriptionNameFromPlacementId@SubscribedContentUtils@CreativeFramework@@YA-AV-$bas.c)
 *     ?GetHashedTileAlias@AddTileToCollectionService@Actions@CreativeFramework@@AEAA?AVHString@Wrappers@WRL@Microsoft@@PEB_W0@Z @ 0x1800816E8 (-GetHashedTileAlias@AddTileToCollectionService@Actions@CreativeFramework@@AEAA-AVHString@Wrapper.c)
 *     ??$GetActivationFactory@UITargetedContentUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsInternal@@@wil@@YA?AV?$com_ptr_t@UITargetedContentUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180082DC8 (--$GetActivationFactory@UITargetedContentUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsI.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
CreativeFramework::Actions::AddTileToCollectionService *__fastcall CreativeFramework::Actions::AddTileToCollectionService::AddTileToCollectionService(
        CreativeFramework::Actions::AddTileToCollectionService *this,
        wchar_t *a2,
        void **a3)
{
  char *v6; // rcx
  _QWORD *v7; // rsi
  _QWORD *v8; // r14
  _QWORD *v9; // rbx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rax
  const wchar_t *v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  const WCHAR *v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rsi
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v24; // [rsp+38h] [rbp-59h] BYREF
  int v25; // [rsp+40h] [rbp-51h]
  HSTRING string; // [rsp+48h] [rbp-49h] BYREF
  __int64 v27; // [rsp+50h] [rbp-41h] BYREF
  const WCHAR *v28[3]; // [rsp+58h] [rbp-39h] BYREF
  void *v29[3]; // [rsp+70h] [rbp-21h] BYREF
  unsigned __int64 v30; // [rsp+88h] [rbp-9h]
  _BYTE v31[24]; // [rsp+90h] [rbp-1h] BYREF
  __int64 v32; // [rsp+A8h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v28[1] = (const WCHAR *)-2LL;
  v28[2] = (const WCHAR *)this;
  v25 = 0;
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
  v9 = a3 + 4;
  v10 = aHidden[0] != 0 ? 6 : 0;
  v11 = v9[2];
  if ( v9[3] >= 8uLL )
    v9 = (_QWORD *)*v9;
  v12 = aHidden[0] != 0 ? 6 : 0;
  if ( v11 < v10 )
    v12 = v11;
  if ( v12 )
  {
    v13 = L"hidden";
    while ( *(_WORD *)v9 == *v13 )
    {
      v9 = (_QWORD *)((char *)v9 + 2);
      ++v13;
      if ( !--v12 )
        goto LABEL_9;
    }
    v14 = *(_WORD *)v9 < *v13 ? -1 : 1;
  }
  else
  {
LABEL_9:
    v14 = 0LL;
  }
  v15 = v11 != (aHidden[0] != 0 ? 6 : 0);
  if ( v11 < v10 )
    v15 = -1;
  if ( (_DWORD)v14 )
    v15 = v14;
  *((_BYTE *)this + 8) = v15 == 0;
  if ( *((_QWORD *)this + 21) >= 8uLL )
    v8 = (_QWORD *)*v8;
  if ( *((_QWORD *)this + 17) >= 8uLL )
    v7 = (_QWORD *)*v7;
  CreativeFramework::Actions::AddTileToCollectionService::GetHashedTileAlias(v14, &string, v7, v8);
  CreativeFramework::SubscribedContentUtils::GetFriendlySubscriptionNameFromPlacementId(v29, (char *)a2);
  wil::GetActivationFactory<WindowsInternal::Shell::UnifiedTile::ITargetedContentUnifiedTileIdentifierFactory>(&v27);
  v24 = 0LL;
  v25 = 1;
  v16 = (const WCHAR *)v29;
  if ( v30 >= 8 )
    v16 = (const WCHAR *)v29[0];
  v28[0] = v16;
  v17 = v27;
  v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v31, v28);
  v24 = 0LL;
  v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, HSTRING, __int64 *))(*(_QWORD *)v17 + 48LL))(
          v17,
          *(_QWORD *)(v18 + 24),
          string,
          &v24);
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x205,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v19);
    JUMPOUT(0x1800814C0LL);
  }
  v32 = 0LL;
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  if ( v30 >= 8 )
    operator delete(v29[0]);
  v30 = 7LL;
  v29[2] = 0LL;
  LOWORD(v29[0]) = 0;
  WindowsDeleteString(string);
  string = 0LL;
  v20 = v24;
  v21 = 0LL;
  v24 = 0LL;
  v22 = *((_QWORD *)this + 22);
  *((_QWORD *)this + 22) = v20;
  if ( v22 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    v21 = v24;
  }
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  return this;
}
