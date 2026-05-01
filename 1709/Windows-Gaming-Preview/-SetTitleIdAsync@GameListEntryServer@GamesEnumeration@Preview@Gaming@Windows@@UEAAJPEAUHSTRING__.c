/*
 * XREFs of ?SetTitleIdAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x18002AF70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800105C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_1800105C0.c)
 *     ??$MakeAsyncActionHelper@VComTaskPoolHandler@Internal@Windows@@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAUIAsyncAction@Foundation@1@W4TrustLevel@@PEAV?$AsyncCallbackBase@VCNoResult@Internal@Windows@@@01@@Z @ 0x18002F5F4 (--$MakeAsyncActionHelper@VComTaskPoolHandler@Internal@Windows@@UDisableCausality@WRL@Microsoft@@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180041970 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::SetTitleIdAsync(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        HSTRING a2,
        struct Windows::Foundation::IAsyncAction **a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  HRESULT v9; // eax
  int v10; // edi
  char *v11; // rbx
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  HSTRING v14; // rdi
  signed __int64 v15; // rax
  signed __int64 v16; // rtt
  __int64 v17; // r8
  _QWORD *v18; // r9
  signed __int64 v19; // rax
  signed __int64 v20; // rtt
  signed __int64 v21; // [rsp+20h] [rbp-20h]
  signed __int64 v22; // [rsp+28h] [rbp-18h]
  _DWORD v23[4]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  HSTRING newString; // [rsp+70h] [rbp+30h] BYREF
  signed __int64 v26; // [rsp+78h] [rbp+38h]

  if ( !a3 )
  {
    v6 = -2147467261;
    v7 = 1582LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)v6);
    return v6;
  }
  *a3 = 0LL;
  if ( WindowsGetStringLen(a2) >= 0x104 )
  {
    v6 = -2147024809;
    v7 = 1586LL;
    goto LABEL_3;
  }
  newString = 0LL;
  WindowsDeleteString(0LL);
  newString = 0LL;
  v9 = WindowsDuplicateString(a2, &newString);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v11 = (char *)this - 16;
    if ( this != (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)16 )
    {
      v12 = *((_QWORD *)v11 + 18);
      v26 = v12;
      while ( v12 >= 0 )
      {
        v13 = v12;
        v12 = _InterlockedCompareExchange64((volatile signed __int64 *)v11 + 18, v12 + 1, v12);
        if ( v13 == v12 )
          goto LABEL_13;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v12 + 16));
    }
LABEL_13:
    v14 = newString;
    newString = 0LL;
    if ( this != (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)16 )
    {
      v15 = *((_QWORD *)v11 + 18);
      v21 = v15;
      while ( v15 >= 0 )
      {
        v16 = v15;
        v15 = _InterlockedCompareExchange64((volatile signed __int64 *)v11 + 18, v15 + 1, v15);
        if ( v16 == v15 )
          goto LABEL_18;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v15 + 16));
    }
LABEL_18:
    v23[2] = 0;
    v23[0] = 3;
    v23[1] = 128;
    v18 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v18 )
    {
      *v18 = &off_18004A230;
      v18[1] = v11;
      v18[2] = v11;
      if ( this != (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)16 )
      {
        v19 = *((_QWORD *)v11 + 18);
        v22 = v19;
        while ( v19 >= 0 )
        {
          v20 = v19;
          v19 = _InterlockedCompareExchange64((volatile signed __int64 *)v11 + 18, v19 + 1, v19);
          if ( v20 == v19 )
            goto LABEL_24;
        }
        _InterlockedIncrement((volatile signed __int32 *)(2 * v19 + 16));
      }
LABEL_24:
      v18[3] = v14;
    }
    else
    {
      v18 = 0LL;
    }
    v10 = ((__int64 (__fastcall *)(_DWORD *, struct Windows::Foundation::IAsyncAction **, __int64, _QWORD *, signed __int64, signed __int64))Windows::Internal::MakeAsyncActionHelper<Windows::Internal::ComTaskPoolHandler,Microsoft::WRL::DisableCausality>)(
            v23,
            a3,
            v17,
            v18,
            v21,
            v22);
    if ( this != (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)16 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)this - 2);
    if ( v10 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x649,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v10);
    if ( this != (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)16 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)this - 2);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x635,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v9);
  }
  WindowsDeleteString(newString);
  return (unsigned int)v10;
}
