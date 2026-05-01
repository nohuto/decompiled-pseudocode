/*
 * XREFs of ?_OnViewContentsChanged@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileInViewChangeEvent@@@Z @ 0x18000B764
 * Callers:
 *     std::_Func_impl__lambda_3d906c606aac7fe0753d996226436724__std::allocator_int__long_enum__VISUALELEMENT_EVENT_TYPE_ITileInViewChangeEvent_____ptr64_::_Do_call @ 0x18000D1C0 (std--_Func_impl__lambda_3d906c606aac7fe0753d996226436724__std--allocator_int__long__ea_18000D1C0.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002A4C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_OnAppAdded@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEAUITileInfo@@@Z @ 0x18000B538 (-_OnAppAdded@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEAUITileInfo@@.c)
 *     ?_OnAppRemoved@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEBG@Z @ 0x18000B5D0 (-_OnAppRemoved@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEBG@Z.c)
 *     ?GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z @ 0x18001D948 (-GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z.c)
 *     __security_check_cookie @ 0x180028AF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::_OnViewContentsChanged(
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *a1,
        int a2,
        __int64 a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  int v9; // eax
  unsigned __int16 **v10; // r8
  int AppUserModelId; // eax
  struct ITileInfo *v12; // rcx
  void *v13; // rbx
  struct ITileInfo *v14; // rcx
  struct ITileInfo *v15; // [rsp+28h] [rbp-29h] BYREF
  LPVOID pv[2]; // [rsp+38h] [rbp-19h] BYREF
  __int64 v17; // [rsp+48h] [rbp-9h]
  __int64 v18; // [rsp+58h] [rbp+7h]
  _QWORD v19[3]; // [rsp+60h] [rbp+Fh] BYREF
  __int128 v20; // [rsp+78h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v18 = -2LL;
  if ( (unsigned int)(a2 - 3) <= 1 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a3 + 32LL))(a3, v19);
    if ( v6 < 0 )
    {
      v7 = 220LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v7,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
    if ( v19[0] == qword_18003B2C0 && v19[1] == qword_18003B2C8 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a3 + 24LL))(a3, &v20);
      if ( v6 < 0 )
      {
        v7 = 227LL;
        goto LABEL_4;
      }
      v15 = 0LL;
      *(_OWORD *)pv = v20;
      v9 = (*(__int64 (__fastcall **)(_QWORD *, LPVOID *, struct ITileInfo **))(**((_QWORD **)a1 + 11) + 48LL))(
             *((_QWORD **)a1 + 11),
             pv,
             &v15);
      v6 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0xE6,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
          (const char *)(unsigned int)v9);
LABEL_17:
        v12 = v15;
        if ( v15 )
        {
          v15 = 0LL;
          (*(void (__fastcall **)(struct ITileInfo *))(*(_QWORD *)v12 + 16LL))(v12);
        }
        return (unsigned int)v6;
      }
      if ( a2 == 3 )
      {
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::_OnAppAdded(a1, v15);
      }
      else
      {
        pv[0] = 0LL;
        pv[1] = (LPVOID)-1LL;
        v17 = -1LL;
        AppUserModelId = Windows::Gaming::Preview::GamesEnumeration::GetAppUserModelId(v15, (struct ITileInfo *)pv, v10);
        v6 = AppUserModelId;
        if ( AppUserModelId < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0xF1,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
            (const char *)(unsigned int)AppUserModelId);
          if ( pv[0] )
            CoTaskMemFree(pv[0]);
          goto LABEL_17;
        }
        v13 = pv[0];
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::_OnAppRemoved(
          a1,
          (const unsigned __int16 *)pv[0]);
        if ( v13 )
          CoTaskMemFree(v13);
      }
      v14 = v15;
      if ( v15 )
      {
        v15 = 0LL;
        (*(void (__fastcall **)(struct ITileInfo *))(*(_QWORD *)v14 + 16LL))(v14);
      }
    }
  }
  return 0LL;
}
