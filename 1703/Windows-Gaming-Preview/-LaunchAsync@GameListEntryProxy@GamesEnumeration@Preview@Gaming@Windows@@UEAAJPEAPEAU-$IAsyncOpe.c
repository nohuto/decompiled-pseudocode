/*
 * XREFs of ?LaunchAsync@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z @ 0x180012A80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800029D0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002A4C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000A63C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180014E6C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@WRL@M.c)
 *     ?_GetRemoteIdentity@CFTMCrossProcClientImpl@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001CD60 (-_GetRemoteIdentity@CFTMCrossProcClientImpl@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy::LaunchAsync(__int64 a1, __int64 a2)
{
  void **v4; // rax
  int RemoteIdentity; // eax
  unsigned int v6; // ebx
  HRESULT v7; // eax
  int v8; // eax
  IUnknown *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  IUnknown *pUnk; // [rsp+30h] [rbp+8h] BYREF

  pUnk = 0LL;
  v4 = (void **)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>>(&pUnk);
  RemoteIdentity = CFTMCrossProcClientImpl::_GetRemoteIdentity(
                     (CFTMCrossProcClientImpl *)(a1 + 8),
                     &GUID_735924d3_811f_4494_b69c_c641a0c61543,
                     v4);
  v6 = RemoteIdentity;
  if ( RemoteIdentity >= 0 )
  {
    v7 = CoAllowSetForegroundWindow(pUnk, 0LL);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2D,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v7);
    v8 = ((__int64 (__fastcall *)(IUnknown *, __int64))pUnk->lpVtbl[2].AddRef)(pUnk, a2);
    v6 = v8;
    if ( v8 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v8);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x26,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)RemoteIdentity);
  }
  v9 = pUnk;
  if ( pUnk )
  {
    pUnk = 0LL;
    ((void (__fastcall *)(IUnknown *))v9->lpVtbl->Release)(v9);
  }
  return v6;
}
