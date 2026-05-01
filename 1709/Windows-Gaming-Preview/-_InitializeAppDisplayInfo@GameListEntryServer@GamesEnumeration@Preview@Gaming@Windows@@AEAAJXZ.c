/*
 * XREFs of ?_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800279B0
 * Callers:
 *     ?get_DisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIAppDisplayInfo@ApplicationModel@5@@Z @ 0x180028B60 (-get_DisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIAppDi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18000FA10 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@PEAPEAUHSTRING__@@@Z @ 0x180014858 (-GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GamePro.c)
 *     ??$MakeAndInitialize@VGameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UIAppDisplayInfo@ApplicationModel@5@PEAUHSTRING__@@PEAU8@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIAppDisplayInfo@ApplicationModel@Windows@@@WRL@Microsoft@@@012@$$QEAPEAUHSTRING__@@1@Z @ 0x18002BC14 (--$MakeAndInitialize@VGameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UI.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@ApplicationModel@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180036400 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_180036400.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@ApplicationModel@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180036570 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIApp_ea_180036570.c)
 *     ?GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEAU?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@_N@Z @ 0x180037FD0 (-GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEA.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180041970 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeAppDisplayInfo(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rcx
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  int Interface; // edi
  _QWORD *v8; // r14
  __int64 v9; // rcx
  __int64 FirstGameConfig; // r15
  __int64 v12; // rsi
  const WCHAR *v13; // rsi
  unsigned __int64 v14; // rax
  UINT32 v15; // r14d
  unsigned int v16; // ebx
  int v17; // eax
  __int128 v18; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  HSTRING v20; // [rsp+80h] [rbp+40h] BYREF
  HSTRING string; // [rsp+88h] [rbp+48h] BYREF
  HSTRING v22; // [rsp+90h] [rbp+50h] BYREF
  HSTRING v23; // [rsp+98h] [rbp+58h] BYREF

  v3 = *((_QWORD *)this + 33);
  if ( v3 )
  {
    v4 = *((_QWORD *)this + 27);
    if ( v4 )
    {
      *((_QWORD *)this + 27) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    *((_QWORD *)this + 27) = 0LL;
    v5 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
    v6 = v5;
    if ( !v5 )
    {
      Interface = -2147024882;
LABEL_11:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x23C,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)Interface);
      return (unsigned int)Interface;
    }
    v8 = v5 + 2;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v5 + 2));
    v6[8] = 1LL;
    *v6 = &Microsoft::WRL::RuntimeClass<Windows::ApplicationModel::IAppDisplayInfo,Microsoft::WRL::FtmBase>::`vftable';
    v6[1] = &Microsoft::WRL::RuntimeClass<Windows::ApplicationModel::IAppDisplayInfo,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
    *v8 = &Microsoft::WRL::RuntimeClass<Windows::ApplicationModel::IAppDisplayInfo,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    *v6 = &Windows::Gaming::Preview::GamesEnumeration::TileAppDisplayInfoServer::`vftable';
    v6[1] = &Windows::Gaming::Preview::GamesEnumeration::TileAppDisplayInfoServer::`vftable'{for `IWeakReferenceSource'};
    *v8 = &Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
    v6[9] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    v9 = v6[9];
    v6[9] = v3;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppDisplayInfo,Microsoft::WRL::FtmBase>::QueryInterface(
                  v6,
                  &GUID_1aeb1103_e4d4_41aa_a4f6_c4a276e79eac,
                  (char *)this + 216);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppDisplayInfo,Microsoft::WRL::FtmBase>::Release(v6);
    if ( Interface < 0 )
      goto LABEL_11;
    return 0LL;
  }
  if ( !*((_QWORD *)this + 36) || !*((_QWORD *)this + 37) )
  {
    v16 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x256,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)0x8000FFFFLL);
    return v16;
  }
  LOBYTE(a2) = 1;
  FirstGameConfig = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetFirstGameConfig(
                      *((_QWORD *)this + 36),
                      a2);
  v12 = *(_QWORD *)(FirstGameConfig + 16);
  if ( *(_DWORD *)(v12 + 20) != 1 )
    return 0LL;
  string = 0LL;
  v13 = *(const WCHAR **)(v12 + 24);
  if ( !v13 )
    goto LABEL_24;
  v14 = -1LL;
  do
    ++v14;
  while ( v13[v14] );
  v15 = -1;
  if ( v14 <= 0xFFFFFFFF )
    v15 = v14;
  v16 = v14 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v14 <= 0xFFFFFFFF )
  {
    WindowsDeleteString(0LL);
    string = 0LL;
    v16 = WindowsCreateString(v13, v15, &string);
  }
  if ( (v16 & 0x80000000) == 0 )
  {
LABEL_24:
    v20 = 0LL;
    v18 = *(_OWORD *)FirstGameConfig;
    WindowsDeleteString(0LL);
    v20 = 0LL;
    GetStringPropertyFromGameConfigStore(*((_QWORD *)this + 37), &v18, 23LL, &v20);
    v22 = string;
    v23 = v20;
    v17 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer,Windows::ApplicationModel::IAppDisplayInfo,HSTRING__ *,HSTRING__ *>(
            (char *)this + 216,
            &v23,
            &v22);
    v16 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x251,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v17);
      WindowsDeleteString(v20);
      v20 = 0LL;
      goto LABEL_26;
    }
    WindowsDeleteString(v20);
    v20 = 0LL;
    WindowsDeleteString(string);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x245,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)v16);
LABEL_26:
  WindowsDeleteString(string);
  return v16;
}
