/*
 * XREFs of ??_GGameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x1800395D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800415E4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer *__fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer::`scalar deleting destructor'(
        Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  *(_QWORD *)this = &Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer::`vftable';
  *((_QWORD *)this + 1) = &Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer::`vftable'{for `Microsoft::WRL::FtmBase'};
  *((_QWORD *)this + 6) = &Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfigurationStatics>'};
  v4 = *((_QWORD *)this + 13);
  if ( v4 )
    CoDecrementMTAUsage(v4);
  v5 = *((_QWORD *)this + 19);
  if ( v5 )
  {
    *((_QWORD *)this + 19) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  *((_DWORD *)this + 19) = -1073741823;
  v6 = *((_QWORD *)this + 5);
  if ( v6 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xA0uLL);
  return this;
}
