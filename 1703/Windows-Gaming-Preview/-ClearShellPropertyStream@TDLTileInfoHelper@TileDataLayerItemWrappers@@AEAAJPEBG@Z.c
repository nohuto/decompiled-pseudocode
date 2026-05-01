/*
 * XREFs of ?ClearShellPropertyStream@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBG@Z @ 0x180025A08
 * Callers:
 *     ?RuntimeClassInitialize@SetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJW4GameListCategory@2345@0PEAUITileManager@@PEAUITileInfo@@@Z @ 0x18001D2B0 (-RuntimeClassInitialize@SetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJW4Gam.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002A4C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetAndRecordShellProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGAEAV?$ComPtr@UIStream@@@WRL@Microsoft@@@Z @ 0x18002574C (-SetAndRecordShellProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGAEAV-$ComPtr@UI.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TileDataLayerItemWrappers::TDLTileInfoHelper::ClearShellPropertyStream(
        TileDataLayerItemWrappers::TDLTileInfoHelper *this,
        const unsigned __int16 *a2)
{
  IStream *v4; // rbx
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // r9
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  IStream *v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = SHCreateMemStream(0LL, 0);
  v4 = v11;
  if ( !v11 )
  {
    v5 = -2147024882;
    v6 = 1144LL;
    v7 = 2147942414LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
      (const char *)v7);
    goto LABEL_7;
  }
  v8 = TileDataLayerItemWrappers::TDLTileInfoHelper::SetAndRecordShellProperty((__int64)this, a2, &v11);
  v5 = v8;
  if ( v8 < 0 )
  {
    v7 = (unsigned int)v8;
    v6 = 1145LL;
    goto LABEL_5;
  }
  v5 = 0;
LABEL_7:
  if ( v4 )
    (*(void (__fastcall **)(IStream *))(*(_QWORD *)v4 + 16LL))(v4);
  return v5;
}
