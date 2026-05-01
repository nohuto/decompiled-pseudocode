/*
 * XREFs of ?GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z @ 0x18001D948
 * Callers:
 *     ?_OnViewContentsChanged@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileInViewChangeEvent@@@Z @ 0x18000B764 (-_OnViewContentsChanged@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4_V.c)
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@PEAUITileInfo@@@Z @ 0x180012DA0 (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIT.c)
 *     ?RuntimeClassInitialize@SetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJW4GameListCategory@2345@0PEAUITileManager@@PEAUITileInfo@@@Z @ 0x18001D2B0 (-RuntimeClassInitialize@SetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJW4Gam.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002A4C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ @ 0x18000414C (--1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ.c)
 *     ??0TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@PEAUITileInfo@@@Z @ 0x180004F14 (--0TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@PEAUITileInfo@@@Z.c)
 *     ?SynthesizeLegacyPhoneAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUIApplicationIdentifier@@PEAPEAG@Z @ 0x18001DD08 (-SynthesizeLegacyPhoneAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUIApplicatio.c)
 *     ?GetStringMetaProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGPEAPEAG@Z @ 0x180025988 (-GetStringMetaProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGPEAPEAG@Z.c)
 *     ??$GetSimpleDataMetaProperty@_N@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGPEA_N@Z @ 0x180027544 (--$GetSimpleDataMetaProperty@_N@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGPEA_N@Z.c)
 *     ?GetAppIdentifierFromTile@OneCoreDataHelpers@@YAJPEAUITileInfo@@PEAPEAUIApplicationIdentifier@@@Z @ 0x180027EB8 (-GetAppIdentifierFromTile@OneCoreDataHelpers@@YAJPEAUITileInfo@@PEAPEAUIApplicationIdentifier@@@.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GetAppUserModelId(
        Windows::Gaming::Preview::GamesEnumeration *this,
        struct ITileInfo *a2,
        unsigned __int16 **a3)
{
  int StringMetaProperty; // eax
  struct IApplicationIdentifier **v6; // r8
  int v7; // ebx
  int v8; // eax
  Windows::Gaming::Preview::GamesEnumeration *v9; // rcx
  int v10; // eax
  Windows::Gaming::Preview::GamesEnumeration *v11; // rcx
  int AppIdentifierFromTile; // eax
  unsigned __int16 **v13; // r8
  __int64 v14; // rdx
  Windows::Gaming::Preview::GamesEnumeration *v15; // rcx
  Windows::Gaming::Preview::GamesEnumeration *v16; // rcx
  LPVOID v17; // rax
  LPVOID pv; // [rsp+30h] [rbp-21h] BYREF
  __int64 v20; // [rsp+38h] [rbp-19h]
  __int64 v21; // [rsp+40h] [rbp-11h]
  _BYTE v22[72]; // [rsp+48h] [rbp-9h] BYREF
  __int64 (__fastcall ***v23)(_QWORD, GUID *, Windows::Gaming::Preview::GamesEnumeration **); // [rsp+90h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]
  Windows::Gaming::Preview::GamesEnumeration *v25; // [rsp+C0h] [rbp+6Fh] BYREF

  *(_QWORD *)a2 = 0LL;
  TileDataLayerItemWrappers::TDLTileInfoHelper::TDLTileInfoHelper(
    (TileDataLayerItemWrappers::TDLTileInfoHelper *)v22,
    this);
  v20 = -1LL;
  v21 = -1LL;
  pv = 0LL;
  LOBYTE(v25) = 0;
  TileDataLayerItemWrappers::TDLTileInfoHelper::GetSimpleDataMetaProperty<bool>(
    v22,
    L"AppResolver_IsDesktopAppTile",
    &v25);
  if ( (_BYTE)v25 )
  {
    pv = 0LL;
    StringMetaProperty = TileDataLayerItemWrappers::TDLTileInfoHelper::GetStringMetaProperty(
                           (TileDataLayerItemWrappers::TDLTileInfoHelper *)v22,
                           L"AppResolver_AppUserModelID",
                           (unsigned __int16 **)&pv);
    v7 = 0;
    if ( StringMetaProperty < 0 )
      v7 = StringMetaProperty;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x37E,
        (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
        (const char *)(unsigned int)v7);
      goto LABEL_17;
    }
    goto LABEL_16;
  }
  v25 = 0LL;
  v8 = (**v23)(v23, &GUID_66b7d702_1591_4c2e_adfc_5997d695119f, &v25);
  v7 = v8;
  if ( v8 >= 0 )
  {
    if ( (*(int (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration *, LPVOID *))(*(_QWORD *)v25 + 24LL))(
           v25,
           &pv) >= 0 )
      goto LABEL_14;
    pv = 0LL;
    v10 = TileDataLayerItemWrappers::TDLTileInfoHelper::GetStringMetaProperty(
            (TileDataLayerItemWrappers::TDLTileInfoHelper *)v22,
            L"AppResolver_HackedInAppId",
            (unsigned __int16 **)&pv);
    v7 = 0;
    if ( v10 < 0 )
      v7 = v10;
    if ( v7 >= 0 )
    {
LABEL_14:
      v11 = v25;
      if ( v25 )
      {
        v25 = 0LL;
        (*(void (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration *))(*(_QWORD *)v11 + 16LL))(v11);
      }
LABEL_16:
      v7 = 0;
      goto LABEL_17;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x383,
      (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
      (const char *)(unsigned int)v8);
  }
  v9 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration *))(*(_QWORD *)v9 + 16LL))(v9);
  }
LABEL_17:
  if ( v7 != -2147023728 )
  {
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x26,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tdlutility.cpp",
        (const char *)(unsigned int)v7);
      goto LABEL_31;
    }
    goto LABEL_30;
  }
  v25 = 0LL;
  AppIdentifierFromTile = OneCoreDataHelpers::GetAppIdentifierFromTile(this, (struct ITileInfo *)&v25, v6);
  v7 = AppIdentifierFromTile;
  if ( AppIdentifierFromTile < 0 )
  {
    v14 = 33LL;
    goto LABEL_24;
  }
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  v20 = -1LL;
  v21 = -1LL;
  AppIdentifierFromTile = Windows::Gaming::Preview::GamesEnumeration::SynthesizeLegacyPhoneAppUserModelId(
                            v25,
                            (struct IApplicationIdentifier *)&pv,
                            v13);
  v7 = AppIdentifierFromTile;
  if ( AppIdentifierFromTile >= 0 )
  {
    v16 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration *))(*(_QWORD *)v16 + 16LL))(v16);
    }
LABEL_30:
    v17 = pv;
    pv = 0LL;
    v21 = 0LL;
    v20 = 0LL;
    *(_QWORD *)a2 = v17;
    v7 = 0;
    goto LABEL_31;
  }
  v14 = 34LL;
LABEL_24:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v14,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tdlutility.cpp",
    (const char *)(unsigned int)AppIdentifierFromTile);
  v15 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration *))(*(_QWORD *)v15 + 16LL))(v15);
  }
LABEL_31:
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  v20 = 0LL;
  v21 = 0LL;
  TileDataLayerItemWrappers::TDLTileInfoHelper::~TDLTileInfoHelper((TileDataLayerItemWrappers::TDLTileInfoHelper *)v22);
  return (unsigned int)v7;
}
