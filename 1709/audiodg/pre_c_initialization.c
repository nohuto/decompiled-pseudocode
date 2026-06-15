/*
 * XREFs of pre_c_initialization @ 0x14001C930
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@CRegObject@ATL@@UEAAKXZ @ 0x14001C260 (-AddRef@CRegObject@ATL@@UEAAKXZ.c)
 *     ?UpdateRegistry@CSystemAudioDeviceOffloadGraph@@SAJH@Z @ 0x14001C270 (-UpdateRegistry@CSystemAudioDeviceOffloadGraph@@SAJH@Z.c)
 *     ?OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ @ 0x14001C2A0 (-OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ.c)
 *     __scrt_stub_for_acrt_uninitialize @ 0x14001C2C0 (__scrt_stub_for_acrt_uninitialize.c)
 *     __scrt_initialize_onexit_tables @ 0x14001D010 (__scrt_initialize_onexit_tables.c)
 *     atexit @ 0x14001D22C (atexit.c)
 *     _get_startup_file_mode @ 0x14001D3A0 (_get_startup_file_mode.c)
 *     ?__scrt_initialize_type_info@@YAXXZ @ 0x14001D3A8 (-__scrt_initialize_type_info@@YAXXZ.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x14001D3B8 (__scrt_initialize_default_local_stdio_options.c)
 *     __scrt_fastfail @ 0x14001D3EC (__scrt_fastfail.c)
 *     _RTC_Initialize @ 0x14001D618 (_RTC_Initialize.c)
 *     __p__commode @ 0x14001D90A (__p__commode.c)
 *     _configthreadlocale @ 0x14001D93A (_configthreadlocale.c)
 *     _o__configure_wide_argv_0 @ 0x14001D940 (_o__configure_wide_argv_0.c)
 *     _o__initialize_wide_environment_0 @ 0x14001D95E (_o__initialize_wide_environment_0.c)
 *     _set_app_type @ 0x14001D982 (_set_app_type.c)
 *     _o__set_fmode_0 @ 0x14001D988 (_o__set_fmode_0.c)
 */

__int64 pre_c_initialization()
{
  unsigned int startup_file_mode; // eax
  int *v1; // rbx
  ATL::CRegObject *v2; // rcx
  unsigned int v3; // eax
  Windows::Media::Devices::SendCommandAsyncOperation *v4; // rcx
  Windows::Media::Devices::SendCommandAsyncOperation *v5; // rcx
  int updated; // eax

  set_app_type(_crt_gui_app);
  startup_file_mode = get_startup_file_mode();
  o__set_fmode_0(startup_file_mode);
  v1 = _p__commode();
  *v1 = CSystemAudioDeviceOffloadGraph::UpdateRegistry();
  if ( !(unsigned __int8)_scrt_initialize_onexit_tables(1LL) )
  {
    _scrt_fastfail(7LL);
    __debugbreak();
  }
  RTC_Initialize();
  atexit(RTC_Terminate);
  v3 = ATL::CRegObject::AddRef(v2);
  if ( (unsigned int)o__configure_wide_argv_0(v3) )
  {
    _scrt_fastfail(7LL);
    JUMPOUT(0x14001C9DALL);
  }
  __scrt_initialize_type_info();
  _scrt_initialize_default_local_stdio_options();
  Windows::Media::Devices::SendCommandAsyncOperation::OnCancel(v4);
  Windows::Media::Devices::SendCommandAsyncOperation::OnCancel(v5);
  updated = CSystemAudioDeviceOffloadGraph::UpdateRegistry();
  configthreadlocale(updated);
  if ( _scrt_stub_for_acrt_uninitialize() )
    o__initialize_wide_environment_0();
  CSystemAudioDeviceOffloadGraph::UpdateRegistry();
  return 0LL;
}
