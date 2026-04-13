/*
 * XREFs of ?PinToStart@Actions@CreativeFramework@@YAXPEB_W00_N@Z @ 0x18007F708
 * Callers:
 *     ?Invoke@PinToStartService@Actions@CreativeFramework@@UEAAXXZ @ 0x180080EE0 (-Invoke@PinToStartService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180004050 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18004F8D4 (--$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foun.c)
 *     ?CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W0@Z @ 0x18007F464 (-CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UI_ea_18007F464.c)
 *     ?GetStartGridCollection@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18007F624 (-GetStartGridCollection@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UICuratedTileCollection@Cura.c)
 *     ??$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@wil@@YA?AV?$com_ptr_t@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180082C00 (--$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@Wind.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
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
  wil::details::in1diag3 *v11; // rcx
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  wil::details::in1diag3 *v16; // rcx
  int v17; // eax
  wil::details::in1diag3 *v18; // rcx
  int v19; // eax
  DWORD v20; // edx
  int v21; // r8d
  wil::details::in1diag3 *v22; // rcx
  int v23; // eax
  _BYTE v24[8]; // [rsp+38h] [rbp-29h] BYREF
  __int64 v25; // [rsp+40h] [rbp-21h] BYREF
  __int64 v26; // [rsp+48h] [rbp-19h] BYREF
  void (__fastcall ***v27)(__int64, GUID *, __int64 *); // [rsp+50h] [rbp-11h] BYREF
  __int64 v28; // [rsp+58h] [rbp-9h] BYREF
  __int64 v29; // [rsp+60h] [rbp-1h] BYREF
  _QWORD v30[2]; // [rsp+68h] [rbp+7h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp+17h] BYREF
  HSTRING string; // [rsp+90h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v30[1] = -2LL;
  v4 = (char)a4;
  CreativeFramework::Actions::CreatePackagedUnifiedTileIdentifier(&v29, this, a2);
  v6 = &off_18017A880;
  while ( CompareStringOrdinal(*v6, -1, a3, -1, 1) != 2 )
  {
    v6 += 2;
    if ( v6 == &off_18017A8A0 )
    {
      v7 = 0;
      goto LABEL_6;
    }
  }
  v7 = *((_DWORD *)v6 + 2);
LABEL_6:
  if ( !v4 )
    goto LABEL_18;
  wil::ActivateInstance<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollectionManager>(&v26);
  v25 = 0LL;
  v8 = v26;
  string = 0LL;
  v9 = WindowsCreateStringReference(L"AllTiles", 8u, &hstringHeader, &string);
  if ( v9 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9);
    goto LABEL_33;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v8 + 56LL))(v8, string, &v25);
  v11 = retaddr;
  if ( v10 < 0 )
  {
LABEL_33:
    wil::details::in1diag3::Throw_Hr(
      v11,
      (void *)0x7E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_34;
  }
  v24[0] = 0;
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _BYTE *))(*(_QWORD *)v25 + 112LL))(v25, v29, 0LL, v24);
  v13 = retaddr;
  if ( v12 < 0 )
  {
LABEL_34:
    wil::details::in1diag3::Throw_Hr(
      v13,
      (void *)0x80,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_35;
  }
  if ( !v24[0] )
  {
    if ( v25 )
      (*(void (**)(void))(*(_QWORD *)v25 + 16LL))();
    v14 = v26;
    goto LABEL_27;
  }
  if ( v25 )
    (*(void (**)(void))(*(_QWORD *)v25 + 16LL))();
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
LABEL_18:
  CreativeFramework::Actions::GetStartGridCollection(&v28);
  v15 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v28)(
          v28,
          &GUID_adbf8965_6056_4126_ab26_6660af4661ce,
          v30);
  v16 = retaddr;
  if ( v15 < 0 )
  {
LABEL_35:
    wil::details::in1diag3::Throw_Hr(
      v16,
      (void *)0x163B,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v15);
    goto LABEL_36;
  }
  v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)v30[0] + 48LL))(v30[0], v29, v7);
  v18 = retaddr;
  if ( v17 < 0 )
  {
LABEL_36:
    wil::details::in1diag3::Throw_Hr(
      v18,
      (void *)0x89,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v17);
LABEL_37:
    wil::details::in1diag3::Throw_Hr(
      v22,
      (void *)0x8C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v19);
    __debugbreak();
  }
  v27 = 0LL;
  v19 = (*(__int64 (__fastcall **)(__int64, void (__fastcall ****)(__int64, GUID *, __int64 *)))(*(_QWORD *)v28 + 224LL))(
          v28,
          &v27);
  v22 = retaddr;
  if ( v19 < 0 )
    goto LABEL_37;
  v23 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncAction *>(v27, v20, v21);
  if ( v23 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x638,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v23);
    JUMPOUT(0x18007F9FBLL);
  }
  if ( v27 )
    ((void (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *)))(*v27)[2])(v27);
  if ( v30[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v30[0] + 16LL))(v30[0]);
  v14 = v28;
LABEL_27:
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
}
