/*
 * XREFs of ?SetCategoryAsync@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJW4GameListCategory@2345@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x180012CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800029D0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002A4C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180014E6C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@WRL@M.c)
 *     ?_GetRemoteIdentity@CFTMCrossProcClientImpl@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001CD60 (-_GetRemoteIdentity@CFTMCrossProcClientImpl@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy::SetCategoryAsync(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  void **v6; // rax
  int RemoteIdentity; // eax
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = 0LL;
  v6 = (void **)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>>(&v13);
  RemoteIdentity = CFTMCrossProcClientImpl::_GetRemoteIdentity(
                     (CFTMCrossProcClientImpl *)(a1 + 8),
                     &GUID_735924d3_811f_4494_b69c_c641a0c61543,
                     v6);
  v8 = RemoteIdentity;
  if ( RemoteIdentity >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v13 + 80LL))(v13, a2, a3);
    v8 = v9;
    if ( v9 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x54,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v9);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x52,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)RemoteIdentity);
  }
  v10 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return v8;
}
