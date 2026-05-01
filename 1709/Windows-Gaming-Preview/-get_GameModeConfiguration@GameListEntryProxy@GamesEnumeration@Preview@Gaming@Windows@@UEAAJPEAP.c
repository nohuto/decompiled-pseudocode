/*
 * XREFs of ?get_GameModeConfiguration@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIGameModeConfiguration@2345@@Z @ 0x180026240
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18000E498 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$ComPtr@.c)
 *     ?_GetRemoteIdentity@CFTMCrossProcClientImpl@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180036964 (-_GetRemoteIdentity@CFTMCrossProcClientImpl@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy::get_GameModeConfiguration(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy *this,
        struct Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration **a2)
{
  __int64 *v4; // rax
  int RemoteIdentity; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0LL;
  v4 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAsyncInfo>>(&v11);
  RemoteIdentity = CFTMCrossProcClientImpl::_GetRemoteIdentity(
                     (Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy *)((char *)this + 16),
                     &GUID_d84a8f8b_8749_4a25_90d3_f6c5a427886d,
                     (void **)v4);
  v6 = RemoteIdentity;
  if ( RemoteIdentity >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, struct Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration **))(*(_QWORD *)v11 + 104LL))(
           v11,
           a2);
    v6 = v7;
    if ( v7 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD7,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v7);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xD5,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)RemoteIdentity);
  }
  v8 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v6;
}
