/*
 * XREFs of ?SetLauncherExecutableFileWithParamsAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIStorageFile@Storage@5@PEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x18002AAB0
 * Callers:
 *     ?SetLauncherExecutableFileAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIStorageFile@Storage@5@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x18002AAA0 (-SetLauncherExecutableFileAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800105C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_1800105C0.c)
 *     ??$MakeAsyncActionHelper@VComTaskPoolHandler@Internal@Windows@@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAUIAsyncAction@Foundation@1@W4TrustLevel@@PEAV?$AsyncCallbackBase@VCNoResult@Internal@Windows@@@01@@Z @ 0x18002F5F4 (--$MakeAsyncActionHelper@VComTaskPoolHandler@Internal@Windows@@UDisableCausality@WRL@Microsoft@@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180041970 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::SetLauncherExecutableFileWithParamsAsync(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        __int64 (__fastcall ***a2)(struct Windows::Storage::IStorageFile *, GUID *, __int64 *),
        HSTRING a3,
        struct Windows::Foundation::IAsyncAction **a4)
{
  unsigned int v9; // esi
  __int64 (__fastcall **v10)(struct Windows::Storage::IStorageFile *, GUID *, __int64 *); // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rcx
  volatile signed __int64 *v15; // rbx
  signed __int64 v16; // rax
  __int64 v17; // rcx
  signed __int64 v18; // rtt
  signed __int64 v19; // rax
  signed __int64 v20; // rtt
  HSTRING v21; // rdi
  HSTRING v22; // rsi
  __int64 v23; // r8
  _QWORD *v24; // r9
  signed __int64 v25; // rax
  signed __int64 v26; // rtt
  HSTRING v27; // rdi
  HSTRING v28; // rdi
  HSTRING string; // [rsp+20h] [rbp-50h] BYREF
  HSTRING newString; // [rsp+28h] [rbp-48h] BYREF
  __int64 v31; // [rsp+30h] [rbp-40h] BYREF
  HSTRING v32; // [rsp+38h] [rbp-38h]
  HSTRING v33; // [rsp+40h] [rbp-30h]
  int v34; // [rsp+48h] [rbp-28h] BYREF
  __int64 v35; // [rsp+4Ch] [rbp-24h]
  signed __int64 v36; // [rsp+58h] [rbp-18h]
  signed __int64 v37; // [rsp+60h] [rbp-10h]
  signed __int64 v38; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  UINT32 length; // [rsp+A0h] [rbp+30h] BYREF

  if ( *((_QWORD *)this + 31) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5D3,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)0x80070005LL);
    return 2147942405LL;
  }
  if ( WindowsGetStringLen(a3) < 0x104 )
  {
    string = 0LL;
    if ( a2 )
    {
      v10 = *a2;
      v31 = 0LL;
      v11 = (*v10)((struct Windows::Storage::IStorageFile *)a2, &GUID_4207a996_ca2f_42f7_bde8_8b10457a7f30, &v31);
      v9 = v11;
      if ( v11 < 0 )
      {
        v12 = 1500LL;
LABEL_10:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v12,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
          (const char *)(unsigned int)v11);
        goto LABEL_18;
      }
      v13 = v31;
      WindowsDeleteString(string);
      string = 0LL;
      v11 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v13 + 96LL))(v13, &string);
      v9 = v11;
      if ( v11 < 0 )
      {
        v12 = 1501LL;
        goto LABEL_10;
      }
      length = 0;
      WindowsGetStringRawBuffer(string, &length);
      if ( !string || !length )
      {
        v9 = -2147024809;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5E1,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
          (const char *)0x80070057LL);
LABEL_18:
        v17 = v31;
        if ( v31 )
        {
          v31 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        }
LABEL_43:
        WindowsDeleteString(string);
        return v9;
      }
      v14 = v31;
      if ( v31 )
      {
        v31 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
    }
    v15 = (volatile signed __int64 *)((char *)this - 16);
    if ( this != (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)16 )
    {
      v16 = *((_QWORD *)v15 + 18);
      v36 = v16;
      while ( v16 >= 0 )
      {
        v18 = v16;
        v16 = _InterlockedCompareExchange64(v15 + 18, v16 + 1, v16);
        if ( v18 == v16 )
          goto LABEL_23;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v16 + 16));
    }
LABEL_23:
    newString = 0LL;
    WindowsDeleteString(0LL);
    newString = 0LL;
    WindowsDuplicateString(a3, &newString);
    v32 = string;
    v33 = newString;
    string = 0LL;
    newString = 0LL;
    if ( this != (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)16 )
    {
      v19 = *((_QWORD *)v15 + 18);
      v37 = v19;
      while ( v19 >= 0 )
      {
        v20 = v19;
        v19 = _InterlockedCompareExchange64(v15 + 18, v19 + 1, v19);
        if ( v20 == v19 )
          goto LABEL_28;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v19 + 16));
    }
LABEL_28:
    v21 = v32;
    v22 = v33;
    v34 = 3;
    v35 = 128LL;
    v24 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v24 )
    {
      *v24 = &off_18004A240;
      v24[1] = v15;
      v24[2] = v15;
      if ( v15 )
      {
        v25 = *((_QWORD *)v15 + 18);
        v38 = v25;
        while ( v25 >= 0 )
        {
          v26 = v25;
          v25 = _InterlockedCompareExchange64(v15 + 18, v25 + 1, v25);
          if ( v26 == v25 )
            goto LABEL_34;
        }
        _InterlockedIncrement((volatile signed __int32 *)(2 * v25 + 16));
      }
LABEL_34:
      v24[3] = v21;
      v24[4] = v22;
    }
    else
    {
      v24 = 0LL;
    }
    v9 = Windows::Internal::MakeAsyncActionHelper<Windows::Internal::ComTaskPoolHandler,Microsoft::WRL::DisableCausality>(
           &v34,
           a4,
           v23,
           v24,
           string,
           newString,
           v31);
    if ( v15 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v15);
    if ( (v9 & 0x80000000) == 0 )
    {
      v28 = newString;
      v9 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x60B,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)v9);
      v27 = v32;
      WindowsDeleteString(string);
      string = v27;
      v28 = v33;
      WindowsDeleteString(newString);
      newString = v28;
    }
    WindowsDeleteString(v28);
    newString = 0LL;
    if ( v15 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v15);
    goto LABEL_43;
  }
  v9 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5D6,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)0x80070057LL);
  return v9;
}
