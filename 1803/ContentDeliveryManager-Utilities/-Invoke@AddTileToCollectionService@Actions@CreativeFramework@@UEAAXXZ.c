/*
 * XREFs of ?Invoke@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800814D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCollection@AddTileToCollectionService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W_N@Z @ 0x180081A70 (-GetCollection@AddTileToCollectionService@Actions@CreativeFramework@@AEAA-AV-$com_ptr_t@UICurate.c)
 *     ?UpdateTileAliasSystem@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@_N@Z @ 0x180081BDC (-UpdateTileAliasSystem@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUIUnifiedTi.c)
 *     ?SetCollectionProperties@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x180081F70 (-SetCollectionProperties@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICurated.c)
 *     ?CommitCollectionChanges@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x180082228 (-CommitCollectionChanges@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICurated.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CreativeFramework::Actions::AddTileToCollectionService::Invoke(
        CreativeFramework::Actions::AddTileToCollectionService *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v5; // r8
  struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *v6; // rbx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *v10; // [rsp+48h] [rbp+10h] BYREF

  v5 = (_QWORD *)((char *)this + 16);
  if ( *((_QWORD *)this + 5) >= 8uLL )
    v5 = (_QWORD *)*v5;
  LOBYTE(a4) = *((_BYTE *)this + 184) & 1;
  CreativeFramework::Actions::AddTileToCollectionService::GetCollection(this, &v10, v5, a4, -2LL);
  v6 = v10;
  if ( v10 )
  {
    CreativeFramework::Actions::AddTileToCollectionService::UpdateTileAliasSystem(
      this,
      *((struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier **)this + 22),
      1);
    if ( *((_BYTE *)this + 8) )
    {
      CreativeFramework::Actions::AddTileToCollectionService::SetCollectionProperties(this, v6);
    }
    else
    {
      v9 = 0LL;
      v7 = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *, _QWORD, __int64 *))(*(_QWORD *)v6 + 176LL))(
             v6,
             *((_QWORD *)this + 22),
             &v9);
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x221,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
          (const char *)(unsigned int)v7);
        JUMPOUT(0x1800815BDLL);
      }
      CreativeFramework::Actions::AddTileToCollectionService::CommitCollectionChanges(retaddr, v6);
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  if ( v6 )
    (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *))(*(_QWORD *)v6 + 16LL))(v6);
}
