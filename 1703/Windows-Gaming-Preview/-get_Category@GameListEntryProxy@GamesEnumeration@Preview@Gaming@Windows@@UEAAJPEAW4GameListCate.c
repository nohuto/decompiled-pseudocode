/*
 * XREFs of ?get_Category@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAW4GameListCategory@2345@@Z @ 0x180012B60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800029D0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002A4C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180014E6C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@WRL@M.c)
 *     ?_GetRemoteIdentity@CFTMCrossProcClientImpl@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001CD60 (-_GetRemoteIdentity@CFTMCrossProcClientImpl@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy::get_Category(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy *this,
        enum Windows::Gaming::Preview::GamesEnumeration::GameListCategory *a2)
{
  void **v4; // rax
  int RemoteIdentity; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0LL;
  v4 = (void **)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>>(&v11);
  RemoteIdentity = CFTMCrossProcClientImpl::_GetRemoteIdentity(
                     (Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy *)((char *)this + 8),
                     &GUID_735924d3_811f_4494_b69c_c641a0c61543,
                     v4);
  v6 = RemoteIdentity;
  if ( RemoteIdentity >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, enum Windows::Gaming::Preview::GamesEnumeration::GameListCategory *))(*(_QWORD *)v11 + 64LL))(
           v11,
           a2);
    v6 = v7;
    if ( v7 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3B,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v7);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x39,
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
