/*
 * XREFs of ?_OnAppStateChanged@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4_VISUALELEMENT_EVENT_TYPE@@PEAUIApplicationLifecycleEvent@@@Z @ 0x18000B954
 * Callers:
 *     std::_Func_impl__lambda_4012603a3bcfb6075dae9d9ba449087e__std::allocator_int__long_enum__VISUALELEMENT_EVENT_TYPE_IApplicationLifecycleEvent_____ptr64_::_Do_call @ 0x18000D340 (std--_Func_impl__lambda_4012603a3bcfb6075dae9d9ba449087e__std--allocator_int__long__ea_18000D340.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002A4C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_OnAppAdded@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEAUITileInfo@@@Z @ 0x18000B538 (-_OnAppAdded@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEAUITileInfo@@.c)
 *     ?_OnAppRemoved@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEBG@Z @ 0x18000B5D0 (-_OnAppRemoved@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEBG@Z.c)
 *     ?_OnAppUpdated@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEAUITileInfo@@@Z @ 0x18000B6C8 (-_OnAppUpdated@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEAUITileInfo.c)
 *     ?GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUIApplicationIdentifier@@PEAPEAG@Z @ 0x18001DC18 (-GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUIApplicationIdentifier@@PEAPE.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::_OnAppStateChanged(
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *a1,
        int a2,
        __int64 a3)
{
  int v5; // eax
  unsigned __int16 **v6; // r8
  unsigned int v7; // edi
  int AppUserModelId; // eax
  struct ITileInfo *v9; // rcx
  void *v10; // rdi
  struct ITileInfo *v11; // rcx
  int v12; // eax
  unsigned __int16 **v13; // r8
  int v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  struct ITileInfo *v18; // rcx
  __int64 v19; // rdi
  struct ITileInfo *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // [rsp+20h] [rbp-30h] BYREF
  Windows::Gaming::Preview::GamesEnumeration *v23[2]; // [rsp+28h] [rbp-28h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-18h] BYREF
  __int64 v25; // [rsp+40h] [rbp-10h]
  __int64 v26; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct ITileInfo *i; // [rsp+88h] [rbp+38h] BYREF

  v23[1] = (Windows::Gaming::Preview::GamesEnumeration *)-2LL;
  if ( a2 != 20 && a2 != 23 )
  {
    if ( a2 == 25 || a2 == 29 )
    {
      i = 0LL;
      v5 = (*(__int64 (__fastcall **)(__int64, struct ITileInfo **))(*(_QWORD *)a3 + 24LL))(a3, &i);
      v7 = v5;
      if ( v5 >= 0 )
      {
        pv = 0LL;
        v25 = -1LL;
        v26 = -1LL;
        AppUserModelId = Windows::Gaming::Preview::GamesEnumeration::GetAppUserModelId(
                           i,
                           (struct IApplicationIdentifier *)&pv,
                           v6);
        v7 = AppUserModelId;
        if ( AppUserModelId >= 0 )
        {
          v10 = pv;
          Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::_OnAppRemoved(
            a1,
            (const unsigned __int16 *)pv);
          if ( v10 )
            CoTaskMemFree(v10);
          v11 = i;
          if ( !i )
            return 0LL;
          i = 0LL;
          goto LABEL_51;
        }
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x14B,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
          (const char *)(unsigned int)AppUserModelId);
        if ( pv )
          CoTaskMemFree(pv);
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x144,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
          (const char *)(unsigned int)v5);
      }
      v9 = i;
      if ( i )
      {
        i = 0LL;
LABEL_34:
        (*(void (__fastcall **)(struct ITileInfo *))(*(_QWORD *)v9 + 16LL))(v9);
      }
      return v7;
    }
    if ( a2 != 30 )
      return 0LL;
  }
  v23[0] = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, Windows::Gaming::Preview::GamesEnumeration **))(*(_QWORD *)a3 + 24LL))(
          a3,
          v23);
  v7 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x110,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_32;
  }
  if ( a2 != 23 )
  {
    pv = 0LL;
    v25 = -1LL;
    v26 = -1LL;
    v14 = Windows::Gaming::Preview::GamesEnumeration::GetAppUserModelId(
            v23[0],
            (struct IApplicationIdentifier *)&pv,
            v13);
    v7 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x115,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
        (const char *)(unsigned int)v14);
      goto LABEL_25;
    }
    if ( !(unsigned int)_o__wcsnicmp(pv, L"Microsoft.Windows.ShellExperienceHost", 38LL) )
    {
      v7 = 0;
LABEL_25:
      if ( pv )
        CoTaskMemFree(pv);
      goto LABEL_32;
    }
    if ( pv )
      CoTaskMemFree(pv);
  }
  v22 = 0LL;
  v15 = (*(__int64 (__fastcall **)(_QWORD *, Windows::Gaming::Preview::GamesEnumeration *, __int64 *))(**((_QWORD **)a1 + 11) + 24LL))(
          *((_QWORD **)a1 + 11),
          v23[0],
          &v22);
  v7 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x126,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v15);
    v16 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
LABEL_32:
    v9 = v23[0];
    if ( v23[0] )
    {
      v23[0] = 0LL;
      goto LABEL_34;
    }
    return v7;
  }
  if ( v22 )
  {
    v18 = 0LL;
    for ( i = 0LL; ; v18 = i )
    {
      v19 = v22;
      if ( v18 )
      {
        i = 0LL;
        (*(void (__fastcall **)(struct ITileInfo *))(*(_QWORD *)v18 + 16LL))(v18);
      }
      if ( (*(unsigned int (__fastcall **)(__int64, struct ITileInfo **))(*(_QWORD *)v19 + 24LL))(v19, &i) )
        break;
      if ( a2 == 23 )
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::_OnAppUpdated(a1, i);
      else
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::_OnAppAdded(a1, i);
    }
    v20 = i;
    if ( i )
    {
      i = 0LL;
      (*(void (__fastcall **)(struct ITileInfo *))(*(_QWORD *)v20 + 16LL))(v20);
    }
  }
  v21 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v11 = v23[0];
  if ( !v23[0] )
    return 0LL;
  v23[0] = 0LL;
LABEL_51:
  (*(void (__fastcall **)(struct ITileInfo *))(*(_QWORD *)v11 + 16LL))(v11);
  return 0LL;
}
