/*
 * XREFs of ?SetCollectionProperties@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x180081F70
 * Callers:
 *     ?Invoke@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800814D0 (-Invoke@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180004050 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001B314 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CommitCollectionChanges@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x180082228 (-CommitCollectionChanges@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICurated.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
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
  wil::details::in1diag3 *v7; // rcx
  wil::details::in1diag3 *v8; // rcx
  HSTRING v9; // rax
  __int64 v10; // rbx
  HRESULT v11; // eax
  int v12; // eax
  HSTRING v13[2]; // [rsp+20h] [rbp-60h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-50h] BYREF
  HSTRING string; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v16[32]; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v13[1] = (HSTRING)-2LL;
  if ( *((_QWORD *)this + 12) )
  {
    v9 = (HSTRING)((char *)this + 80);
    if ( *((_QWORD *)this + 13) >= 8uLL )
      v9 = *(HSTRING *)v9;
    v13[0] = v9;
    v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v16, (const WCHAR **)v13);
    string = 0LL;
    v11 = WindowsCreateStringReference(L"Start.Suggestions.Heading", 0x19u, &hstringHeader, &string);
    if ( v11 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *, HSTRING, _QWORD))(*(_QWORD *)a2 + 280LL))(
              a2,
              string,
              *(_QWORD *)(v10 + 24));
      v8 = retaddr;
      if ( v12 >= 0 )
        goto LABEL_10;
LABEL_15:
      wil::details::in1diag3::Throw_Hr(
        v8,
        (void *)0x273,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v12);
      JUMPOUT(0x18008211CLL);
    }
LABEL_14:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v11);
    goto LABEL_15;
  }
  v13[0] = 0LL;
  v3 = *((_QWORD *)this + 22);
  WindowsDeleteString(0LL);
  v13[0] = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v3 + 56LL))(v3, v13);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x26D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  string = 0LL;
  v5 = WindowsCreateStringReference(L"Start.Suggestions.HiddenTileId", 0x1Eu, &hstringHeader, &string);
  if ( v5 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
    goto LABEL_13;
  }
  v6 = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *, HSTRING, HSTRING))(*(_QWORD *)a2 + 280LL))(
         a2,
         string,
         v13[0]);
  v7 = retaddr;
  if ( v6 < 0 )
  {
LABEL_13:
    wil::details::in1diag3::Throw_Hr(
      v7,
      (void *)0x26E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_14;
  }
  WindowsDeleteString(v13[0]);
LABEL_10:
  CreativeFramework::Actions::AddTileToCollectionService::CommitCollectionChanges(v8, a2);
}
