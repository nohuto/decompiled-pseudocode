/*
 * XREFs of ?CommitInternal@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@_N2@Z @ 0x1800251A8
 * Callers:
 *     ?RuntimeClassInitialize@SetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJW4GameListCategory@2345@0PEAUITileManager@@PEAUITileInfo@@@Z @ 0x18001D2B0 (-RuntimeClassInitialize@SetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJW4Gam.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002A4C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureTDLObjects@@YAJPEAUITileManager@@PEAUIVisualElementEnumerator@@PEAPEAU1@PEAPEAU2@@Z @ 0x180023F08 (-EnsureTDLObjects@@YAJPEAUITileManager@@PEAUIVisualElementEnumerator@@PEAPEAU1@PEAPEAU2@@Z.c)
 *     ?CommitTDLItemWithRetry@@YAJV?$function@$$A6AJXZ@wistd@@0@Z @ 0x180024184 (-CommitTDLItemWithRetry@@YAJV-$function@$$A6AJXZ@wistd@@0@Z.c)
 *     ?ClearRetryPropertyTables@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAXXZ @ 0x1800258B8 (-ClearRetryPropertyTables@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TileDataLayerItemWrappers::TDLTileInfoHelper::CommitInternal(
        TileDataLayerItemWrappers::TDLTileInfoHelper *this,
        struct ITileManager *a2,
        struct IVisualElementEnumerator *a3)
{
  int v4; // eax
  int v5; // ebx
  struct ITileManager *v6; // rcx
  int v8; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v9; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v10; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v11; // [rsp+40h] [rbp-C8h]
  __int128 v12; // [rsp+50h] [rbp-B8h]
  __int128 v13; // [rsp+60h] [rbp-A8h]
  _QWORD v14[3]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v15; // [rsp+88h] [rbp-80h]
  _QWORD *v16; // [rsp+D8h] [rbp-30h]
  __int64 (__fastcall **v17)(); // [rsp+E0h] [rbp-28h] BYREF
  __int128 v18; // [rsp+E8h] [rbp-20h]
  __int64 (__fastcall ***v19)(); // [rsp+148h] [rbp+40h]
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]
  struct ITileManager *v21; // [rsp+178h] [rbp+70h] BYREF

  v10 = 0LL;
  v21 = 0LL;
  LOBYTE(v8) = 0;
  LOBYTE(v9) = 0;
  v4 = EnsureTDLObjects(a2, 0LL, &v21, 0LL);
  v5 = v4;
  if ( v4 >= 0 )
  {
    *((_QWORD *)&v11 + 1) = this;
    *(_QWORD *)&v12 = &v8;
    *(_QWORD *)&v13 = this;
    *((_QWORD *)&v12 + 1) = &v21;
    *((_QWORD *)&v13 + 1) = &v9;
    *(_QWORD *)&v11 = &v10;
    v17 = off_18002F558;
    v19 = &v17;
    v18 = v11;
    v14[0] = off_18002F588;
    v16 = v14;
    v15 = v13;
    *(_OWORD *)&v14[1] = v12;
    v5 = CommitTDLItemWithRetry((wil::details::in1diag3 *)v14, (__int64)&v17);
    if ( v5 >= 0 )
      TileDataLayerItemWrappers::TDLTileInfoHelper::ClearRetryPropertyTables(this);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x3AC,
      (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
      (const char *)(unsigned int)v4);
  }
  v6 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(struct ITileManager *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return (unsigned int)v5;
}
