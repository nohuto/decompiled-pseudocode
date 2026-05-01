/*
 * XREFs of ?GetIids@?$CFTMCrossProcClient@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@VNil@Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@@WRL@Microsoft@@@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18001C410
 * Callers:
 *     ?GetIids@?$CFTMCrossProcClient@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@VNil@Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@@WRL@Microsoft@@@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18001BE30 (-GetIids@-$CFTMCrossProcClient@U-$Implements@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIGameListE.c)
 * Callees:
 *     ?_GetRemoteIdentity@CFTMCrossProcClientImpl@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001CD60 (-_GetRemoteIdentity@CFTMCrossProcClientImpl@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFTMCrossProcClient<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::GetIids(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  int RemoteIdentity; // ebx
  void *v6; // rcx
  void *v8; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0;
  *a3 = 0LL;
  v8 = 0LL;
  RemoteIdentity = CFTMCrossProcClientImpl::_GetRemoteIdentity(
                     (CFTMCrossProcClientImpl *)(a1 + 24),
                     &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                     &v8);
  if ( RemoteIdentity >= 0 )
    RemoteIdentity = (*(__int64 (__fastcall **)(void *, _DWORD *, _QWORD *))(*(_QWORD *)v8 + 24LL))(v8, a2, a3);
  v6 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return (unsigned int)RemoteIdentity;
}
