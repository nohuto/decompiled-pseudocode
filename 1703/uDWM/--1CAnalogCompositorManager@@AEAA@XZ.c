/*
 * XREFs of ??1CAnalogCompositorManager@@AEAA@XZ @ 0x18004CBA4
 * Callers:
 *     _CAnalogCompositorManager::GetInstance_::_2_::_dynamic_atexit_destructor_for__singletonAnalogCompositorManager__ @ 0x18004E720 (_CAnalogCompositorManager--GetInstance_--_2_--_dynamic_atexit_destructor_for__singletonAnalogCom.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800170D8 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ??_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x1800732D0 (--_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x1800733FC (-Destroy@-$DestroyThreadPoolTimer@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180073810 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180074AF8 (-_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180074B18 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x180074B48 (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 */

void __fastcall CAnalogCompositorManager::~CAnalogCompositorManager(CAnalogCompositorManager *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  struct wil::details::wnf_subscription_state_base *v4; // rdx
  void *v5; // rdx
  CONFIGRET v6; // eax
  DWORD v7; // eax
  unsigned int v8; // r8d
  __int64 v9; // rcx
  unsigned int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)&xmmword_1800C0EE0 + 1) )
  {
    v1 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&xmmword_1800C0EE0 + 1) + 128LL))(*((_QWORD *)&xmmword_1800C0EE0
                                                                                             + 1));
    if ( v1 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD5,
        (unsigned int)"windows\\dwm\\udwm\\analogcompositormanager.cpp",
        (const char *)(unsigned int)v1,
        v10);
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)&xmmword_1800C0EE0 + 1) + 64LL))(
           *((_QWORD *)&xmmword_1800C0EE0 + 1),
           qword_1800C0EF8);
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD6,
        (unsigned int)"windows\\dwm\\udwm\\analogcompositormanager.cpp",
        (const char *)(unsigned int)v2,
        v10);
    v3 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)&xmmword_1800C0EE0 + 1) + 80LL))(
           *((_QWORD *)&xmmword_1800C0EE0 + 1),
           qword_1800C0F00);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD7,
        (unsigned int)"windows\\dwm\\udwm\\analogcompositormanager.cpp",
        (const char *)(unsigned int)v3,
        v10);
  }
  if ( *(&hObject + 1) )
    wil::details::DestroyThreadPoolTimer<0>::Destroy((PTP_TIMER)*(&hObject + 1));
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&xmmword_1800C0F10 + 1);
  if ( xmmword_1800C0F10 )
    wil::details::delete_wnf_subscription_state(xmmword_1800C0F10, v4);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&qword_1800C0EF0);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((char *)&xmmword_1800C0EE0 + 8);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&xmmword_1800C0EE0);
  if ( qword_1800C0ED8 )
  {
    v6 = CM_Unregister_Notification();
    v7 = CM_MapCrToWin32Err(v6, 0x507u);
    if ( v7 )
    {
      wil::details::in1diag3::_FailFast_Win32(retaddr, (void *)0x63, v8, (const char *)v7, v10);
      __debugbreak();
    }
    qword_1800C0ED8 = 0LL;
  }
  if ( qword_1800C0ED0 )
    wil::details::event_watcher_state::`scalar deleting destructor'(qword_1800C0ED0, (unsigned int)v5);
  if ( qword_1800C0EC8 )
    wil::details::event_watcher_state::`scalar deleting destructor'(qword_1800C0EC8, (unsigned int)v5);
  if ( qword_1800C0EC0 )
    wil::details::CloseHandle(qword_1800C0EC0, v5);
  if ( qword_1800C0EB8 )
    wil::details::CloseHandle(qword_1800C0EB8, v5);
  v9 = qword_1800C0EB0;
  if ( qword_1800C0EB0 )
  {
    qword_1800C0EB0 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
}
