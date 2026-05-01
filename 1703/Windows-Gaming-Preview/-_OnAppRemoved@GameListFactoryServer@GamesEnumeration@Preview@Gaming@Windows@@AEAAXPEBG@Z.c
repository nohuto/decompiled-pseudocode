/*
 * XREFs of ?_OnAppRemoved@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEBG@Z @ 0x18000B5D0
 * Callers:
 *     ?_OnViewContentsChanged@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileInViewChangeEvent@@@Z @ 0x18000B764 (-_OnViewContentsChanged@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4_V.c)
 *     ?_OnAppStateChanged@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4_VISUALELEMENT_EVENT_TYPE@@PEAUIApplicationLifecycleEvent@@@Z @ 0x18000B954 (-_OnAppStateChanged@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4_VISUA.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000A63C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18000C538 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_926821de02ebfb79fb8ab29bc72c01bf__Windows::Gaming::Preview::GamesEnumeration::IGameListRemovedEventHandler_ @ 0x18000D01C (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_926821de02ebfb79fb8ab29bc72c01bf__Wind.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockExclusive@Details@234@XZ @ 0x18001296C (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockExclusive@Details@234@XZ.c)
 *     __security_check_cookie @ 0x180028AF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::_OnAppRemoved(
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *this,
        const unsigned __int16 *a2)
{
  volatile signed __int32 *v3; // rbx
  __int64 v4; // rdi
  int v5; // edi
  const unsigned __int16 *v6; // [rsp+28h] [rbp-40h] BYREF
  PSRWLOCK SRWLock; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v6 = a2;
  v3 = 0LL;
  v4 = *(_QWORD *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v8, &v6) + 24);
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive((char *)this + 136, &SRWLock);
  if ( *((_QWORD *)this + 16) )
  {
    v3 = (volatile signed __int32 *)*((_QWORD *)this + 16);
    _InterlockedIncrement(v3 + 3);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v3 )
  {
    v5 = Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_926821de02ebfb79fb8ab29bc72c01bf__Windows::Gaming::Preview::GamesEnumeration::IGameListRemovedEventHandler_(
           v4,
           v3,
           (char *)this + 128);
    if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v3 + 24LL))(v3, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    }
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB8,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
        (const char *)(unsigned int)v5);
  }
}
