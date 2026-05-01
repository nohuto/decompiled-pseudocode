/*
 * XREFs of ??_GGameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x18003A3E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180042948 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer *__fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer::`scalar deleting destructor'(
        Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  *(_QWORD *)this = &Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer::`vftable';
  *((_QWORD *)this + 1) = &Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfigurationStatics>>'};
  *((_QWORD *)this + 5) = &Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfigurationStatics>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfigurationStatics>>'};
  v4 = *((_QWORD *)this + 12);
  if ( v4 )
    CoDecrementMTAUsage(v4);
  v5 = *((_QWORD *)this + 18);
  if ( v5 )
  {
    *((_QWORD *)this + 18) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  *((_DWORD *)this + 17) = -1073741823;
  v6 = *((_QWORD *)this + 4);
  if ( v6 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
