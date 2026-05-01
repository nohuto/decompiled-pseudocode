/*
 * XREFs of ?_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUITileInfo@@@Z @ 0x180005794
 * Callers:
 *     _lambda_037faec81fd749a52e0692d3e533ddb2_::operator() @ 0x180006D98 (_lambda_037faec81fd749a52e0692d3e533ddb2_--operator().c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002A4C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@PEAUITileManager@@PEAUIVisualElementEnumerator@@AEAPEAUITileInfo@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@012@$$QEAPEAUITileManager@@$$QEAPEAUIVisualElementEnumerator@@AEAPEAUITileInfo@@@Z @ 0x180006F5C (--$MakeAndInitialize@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@PEAUIT.c)
 *     ??$emplace_back@AEBV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@Z @ 0x180007044 (--$emplace_back@AEBV-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$InterfaceList@VCFTMCrossProcServer@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000A150 (-Release@-$RuntimeClass@U-$InterfaceList@UIGameListEntry@GamesEnumeration@Preview@G_ea_18000A150.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000A63C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPackageFamilyName@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z @ 0x18001DE1C (-GetPackageFamilyName@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_FilterTile(
        Windows::Gaming::Preview::GamesEnumeration::FindAllOperation *this,
        struct ITileInfo *a2)
{
  _WORD *v3; // rax
  int PackageFamilyName; // eax
  unsigned int v5; // edi
  void *v7; // rdi
  int v8; // eax
  const char *v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rcx
  LPVOID pv[6]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF
  struct ITileInfo *v15; // [rsp+68h] [rbp+10h] BYREF
  __int64 v16; // [rsp+70h] [rbp+18h] BYREF
  __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  v15 = a2;
  v3 = (_WORD *)*((_QWORD *)this + 7);
  if ( v3 && *v3 )
  {
    pv[0] = 0LL;
    pv[1] = (LPVOID)-1LL;
    pv[2] = (LPVOID)-1LL;
    PackageFamilyName = Windows::Gaming::Preview::GamesEnumeration::GetPackageFamilyName(
                          a2,
                          (struct ITileInfo *)pv,
                          (unsigned __int16 **)a2);
    v5 = PackageFamilyName;
    if ( PackageFamilyName < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x5B,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
        (const char *)(unsigned int)PackageFamilyName);
      if ( pv[0] )
        CoTaskMemFree(pv[0]);
      return v5;
    }
    v7 = pv[0];
    if ( (unsigned int)_o__wcsicmp(*((_QWORD *)this + 7), pv[0]) )
    {
      if ( v7 )
        CoTaskMemFree(v7);
      return 0LL;
    }
    if ( v7 )
      CoTaskMemFree(v7);
  }
  v16 = 0LL;
  v14 = *((_QWORD *)this + 11);
  v17 = *((_QWORD *)this + 10);
  v8 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer,Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer,ITileManager *,IVisualElementEnumerator *,ITileInfo * &>(
         &v16,
         &v17,
         &v14,
         &v15);
  if ( v8 >= 0 )
  {
    try
    {
      std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::emplace_back<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer> const &>(
        (char *)this + 96,
        &v16);
    }
    catch ( ... )
    {
      LODWORD(v14) = wil::details::in1diag3::Return_CaughtException(
                       retaddr,
                       (void *)0x71,
                       (unsigned int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
                       v9);
      v11 = v16;
      if ( v16 )
      {
        v16 = 0LL;
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Microsoft::WRL::Details::InterfaceList<CFTMCrossProcServer,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v11);
      }
      return (unsigned int)v14;
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x6B,
      (unsigned int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v8,
      -2);
  }
  v10 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Microsoft::WRL::Details::InterfaceList<CFTMCrossProcServer,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v10);
  }
  return 0LL;
}
