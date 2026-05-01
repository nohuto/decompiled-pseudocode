/*
 * XREFs of ?Release@GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAKXZ @ 0x180025120
 * Callers:
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@UIGameListStatics2@GamesEnumeration@Preview@Gaming@Windows@@VNil@Details@23@$01@WRL@Microsoft@@W7EAAKXZ @ 0x180021DA0 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIGameListStatics@GamesEnumer.c)
 *     ?Release@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WEA@EAAKXZ @ 0x180021F20 (-Release@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WEA@EAAKXZ.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIGameModeUserConfigurationStatics@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@WDA@EAAKXZ @ 0x180021F60 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIGameModeUserConfigurationSt.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer::Release(
        Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer *this)
{
  unsigned __int32 v1; // edi
  int v2; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 19);
  if ( v1 )
  {
    if ( (*((_BYTE *)this + 96) & 4) == 0 && v1 == 1 )
      goto LABEL_7;
  }
  else
  {
    v2 = *((_DWORD *)this + 24) >> 2;
    (*(void (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer *, __int64))(*(_QWORD *)this + 56LL))(
      this,
      1LL);
    if ( (v2 & 1) != 0 && Microsoft::WRL::Details::ModuleBase::module_ )
LABEL_7:
      _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  }
  return v1;
}
