/*
 * XREFs of ?GetStartGridCollection@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18007F624
 * Callers:
 *     ?PinToStart@Actions@CreativeFramework@@YAXPEB_W00_N@Z @ 0x18007F708 (-PinToStart@Actions@CreativeFramework@@YAXPEB_W00_N@Z.c)
 *     ?SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ @ 0x18007FA08 (-SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180004050 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@wil@@YA?AV?$com_ptr_t@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180082C00 (--$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@Wind.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall CreativeFramework::Actions::GetStartGridCollection(_QWORD *a1)
{
  __int64 v2; // rdi
  HRESULT v3; // eax
  int v4; // eax
  wil::details::in1diag3 *v5; // rcx
  _QWORD v7[3]; // [rsp+28h] [rbp-50h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-38h] BYREF
  HSTRING string; // [rsp+58h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v7[1] = -2LL;
  v7[2] = a1;
  wil::ActivateInstance<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollectionManager>(v7);
  *a1 = 0LL;
  v2 = v7[0];
  string = 0LL;
  v3 = WindowsCreateStringReference(L"Start.TileGrid", 0xEu, &hstringHeader, &string);
  if ( v3 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v3);
    goto LABEL_7;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD *))(*(_QWORD *)v2 + 56LL))(v2, string, a1);
  v5 = retaddr;
  if ( v4 < 0 )
  {
LABEL_7:
    wil::details::in1diag3::Throw_Hr(
      v5,
      (void *)0x70,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v4);
    JUMPOUT(0x18007F706LL);
  }
  if ( v7[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7[0] + 16LL))(v7[0]);
  return a1;
}
