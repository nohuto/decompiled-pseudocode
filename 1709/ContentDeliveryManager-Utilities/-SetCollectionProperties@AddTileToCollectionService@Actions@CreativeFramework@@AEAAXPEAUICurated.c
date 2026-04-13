/*
 * XREFs of ?SetCollectionProperties@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x180077284
 * Callers:
 *     ?Invoke@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x180076810 (-Invoke@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003CE0 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180018B48 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CommitCollectionChanges@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x18007752C (-CommitCollectionChanges@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICurated.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CreativeFramework::Actions::AddTileToCollectionService::SetCollectionProperties(
        CreativeFramework::Actions::AddTileToCollectionService *this,
        struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *a2)
{
  __int64 v3; // rbx
  int v4; // eax
  HRESULT v5; // eax
  int v6; // eax
  CreativeFramework::Actions::AddTileToCollectionService *v7; // rcx
  HSTRING v8; // rax
  __int64 v9; // rbx
  HRESULT v10; // eax
  int v11; // eax
  HSTRING v12[2]; // [rsp+20h] [rbp-60h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-50h] BYREF
  HSTRING string; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v15[32]; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v12[1] = (HSTRING)-2LL;
  if ( *((_QWORD *)this + 12) )
  {
    v8 = (HSTRING)((char *)this + 80);
    if ( *((_QWORD *)this + 13) >= 8uLL )
      v8 = *(HSTRING *)v8;
    v12[0] = v8;
    v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v15, (const WCHAR **)v12);
    string = 0LL;
    v10 = WindowsCreateStringReference(L"Start.Suggestions.Heading", 0x19u, &hstringHeader, &string);
    if ( v10 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v10);
    v11 = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *, HSTRING, _QWORD))(*(_QWORD *)a2 + 264LL))(
            a2,
            string,
            *(_QWORD *)(v9 + 24));
    v7 = retaddr;
    if ( v11 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x273,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v11);
  }
  else
  {
    v12[0] = 0LL;
    v3 = *((_QWORD *)this + 22);
    WindowsDeleteString(0LL);
    v12[0] = 0LL;
    v4 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v3 + 56LL))(v3, v12);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x26D,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v4);
      __debugbreak();
    }
    string = 0LL;
    v5 = WindowsCreateStringReference(L"Start.Suggestions.HiddenTileId", 0x1Eu, &hstringHeader, &string);
    if ( v5 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
    v6 = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *, HSTRING, HSTRING))(*(_QWORD *)a2 + 264LL))(
           a2,
           string,
           v12[0]);
    if ( v6 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x26E,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v6);
    WindowsDeleteString(v12[0]);
  }
  CreativeFramework::Actions::AddTileToCollectionService::CommitCollectionChanges(v7, a2);
}
