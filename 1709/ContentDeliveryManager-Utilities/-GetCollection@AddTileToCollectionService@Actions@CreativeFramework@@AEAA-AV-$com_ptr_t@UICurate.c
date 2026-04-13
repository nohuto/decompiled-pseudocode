/*
 * XREFs of ?GetCollection@AddTileToCollectionService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W_N@Z @ 0x180076DB0
 * Callers:
 *     ?Invoke@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x180076810 (-Invoke@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ.c)
 *     ?Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x180076910 (-Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180018B48 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@wil@@YA?AV?$com_ptr_t@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180077F58 (--$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@Wind.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall CreativeFramework::Actions::AddTileToCollectionService::GetCollection(
        __int64 a1,
        _QWORD *a2,
        const WCHAR *a3,
        char a4)
{
  __int64 v7; // rbx
  __int64 v8; // rax
  int v9; // eax
  void (*v10)(void); // rax
  const WCHAR *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rax
  _BYTE v18[8]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v19; // [rsp+28h] [rbp-48h] BYREF
  __int64 v20; // [rsp+30h] [rbp-40h] BYREF
  const WCHAR *v21[2]; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v22[32]; // [rsp+48h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v21[1] = (const WCHAR *)-2LL;
  v21[0] = a3;
  wil::ActivateInstance<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollectionManager>(&v20);
  if ( a4 )
    goto LABEL_7;
  v7 = v20;
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v22, v21);
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *))(*(_QWORD *)v7 + 72LL))(v7, *(_QWORD *)(v8 + 24), v18);
  if ( v9 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x211,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v9);
  if ( v18[0] )
  {
LABEL_7:
    v19 = 0LL;
    v11 = (const WCHAR *)(a1 + 16);
    if ( *(_QWORD *)(a1 + 40) >= 8uLL )
      v11 = *(const WCHAR **)v11;
    v21[0] = v11;
    v12 = v20;
    v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v22, v21);
    v14 = v19;
    v19 = 0LL;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v12 + 56LL))(
            v12,
            *(_QWORD *)(v13 + 24),
            &v19);
    if ( v15 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x219,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v15);
    v16 = v19;
    v19 = 0LL;
    *a2 = v16;
    if ( v20 )
    {
      v10 = *(void (**)(void))(*(_QWORD *)v20 + 16LL);
      goto LABEL_15;
    }
  }
  else
  {
    *a2 = 0LL;
    if ( v20 )
    {
      v10 = *(void (**)(void))(*(_QWORD *)v20 + 16LL);
LABEL_15:
      v10();
    }
  }
  return a2;
}
