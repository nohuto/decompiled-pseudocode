/*
 * XREFs of ??$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@wil@@YA?AV?$com_ptr_t@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180082C00
 * Callers:
 *     ?GetStartGridCollection@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18007F624 (-GetStartGridCollection@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UICuratedTileCollection@Cura.c)
 *     ?PinToStart@Actions@CreativeFramework@@YAXPEB_W00_N@Z @ 0x18007F708 (-PinToStart@Actions@CreativeFramework@@YAXPEB_W00_N@Z.c)
 *     ?GetCollection@AddTileToCollectionService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W_N@Z @ 0x180081A70 (-GetCollection@AddTileToCollectionService@Actions@CreativeFramework@@AEAA-AV-$com_ptr_t@UICurate.c)
 *     CreativeFramework::EnumerateTargetedContentTiles @ 0x1800978C4 (CreativeFramework--EnumerateTargetedContentTiles.c)
 *     ?DoesCollectionExist@TargetedContentLayoutHelpers@CreativeFramework@@YA_NPEB_W@Z @ 0x180098704 (-DoesCollectionExist@TargetedContentLayoutHelpers@CreativeFramework@@YA_NPEB_W@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001B314 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wil::ActivateInstance<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollectionManager>(
        __int64 a1)
{
  __int64 v2; // rdi
  int v3; // eax
  int v4; // eax
  wil::details::in1diag3 *v5; // rcx
  __int64 v7; // [rsp+20h] [rbp-58h] BYREF
  const WCHAR *v8[3]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v9; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v8[2] = (const WCHAR *)-2LL;
  v8[0] = L"WindowsInternal.Shell.UnifiedTile.CuratedTileCollections.CuratedTileCollectionManager";
  v2 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&v9, v8);
  v7 = 0LL;
  v3 = RoActivateInstance(*(_QWORD *)(v2 + 24), &v7);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x66F,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v3);
    goto LABEL_7;
  }
  v4 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64))v7)(v7, &GUID_d8b8d379_34cf_44c5_b6fc_eebf7d777279, a1);
  v5 = retaddr;
  if ( v4 < 0 )
  {
LABEL_7:
    wil::details::in1diag3::Throw_Hr(
      v5,
      (void *)0x163B,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v4);
    JUMPOUT(0x180082CFDLL);
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return a1;
}
