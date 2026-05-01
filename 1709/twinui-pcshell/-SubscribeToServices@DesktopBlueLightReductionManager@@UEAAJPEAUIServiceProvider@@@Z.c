/*
 * XREFs of ?SubscribeToServices@DesktopBlueLightReductionManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180086050
 * Callers:
 *     <none>
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DesktopBlueLightReductionManager::SubscribeToServices(
        DesktopBlueLightReductionManager *this,
        struct IServiceProvider *a2)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  const char *v11; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF
  __int64 v16; // [rsp+78h] [rbp+20h] BYREF

  try
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, struct IServiceProvider *, _QWORD))(**((_QWORD **)this + 17) + 32LL))(
           *((_QWORD *)this + 17),
           a2,
           0LL);
    if ( v4 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x61,
        (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
        (const char *)(unsigned int)v4);
    v16 = 0LL;
    v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
           a2,
           &IID_IImmersiveWindowMessageService,
           &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
           &v16);
    if ( v5 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x64,
        (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
        (const char *)(unsigned int)v5);
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64, char *))(*(_QWORD *)v16 + 24LL))(
           v16,
           30LL,
           ((unsigned __int64)this + 64) & -(__int64)(this != (DesktopBlueLightReductionManager *)40),
           (char *)this + 152);
    if ( v6 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x65,
        (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
        (const char *)(unsigned int)v6);
    v15 = 0LL;
    v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
           a2,
           &SID_IImmersiveMonitorService,
           &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
           &v15);
    if ( v7 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x68,
        (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
        (const char *)(unsigned int)v7);
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v15 + 24LL))(
           v15,
           ((unsigned __int64)this + 72) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 40) >> 64),
           (char *)this + 156);
    if ( v8 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x69,
        (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
        (const char *)(unsigned int)v8);
    v14 = 0LL;
    v9 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
           a2,
           &IID_IImmersiveSessionIdleDetector,
           &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
           &v14);
    if ( v9 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x6C,
        (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
        (const char *)(unsigned int)v9);
    v10 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v14 + 32LL))(
            v14,
            ((unsigned __int64)this + 80) & -(__int64)(this != (DesktopBlueLightReductionManager *)40),
            (char *)this + 160);
    if ( v10 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x6D,
        (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
        (const char *)(unsigned int)v10);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x70,
                           (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
                           v11);
  }
  return result;
}
