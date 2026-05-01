/*
 * XREFs of ?_InitializeId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800274B0
 * Callers:
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAUIUnifiedTileManager@789@PEAUIGameListChangedEventHandler@2345@@Z @ 0x1800262F4 (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIU.c)
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@PEAUIGameListChangedEventHandler@2345@@Z @ 0x180026550 (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID.c)
 *     ?_ReinitializeAfterAttachingGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAX_N@Z @ 0x18002843C (-_ReinitializeAfterAttachingGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEAU?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@_N@Z @ 0x180037FD0 (-GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEA.c)
 *     __security_check_cookie @ 0x180040F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeId(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        __int64 a2)
{
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  LPOLESTR v7; // rbx
  LPOLESTR v8; // rcx
  LPOLESTR v9; // rcx
  WCHAR *v10; // rbx
  unsigned __int64 v11; // rax
  UINT32 v12; // esi
  LPOLESTR lpsz[2]; // [rsp+20h] [rbp-30h] BYREF
  IID rclsid; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  lpsz[1] = (LPOLESTR)-2LL;
  v3 = *((_QWORD *)this + 33);
  if ( v3 )
  {
    lpsz[0] = 0LL;
    v4 = (*(__int64 (__fastcall **)(__int64, LPOLESTR *))(*(_QWORD *)v3 + 48LL))(v3, lpsz);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 477LL;
      goto LABEL_6;
    }
    v7 = lpsz[0];
    WindowsDeleteString(*((HSTRING *)this + 31));
    *((_QWORD *)this + 31) = 0LL;
    v4 = (*(__int64 (__fastcall **)(LPOLESTR, char *))(*(_QWORD *)v7 + 56LL))(v7, (char *)this + 248);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 479LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v6,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v4);
      v8 = lpsz[0];
      if ( lpsz[0] )
      {
        lpsz[0] = 0LL;
        (*(void (__fastcall **)(LPOLESTR))(*(_QWORD *)v8 + 16LL))(v8);
      }
      return v5;
    }
    WindowsDeleteString(*((HSTRING *)this + 30));
    *((_QWORD *)this + 30) = 0LL;
    WindowsDuplicateString(*((HSTRING *)this + 31), (HSTRING *)this + 30);
    v9 = lpsz[0];
    if ( lpsz[0] )
    {
      lpsz[0] = 0LL;
      (*(void (__fastcall **)(LPOLESTR))(*(_QWORD *)v9 + 16LL))(v9);
    }
    return 0LL;
  }
  if ( *((_QWORD *)this + 36) && *((_QWORD *)this + 37) )
  {
    LOBYTE(a2) = 1;
    rclsid = *(IID *)Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetFirstGameConfig(
                       *((_QWORD *)this + 36),
                       a2);
    StringFromCLSID(&rclsid, lpsz);
    v10 = lpsz[0];
    if ( lpsz[0] )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( lpsz[0][v11] );
      if ( v11 <= 0xFFFFFFFF )
      {
        v12 = v11;
        WindowsDeleteString(*((HSTRING *)this + 30));
        *((_QWORD *)this + 30) = 0LL;
        WindowsCreateString(v10, v12, (HSTRING *)this + 30);
        v10 = lpsz[0];
      }
    }
    CoTaskMemFree(v10);
    return 0LL;
  }
  v5 = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1E5,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)0x8000FFFFLL);
  return v5;
}
