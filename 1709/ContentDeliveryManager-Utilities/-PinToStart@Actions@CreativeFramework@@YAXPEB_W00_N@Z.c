/*
 * XREFs of ?PinToStart@Actions@CreativeFramework@@YAXPEB_W00_N@Z @ 0x180074AD8
 * Callers:
 *     ?Invoke@PinToStartService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800762C0 (-Invoke@PinToStartService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003CE0 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18004B9E4 (--$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foun.c)
 *     ?CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W0@Z @ 0x180074844 (-CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UI_ea_180074844.c)
 *     ?GetStartGridCollection@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1800749F4 (-GetStartGridCollection@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UICuratedTileCollection@Cura.c)
 *     ??$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@wil@@YA?AV?$com_ptr_t@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180077F58 (--$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@Wind.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall CreativeFramework::Actions::PinToStart(
        const WCHAR *this,
        const wchar_t *a2,
        const wchar_t *a3,
        const wchar_t *a4)
{
  char v4; // di
  wchar_t **v6; // rbx
  unsigned int v7; // ebx
  __int64 v8; // rdi
  HRESULT v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  DWORD v16; // edx
  int v17; // r8d
  int v18; // eax
  _BYTE v19[8]; // [rsp+38h] [rbp-29h] BYREF
  __int64 v20; // [rsp+40h] [rbp-21h] BYREF
  __int64 v21; // [rsp+48h] [rbp-19h] BYREF
  void (__fastcall ***v22)(__int64, GUID *, __int64 *); // [rsp+50h] [rbp-11h] BYREF
  __int64 v23; // [rsp+58h] [rbp-9h] BYREF
  __int64 v24; // [rsp+60h] [rbp-1h] BYREF
  _QWORD v25[2]; // [rsp+68h] [rbp+7h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp+17h] BYREF
  HSTRING string; // [rsp+90h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v25[1] = -2LL;
  v4 = (char)a4;
  CreativeFramework::Actions::CreatePackagedUnifiedTileIdentifier(&v24, this, a2);
  v6 = &off_18015C6F0;
  while ( CompareStringOrdinal(*v6, -1, a3, -1, 1) != 2 )
  {
    v6 += 2;
    if ( v6 == &off_18015C710 )
    {
      v7 = 0;
      goto LABEL_6;
    }
  }
  v7 = *((_DWORD *)v6 + 2);
LABEL_6:
  if ( v4 )
  {
    wil::ActivateInstance<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollectionManager>(&v21);
    v20 = 0LL;
    v8 = v21;
    string = 0LL;
    v9 = WindowsCreateStringReference(L"AllTiles", 8u, &hstringHeader, &string);
    if ( v9 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9);
    v10 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v8 + 56LL))(v8, string, &v20);
    if ( v10 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x7E,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v10);
    v19[0] = 0;
    v11 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _BYTE *))(*(_QWORD *)v20 + 112LL))(v20, v24, 0LL, v19);
    if ( v11 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x80,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v11);
    if ( !v19[0] )
    {
      if ( v20 )
        (*(void (**)(void))(*(_QWORD *)v20 + 16LL))();
      v12 = v21;
      goto LABEL_34;
    }
    if ( v20 )
      (*(void (**)(void))(*(_QWORD *)v20 + 16LL))();
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  CreativeFramework::Actions::GetStartGridCollection(&v23);
  v13 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v23)(
          v23,
          &GUID_adbf8965_6056_4126_ab26_6660af4661ce,
          v25);
  if ( v13 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x15FD,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v13);
  v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)v25[0] + 48LL))(v25[0], v24, v7);
  if ( v14 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x89,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v14);
  v22 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64, void (__fastcall ****)(__int64, GUID *, __int64 *)))(*(_QWORD *)v23 + 208LL))(
          v23,
          &v22);
  if ( v15 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x8C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v15);
    __debugbreak();
  }
  v18 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncAction *>(v22, v16, v17);
  if ( v18 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x630,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v18);
  if ( v22 )
    ((void (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *)))(*v22)[2])(v22);
  if ( v25[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v25[0] + 16LL))(v25[0]);
  v12 = v23;
LABEL_34:
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
}
