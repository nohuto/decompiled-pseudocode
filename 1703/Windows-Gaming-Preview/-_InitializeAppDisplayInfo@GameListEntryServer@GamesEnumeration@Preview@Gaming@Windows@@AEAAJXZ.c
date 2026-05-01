/*
 * XREFs of ?_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180013518
 * Callers:
 *     ?get_DisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIAppDisplayInfo@ApplicationModel@5@@Z @ 0x180013A70 (-get_DisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIAppDi.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002A4C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ @ 0x18000414C (--1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180004B50 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180004BE8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??0TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@PEAUITileInfo@@@Z @ 0x180004F14 (--0TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@PEAUITileInfo@@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18000C538 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIAppDisplayInfo@ApplicationModel@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001C7B0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIAppDisplayInfo@ApplicationModel@W_ea_18001C7B0.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIAppDisplayInfo@ApplicationModel@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001C900 (-Release@-$RuntimeClass@U-$InterfaceList@UIAppDisplayInfo@ApplicationModel@Windows@_ea_18001C900.c)
 *     ??$GetSimpleDataMetaProperty@_N@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGPEA_N@Z @ 0x180027544 (--$GetSimpleDataMetaProperty@_N@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGPEA_N@Z.c)
 *     __security_check_cookie @ 0x180028AF0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800291B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeAppDisplayInfo(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this)
{
  HRESULT v2; // eax
  int ActivationFactory; // eax
  int Interface; // edi
  __int64 v5; // rsi
  __int64 v6; // r14
  __int64 v7; // r15
  HSTRING Reserved1; // r13
  _QWORD *v9; // r12
  __int64 v10; // rcx
  char *v11; // rax
  char *v12; // rbx
  _QWORD *v13; // rdi
  HRESULT v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  char *v18; // rcx
  HRESULT v19; // eax
  HSTRING v20; // rdi
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rdi
  HSTRING_HEADER *v24; // rsi
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v36; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v37; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v38; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v39; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v40[2]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v41[80]; // [rsp+68h] [rbp-A0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+B8h] [rbp-50h] BYREF
  HSTRING string; // [rsp+D0h] [rbp-38h] BYREF
  HSTRING_HEADER v44; // [rsp+D8h] [rbp-30h] BYREF
  HSTRING v45; // [rsp+F0h] [rbp-18h] BYREF
  HSTRING_HEADER v46; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v47; // [rsp+110h] [rbp+8h]
  HSTRING_HEADER v48; // [rsp+118h] [rbp+10h] BYREF
  __int64 v49; // [rsp+130h] [rbp+28h]
  wil::details::in1diag3 *retaddr; // [rsp+170h] [rbp+68h]

  v40[1] = -2LL;
  v39 = 0LL;
  string = 0LL;
  v2 = WindowsCreateStringReference(L"Windows.ApplicationModel.AppDisplayInfo", 0x27u, &hstringHeader, &string);
  if ( v2 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
  ActivationFactory = RoGetActivationFactory(string, &GUID_676532a9_b7d3_49b3_8fd2_8e9fdacb209f, &v39);
  Interface = ActivationFactory;
  string = 0LL;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xC6,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_61;
  }
  TileDataLayerItemWrappers::TDLTileInfoHelper::TDLTileInfoHelper(
    (TileDataLayerItemWrappers::TDLTileInfoHelper *)v41,
    *((struct ITileInfo **)this + 24));
  LOBYTE(v36) = 0;
  TileDataLayerItemWrappers::TDLTileInfoHelper::GetSimpleDataMetaProperty<bool>(
    v41,
    L"AppResolver_IsDesktopAppTile",
    &v36);
  if ( !(_BYTE)v36 )
  {
    v38 = 0LL;
    v45 = 0LL;
    v19 = WindowsCreateStringReference(L"Windows.Internal.StateRepository.Application", 0x2Cu, &v44, &v45);
    if ( v19 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v19);
    v20 = v45;
    v21 = v38;
    if ( v38 )
    {
      v38 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    v22 = RoGetActivationFactory(v20, &GUID_a2e68a2e_20c7_49f4_ba27_268b020ad4f8, &v38);
    Interface = v22;
    v45 = 0LL;
    if ( v22 >= 0 )
    {
      v37 = 0LL;
      v23 = v38;
      v24 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v48, (const WCHAR **)this + 14);
      v25 = v37;
      if ( v37 )
      {
        v37 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
      }
      v26 = (*(__int64 (__fastcall **)(__int64, _QWORD, PVOID, __int64 *))(*(_QWORD *)v23 + 240LL))(
              v23,
              0LL,
              v24[1].Reserved.Reserved1,
              &v37);
      Interface = v26;
      v49 = 0LL;
      if ( v26 >= 0 )
      {
        v26 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v37 + 48LL))(v37, v40);
        Interface = v26;
        if ( v26 >= 0 )
        {
          v28 = v39;
          v29 = *((_QWORD *)this + 25);
          if ( v29 )
          {
            *((_QWORD *)this + 25) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
          }
          v26 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v28 + 48LL))(
                  v28,
                  v40[0],
                  (char *)this + 200);
          Interface = v26;
          if ( v26 >= 0 )
          {
            v32 = v37;
            if ( v37 )
            {
              v37 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
            }
            v33 = v38;
            if ( v38 )
            {
              v38 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
            }
            goto LABEL_59;
          }
          v27 = 229LL;
        }
        else
        {
          v27 = 223LL;
        }
      }
      else
      {
        v27 = 220LL;
      }
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v27,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v26);
      v30 = v37;
      if ( v37 )
      {
        v37 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xD8,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v22);
    }
    v31 = v38;
    if ( v38 )
    {
      v38 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    }
    goto LABEL_60;
  }
  v5 = *((_QWORD *)this + 24);
  v6 = *((_QWORD *)this + 23);
  v7 = *((_QWORD *)this + 22);
  Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v46, (const WCHAR **)this + 14)[1].Reserved.Reserved1;
  v9 = (_QWORD *)((char *)this + 200);
  v10 = *((_QWORD *)this + 25);
  if ( v10 )
  {
    *v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  *v9 = 0LL;
  v11 = (char *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v11;
  if ( v11 )
  {
    v13 = v11 + 16;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v11 + 16));
    *((_QWORD *)v12 + 6) = 1LL;
    *(_QWORD *)v12 = &Microsoft::WRL::RuntimeClass<Windows::ApplicationModel::IAppDisplayInfo,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    *((_QWORD *)v12 + 1) = &Microsoft::WRL::RuntimeClass<Windows::ApplicationModel::IAppDisplayInfo,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IWeakReferenceSource'};
    *v13 = &Microsoft::WRL::RuntimeClass<Windows::ApplicationModel::IAppDisplayInfo,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    *(_QWORD *)v12 = &Windows::Gaming::Preview::GamesEnumeration::DesktopAppDisplayInfoServer::`vftable';
    *((_QWORD *)v12 + 1) = &Windows::Gaming::Preview::GamesEnumeration::DesktopAppDisplayInfoServer::`vftable'{for `IWeakReferenceSource'};
    *v13 = &Windows::Gaming::Preview::GamesEnumeration::DesktopAppDisplayInfoServer::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
    *((_QWORD *)v12 + 7) = 0LL;
    *((_QWORD *)v12 + 8) = 0LL;
    *((_QWORD *)v12 + 9) = 0LL;
    *((_QWORD *)v12 + 10) = 0LL;
    WindowsDeleteString(0LL);
    *((_QWORD *)v12 + 10) = 0LL;
    v14 = WindowsDuplicateString(Reserved1, (HSTRING *)v12 + 10);
    Interface = v14;
    if ( v14 >= 0 )
    {
      if ( *((_QWORD *)v12 + 7) != v7 )
      {
        if ( v7 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
        v15 = *((_QWORD *)v12 + 7);
        *((_QWORD *)v12 + 7) = v7;
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      if ( *((_QWORD *)v12 + 8) != v6 )
      {
        if ( v6 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
        v16 = *((_QWORD *)v12 + 8);
        *((_QWORD *)v12 + 8) = v6;
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
      if ( *((_QWORD *)v12 + 9) != v5 )
      {
        if ( v5 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
        v17 = *((_QWORD *)v12 + 9);
        *((_QWORD *)v12 + 9) = v5;
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      Interface = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x16,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\desktopappdisplayinfo.cpp",
        (const char *)(unsigned int)v14);
    }
    v18 = v12;
    if ( Interface >= 0 )
    {
      Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::ApplicationModel::IAppDisplayInfo,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::QueryInterface(
                    v12,
                    &GUID_1aeb1103_e4d4_41aa_a4f6_c4a276e79eac,
                    v9);
      v18 = v12;
    }
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::ApplicationModel::IAppDisplayInfo,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v18);
  }
  else
  {
    Interface = -2147024882;
  }
  v47 = 0LL;
  if ( Interface >= 0 )
  {
LABEL_59:
    Interface = 0;
    goto LABEL_60;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0xCE,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)(unsigned int)Interface);
LABEL_60:
  TileDataLayerItemWrappers::TDLTileInfoHelper::~TDLTileInfoHelper((TileDataLayerItemWrappers::TDLTileInfoHelper *)v41);
LABEL_61:
  v34 = v39;
  if ( v39 )
  {
    v39 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  }
  return (unsigned int)Interface;
}
