/*
 * XREFs of Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_515cbb8a56233def548db084b8a71522____Windows::Internal::CNoResult_::Run @ 0x18002F9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetGamesListProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPEAUICDSGamesListTileProperties@CDSProperties@WindowsInternal@@@Z @ 0x1800292CC (-_GetGamesListProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPE.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_515cbb8a56233def548db084b8a71522____Windows::Internal::CNoResult_::Run(
        __int64 a1,
        int a2,
        int a3)
{
  Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *v4; // rcx
  int GamesListProperties; // eax
  unsigned int v6; // ebx
  struct WindowsInternal::CDSProperties::ICDSGamesListTileProperties *v7; // rcx
  struct WindowsInternal::CDSProperties::ICDSGamesListTileProperties *v8; // rcx
  struct WindowsInternal::CDSProperties::ICDSGamesListTileProperties *v10[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v10[1] = (struct WindowsInternal::CDSProperties::ICDSGamesListTileProperties *)-2LL;
  if ( a2 != 1 || a3 < 0 )
    return (unsigned int)a3;
  v4 = *(Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer **)(a1 + 8);
  if ( *(_DWORD *)(a1 + 24) == *((_DWORD *)v4 + 38) )
    return 0;
  v10[0] = 0LL;
  GamesListProperties = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_GetGamesListProperties(
                          v4,
                          v10);
  v6 = GamesListProperties;
  if ( GamesListProperties >= 0 )
  {
    GamesListProperties = (*(__int64 (__fastcall **)(struct WindowsInternal::CDSProperties::ICDSGamesListTileProperties *, _QWORD))(*(_QWORD *)v10[0] + 56LL))(
                            v10[0],
                            *(unsigned int *)(a1 + 24));
    v6 = GamesListProperties;
    if ( GamesListProperties >= 0 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + 152LL) = *(_DWORD *)(a1 + 24);
      v8 = v10[0];
      if ( v10[0] )
      {
        v10[0] = 0LL;
        (*(void (__fastcall **)(struct WindowsInternal::CDSProperties::ICDSGamesListTileProperties *))(*(_QWORD *)v8 + 16LL))(v8);
      }
      return 0;
    }
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x55F,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)(unsigned int)GamesListProperties);
  v7 = v10[0];
  if ( v10[0] )
  {
    v10[0] = 0LL;
    (*(void (__fastcall **)(struct WindowsInternal::CDSProperties::ICDSGamesListTileProperties *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v6;
}
