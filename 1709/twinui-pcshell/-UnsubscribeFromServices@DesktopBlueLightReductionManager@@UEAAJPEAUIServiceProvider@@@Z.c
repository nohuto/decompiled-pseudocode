/*
 * XREFs of ?UnsubscribeFromServices@DesktopBlueLightReductionManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180086300
 * Callers:
 *     <none>
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DesktopBlueLightReductionManager::UnsubscribeFromServices(
        DesktopBlueLightReductionManager *this,
        struct IServiceProvider *a2)
{
  int v4; // eax
  const char *v5; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  try
  {
    if ( *((_DWORD *)this + 38) )
    {
      v8 = 0LL;
      if ( ((int (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
             a2,
             &IID_IImmersiveWindowMessageService,
             &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
             &v8) >= 0 )
      {
        if ( *((_DWORD *)this + 38) )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
        *((_DWORD *)this + 38) = 0;
      }
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    if ( *((_DWORD *)this + 39) )
    {
      v8 = 0LL;
      if ( ((int (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
             a2,
             &SID_IImmersiveMonitorService,
             &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
             &v8) >= 0 )
      {
        if ( *((_DWORD *)this + 39) )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
        *((_DWORD *)this + 39) = 0;
      }
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    if ( *((_DWORD *)this + 40) )
    {
      v8 = 0LL;
      if ( ((int (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
             a2,
             &IID_IImmersiveSessionIdleDetector,
             &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
             &v8) >= 0 )
      {
        if ( *((_DWORD *)this + 40) )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 40LL))(v8);
        *((_DWORD *)this + 40) = 0;
      }
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v4 = (*(__int64 (__fastcall **)(_QWORD, struct IServiceProvider *, _QWORD))(**((_QWORD **)this + 17) + 48LL))(
           *((_QWORD *)this + 17),
           a2,
           0LL);
    if ( v4 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xA3,
        (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
        (const char *)(unsigned int)v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xA6,
                           (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
                           v5);
  }
  return result;
}
