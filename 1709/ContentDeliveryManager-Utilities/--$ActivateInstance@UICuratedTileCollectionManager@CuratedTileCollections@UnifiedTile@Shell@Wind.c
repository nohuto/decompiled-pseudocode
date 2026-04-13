/*
 * XREFs of ??$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@wil@@YA?AV?$com_ptr_t@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180077F58
 * Callers:
 *     ?GetStartGridCollection@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1800749F4 (-GetStartGridCollection@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UICuratedTileCollection@Cura.c)
 *     ?PinToStart@Actions@CreativeFramework@@YAXPEB_W00_N@Z @ 0x180074AD8 (-PinToStart@Actions@CreativeFramework@@YAXPEB_W00_N@Z.c)
 *     ?GetCollection@AddTileToCollectionService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W_N@Z @ 0x180076DB0 (-GetCollection@AddTileToCollectionService@Actions@CreativeFramework@@AEAA-AV-$com_ptr_t@UICurate.c)
 *     CreativeFramework::EnumerateTargetedContentTiles @ 0x18008A500 (CreativeFramework--EnumerateTargetedContentTiles.c)
 *     ?DoesCollectionExist@TargetedContentLayoutHelpers@CreativeFramework@@YA_NPEB_W@Z @ 0x18008B300 (-DoesCollectionExist@TargetedContentLayoutHelpers@CreativeFramework@@YA_NPEB_W@Z.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180018B48 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wil::ActivateInstance<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollectionManager>(
        __int64 a1)
{
  __int64 v2; // rdi
  int v3; // eax
  int v4; // eax
  __int64 v6; // [rsp+20h] [rbp-58h] BYREF
  const WCHAR *v7[3]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v8; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v7[2] = (const WCHAR *)-2LL;
  v7[0] = L"WindowsInternal.Shell.UnifiedTile.CuratedTileCollections.CuratedTileCollectionManager";
  v2 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&v8, v7);
  v6 = 0LL;
  v3 = RoActivateInstance(*(_QWORD *)(v2 + 24), &v6);
  if ( v3 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x667,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v3);
  v4 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64))v6)(v6, &GUID_a2fe1af5_3eb7_4213_8761_6918a2c4b7fc, a1);
  if ( v4 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x15FD,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v4);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return a1;
}
