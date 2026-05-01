/*
 * XREFs of ?GetGameFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z @ 0x180014A1C
 * Callers:
 *     ?_AddGameConfigsToGameListEntry@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAU?$IVectorView@U_GUID@@@Collections@Foundation@5@AEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@AEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x18001B700 (-_AddGameConfigsToGameListEntry@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Window.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetGameFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@AEAI@Z @ 0x180014AB8 (-GetGameFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV-$unique_ptr@$$.c)
 *     ??3@YAXPEAX_K@Z @ 0x180042948 (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetGameFromGameConfigStore(__int64 a1, __int128 *a2, void **a3)
{
  int GameFromGameConfigStore; // eax
  unsigned int v5; // edi
  void *v6; // rbx
  void *v7; // rcx
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v11; // [rsp+58h] [rbp+10h] BYREF
  void *Block; // [rsp+68h] [rbp+20h] BYREF

  Block = 0LL;
  v11 = 0;
  v9 = *a2;
  GameFromGameConfigStore = GetGameFromGameConfigStore(a1, &v9, &Block, &v11, -2LL);
  v5 = GameFromGameConfigStore;
  if ( GameFromGameConfigStore >= 0 )
  {
    v6 = 0LL;
    v7 = *a3;
    *a3 = Block;
    if ( v7 )
      operator delete(v7);
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)GameFromGameConfigStore);
    v6 = Block;
  }
  if ( v6 )
    operator delete(v6);
  return v5;
}
