/*
 * XREFs of ?SetLauncherExecutableFileWithParamsAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIStorageFile@Storage@5@PEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x18002B840
 * Callers:
 *     ?SetLauncherExecutableFileAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIStorageFile@Storage@5@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x18002B830 (-SetLauncherExecutableFileAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180010850 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGame_ea_180010850.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180010930 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_180010930.c)
 *     ??$MakeAsyncActionHelper@VComTaskPoolHandler@Internal@Windows@@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAUIAsyncAction@Foundation@1@W4TrustLevel@@PEAV?$AsyncCallbackBase@VCNoResult@Internal@Windows@@@01@@Z @ 0x1800305C4 (--$MakeAsyncActionHelper@VComTaskPoolHandler@Internal@Windows@@UDisableCausality@WRL@Microsoft@@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180042918 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::SetLauncherExecutableFileWithParamsAsync(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        struct Windows::Storage::IStorageFile *a2,
        HSTRING a3,
        struct Windows::Foundation::IAsyncAction **a4)
{
  unsigned int v9; // edi
  __int64 (__fastcall **v10)(struct Windows::Storage::IStorageFile *, GUID *, _BYTE *); // rax
  int v11; // eax
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rcx
  volatile signed __int64 *v17; // rsi
  HSTRING v18; // rdi
  HSTRING v19; // r14
  _QWORD *v20; // rbx
  __int64 v21; // r8
  __int64 v22; // rcx
  HSTRING v23; // rbx
  HSTRING v24; // rbx
  HSTRING string; // [rsp+20h] [rbp-30h] BYREF
  HSTRING newString; // [rsp+28h] [rbp-28h] BYREF
  _BYTE v27[12]; // [rsp+30h] [rbp-20h] BYREF
  HSTRING v28; // [rsp+40h] [rbp-10h]
  HSTRING v29; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  UINT32 length; // [rsp+80h] [rbp+30h] BYREF

  if ( *((_QWORD *)this + 30) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5C3,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)0x80070005LL);
    return 2147942405LL;
  }
  if ( WindowsGetStringLen(a3) < 0x104 )
  {
    string = 0LL;
    if ( a2 )
    {
      v10 = *(__int64 (__fastcall ***)(struct Windows::Storage::IStorageFile *, GUID *, _BYTE *))a2;
      *(_QWORD *)v27 = 0LL;
      v11 = (*v10)(a2, &GUID_4207a996_ca2f_42f7_bde8_8b10457a7f30, v27);
      v9 = v11;
      if ( v11 < 0 )
      {
        v12 = (unsigned int)v11;
        v13 = 1484LL;
        goto LABEL_23;
      }
      v14 = *(_QWORD *)v27;
      WindowsDeleteString(string);
      string = 0LL;
      v15 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v14 + 96LL))(v14, &string);
      v9 = v15;
      if ( v15 < 0 )
      {
        v12 = (unsigned int)v15;
        v13 = 1485LL;
        goto LABEL_23;
      }
      length = 0;
      WindowsGetStringRawBuffer(string, &length);
      if ( !string || !length )
      {
        v9 = -2147024809;
        v13 = 1489LL;
        v12 = 2147942487LL;
LABEL_23:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
          (const char *)v12);
        v22 = *(_QWORD *)v27;
        if ( *(_QWORD *)v27 )
        {
          *(_QWORD *)v27 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
        }
LABEL_33:
        WindowsDeleteString(string);
        return v9;
      }
      v16 = *(_QWORD *)v27;
      if ( *(_QWORD *)v27 )
      {
        *(_QWORD *)v27 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
    }
    v17 = (volatile signed __int64 *)((char *)this - 16);
    if ( v17 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::AddRef((__int64)v17);
    newString = 0LL;
    WindowsDeleteString(0LL);
    newString = 0LL;
    WindowsDuplicateString(a3, &newString);
    v18 = string;
    v19 = newString;
    v28 = string;
    v29 = newString;
    string = 0LL;
    newString = 0LL;
    if ( v17 )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::AddRef((__int64)v17);
      v18 = v28;
      v19 = v29;
    }
    *(_DWORD *)v27 = 3;
    *(_QWORD *)&v27[4] = 128LL;
    v20 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v20 )
    {
      *v20 = &off_18004B820;
      v20[1] = v17;
      v20[2] = v17;
      if ( v17 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::AddRef((__int64)v17);
      v20[3] = v18;
      v20[4] = v19;
    }
    else
    {
      v20 = 0LL;
    }
    v9 = Windows::Internal::MakeAsyncActionHelper<Windows::Internal::ComTaskPoolHandler,Microsoft::WRL::DisableCausality>(
           v27,
           a4,
           v21,
           v20,
           string,
           (_DWORD)newString);
    if ( v17 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v17);
    if ( (v9 & 0x80000000) == 0 )
    {
      v24 = newString;
      v9 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5FB,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)v9);
      v23 = v28;
      WindowsDeleteString(string);
      string = v23;
      v24 = v29;
      WindowsDeleteString(newString);
      newString = v24;
    }
    WindowsDeleteString(v24);
    newString = 0LL;
    if ( v17 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v17);
    goto LABEL_33;
  }
  v9 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5C6,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)0x80070057LL);
  return v9;
}
